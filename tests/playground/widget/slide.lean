/-
Copyright (c) 2021 Wojciech Nawrocki. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Widget.ToHtmlFormat

open Lean.Widget (ToHtmlFormat Html)
open scoped Lean.Widget.Jsx

@[irreducible]
def Slide (n : Nat) : Type := Unit
@[irreducible]
def slide (n : Nat) : Slide n := ()

def css : String := "
  ul {
    list-style-type: none;
    text-align: left;
  }

  code {
    color: black;
  }
"

def mkSlide (heading : String) (contents : Html) :=
  <div>
    <style>{css}</style>
    <center>
      <h2>{heading}</h2>
      {contents}
    </center>
  </div>

instance : ToHtmlFormat (Slide 0) where
  formatHtml _ :=
    <div> <center>
      <h1>Widgets in Lean 4</h1>
      <h2>CMU-Pitt Lean</h2>
      <br/>
      <h2>Wojciech Nawrocki</h2>
      <h2>13 Oct 2021</h2>
    </center> </div>
#check slide 0

instance : ToHtmlFormat (Slide 1) where
  formatHtml _ := mkSlide
    "What are widgets?"
    <span>
      For our purposes, a <i>widget </i> is a UI component embedded in a code editor and definable in the file or module being edited. <br />

      A Lean widget is <b>this</b>.
    </span>
#check slide 1

instance : ToHtmlFormat (Slide 2) where
  formatHtml _ := mkSlide
    "History: Lean 3"
    <span>
      Interactive components for Lean were first designed and implemented in Lean 3 by Ed Ayers. <b>ProofWidgets </b> are described in his <a href="https://www.edayers.com/thesis">PhD thesis</a>{" "}[Ayers '21]. The implementation was polished by Gabriel Ebner and Bryan Gin-ge Chen. A respectable history of interactive UIs in other provers ─ see Ed's <a href="https://drive.google.com/file/d/1bf--kVgyximCUs7cIJLB2Ktd_07RX3nB/view">talk</a>{" "}at ITP '21.<br />

      The core of ProofWidgets is a <i>server-side </i> execution environment and <i>Virtual DOM </i> (VDOM) implementation.
    </span>
#check slide 2

instance : ToHtmlFormat (Slide 3) where
  formatHtml _ := mkSlide
    "How a Lean 3 editor works"
    <span>
      <img src="https://voidma.in/images/server_protocol.png" />
      <small>Adapted from [Ayers '21].</small>
    </span>
#check slide 3

-- slide 4

instance : ToHtmlFormat (Slide 5) where
  formatHtml _ := mkSlide
    "Programmable webpages are VDOM trees"
    <span>
      User interaction changes the <button «class»="hover-hot-pink">page contents</button>{" "}which must then be re-drawn. How do this while minimising (expensive!) changes to the DOM tree and running arbitrary code? VDOM is one answer. <br />

      VDOM is a <i>virtual </i> copy of the DOM tree, stored only in memory and <i>never drawn</i>. Page interactions produce a new copy, VDOM', which is then inspected for changes with regards to VDOM. Then only these changes are rendered to the real DOM. In the <a href="https://reactjs.org/">React.js</a>{" "}library, this is known as <i>reconcillation</i>.
    </span>
#check slide 5

instance : ToHtmlFormat (Slide 6) where
  formatHtml _ := mkSlide ""
    <span>
      <img src="https://i2.wp.com/programmingwithmosh.com/wp-content/uploads/2018/11/lnrn_0201.png?ssl=1" />
      <i>"Learning React Native"</i>, O'Reilly Media, 2015
    </span>
#check slide 6

instance : ToHtmlFormat (Slide 7) where
  formatHtml _ := mkSlide
    "How ProofWidgets work"
    <span>
      <img src="https://www.edayers.com/WidgetsOverview.png" />
      <small>[Ayers '21]</small>
    </span>
#check slide 7

instance : ToHtmlFormat (Slide 8) where
  formatHtml _ := mkSlide
    "The trade-offs in ProofWidgets' design"
    <ul>
      <li>+ All visualisation code is Lean</li>
      <li>+ Fully programmable</li>
      <li>+ Direct in-memory access to expressions, types, tactics</li>
      <li>- Performance issues due to server-side VDOM</li>
      <li>- Performance issues due to lack of <code>async</code></li>
      <li>- Very hard to extend the JS side (with <code>MathJax</code>, say)</li>
    </ul>
#check slide 8

instance : ToHtmlFormat (Slide 9) where
  formatHtml _ := mkSlide
    "Widgets4 design principles"
    <ul>
      <li>· Recreate and improve upon ProofWidgets
        <ul>
          <li>· More performant</li>
          <li>· More extensible, eventually</li>
        </ul>
      </li>
      <li>· Tower of abstractions</li>
    </ul>
#check slide 9

instance : ToHtmlFormat (Slide 10) where
  formatHtml _ := mkSlide
    "How a Lean 4 editor works"
    <span>
      <img src="https://microsoft.github.io/language-server-protocol/overviews/lsp/img/language-server-sequence.png" />
      Language Server Protocol
    </span>
#check slide 10

instance : ToHtmlFormat (Slide 11) where
  formatHtml _ := mkSlide
    "Widgets4 server"
    <ul>
      <li>· Store expressions, definitions, theorems, and execute tactics on the server</li>
      <li>· The client can execute functions <i>on the server </i> via <i>Remote Procedure Calls </i> (RPC)</li>
      <li>· Widgets4 requests are an extension to LSP</li>
    </ul>
#check slide 11

instance : ToHtmlFormat (Slide 12) where
  formatHtml _ := mkSlide
    "Remote Procedure Calls"
    <span>
      Provide an <i>illusion </i> of direct access to expressions/theorems/etc in client-side UI code
    </span>
#check slide 12

instance : ToHtmlFormat (Slide 13) where
  formatHtml _ := mkSlide
    "Tower of abstractions"
    <span>
      <blockquote>By providing such a tower of abstractions for writing syntax sugars, of which we will see more levels below, we want to enable users to work in the simplest model appropriate for their respective use case while always keeping open the option to switch to a lower, more expressive level.</blockquote>
      <cite>"The Lean 4 Theorem Prover and Programming Language"</cite>. de Moura, Ullrich. CADE 28
    </span>
#check slide 13

instance : ToHtmlFormat (Slide 14) where
  formatHtml _ := mkSlide
    "Abstraction level 1: builtin widgets"
    <ul>
      <li>· Users don't have to do anything, it "just works"</li>
      <li>· Help with programming and proving in Lean 3/4</li>
      <li><img src="https://www.edayers.com/Coordinates.png" />[Ayers '21]</li>
    </ul>
#check slide 14

instance : ToHtmlFormat (Slide 15) where
  formatHtml _ := mkSlide
    "Now also in.. Vim?!"
    <div>
      Rish Vaishnav, Gabriel Ebner and Julian Berman added support for Lean 3 <b>and </b> Lean 4 builtin widgets to the Neovim plugin <a href="https://github.com/Julian/lean.nvim">Julian/lean.nvim</a>.
    </div>
#check slide 15

instance : ToHtmlFormat (Slide 16) where
  formatHtml _ := mkSlide
    "Abstraction level 2: <code>ToHtmlFormat</code>"
    <ul>
      <li>· Specify how your types should be visualized</li>
      <li>· Inspired by examples from Alectryon [<cite>"Untangling mechanized proofs"</cite>. Pit-Claudel. SLE '20]</li>
      <li>· Purely declarative, no custom code in the UI</li>
      <li>· Conjecture: may suffice for a majority of use cases</li>
    </ul>
#check slide 16

instance : ToHtmlFormat (Slide 17) where
  formatHtml _ := mkSlide
    "Abstraction level 3: Arbitrary code"
    <ul>
      <li>· Powerful framework in ProofWidgets</li>
      <li>· No real story in Lean 4.. yet!</li>
    </ul>
#check slide 17

instance : ToHtmlFormat (Slide 18) where
  formatHtml _ := mkSlide
    "Programming ProofWidgets"
    <span><a href="https://github.com/SnobbyDragon/leanfifteen">SnobbyDragon/leanfifteen</a>{" "}by Angela Li</span>
#check slide 18

instance : ToHtmlFormat (Slide 19) where
  formatHtml _ := mkSlide
    "Programming Widgets4: server-side"
    <ul>
      <li>+ It works</li>
      <li>- Low level, missing tutorial documentation</li>
      <li>- Users may not want to do it?</li>
    </ul>
#check slide 19

instance : ToHtmlFormat (Slide 20) where
  formatHtml _ := mkSlide
    "Programming Widgets4: client-side"
    <ul>
      <li><center>{"🚧"}<b>WIP</b>{"👷"}</center></li>
      <li>- Only JavaScript at the moment</li>
      <li>- Not definable in Lean projects yet</li>
      <li>? Can we compile Lean to WebAssembly? Conjecture: 2022, once WASM finalizes support for a few C++ features.</li>
      <li>? ProofWidgets-style programming possible (in principle) to implement as a plugin.</li>
    </ul>
#check slide 20



































-- Presentation starts here.
#check Slide
#check slide 0
#check slide 1
#check slide 2
-- First, let's dive head-first into the implementation.
#check slide 3
instance : ToHtmlFormat (Slide 4) where
  formatHtml _ := mkSlide
    "Webpages are DOM trees"
    <div>
      <ul>
        {id "blah"}
        <li style="color:red;">The Document Object Model..</li>
        <li>interprets HTML files as trees.</li>
      </ul>
    </div>
#check slide 4
#check slide 5
#check slide 6
#check slide 7
#check slide 8
#check slide 9
#check slide 10
#check slide 11
#check slide 12
-- So far I have been talking primarily about implementation.
-- What does this look like from the user's perspective?
#check slide 13
#check slide 14
#check (x y : List Nat) → (x ++ y) ++ [1, 2] = x ++ (y ++ [1, 2])
#check slide 15
#check slide 16
#check slide 17
#check slide 18
#check slide 19
#check slide 20
