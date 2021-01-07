import Lean.Message

namespace Lean.Syntax

/-- Bottom-up recursively rewrites syntax elements matching `p` by `f`. -/
partial def rewriteMatching (p : Syntax → Bool) (f : Syntax → Syntax)
  : Syntax → Syntax
  | node k args => node k <| args.map (rewriteMatching p f)
  | s => if p s then f s else s

/-- Finds the first, smallest subtree matching `p`. -/
partial def smallestMatching? (p : Syntax → Bool)
  : Syntax → Option Syntax
  | n@(node k args) =>
    let args' := args.filterMap (smallestMatching? p)
    if h : 0 < args'.size then args'.get ⟨0, h⟩ 
    else if p n then some n
    else none
  | s => if p s then some s else none

end Lean.Syntax

namespace Lean.MessageData

partial def smallestMatching? (p : MessageData → Bool)
  : MessageData → Option MessageData
  | withContext ctx d =>
    withContext ctx <$> smallestMatching? p d
  | withNamingContext ctx d =>
    withNamingContext ctx <$> smallestMatching? p d
  -- TODO nest/group/compose/tagged/node wrap or no wrap
  | s@(nest n d) => 
    smallestMatching? p d <|>
    if p s then some s else none
  | s@(group d) =>
    smallestMatching? p d <|>
    if p s then some s else none
  | s@(compose d₁ d₂) =>
    smallestMatching? p d₁ <|>
    smallestMatching? p d₂ <|>
    if p s then some s else none
  | s@(tagged n d) =>
    smallestMatching? p d <|>
    if p s then some s else none
  | s@(node args) =>
    let args' := args.filterMap (smallestMatching? p)
    if h : 0 < args'.size then args'.get ⟨0, h⟩ 
    else if p s then some s
    else none
  | s => if p s then some s else none

partial def reprMd : MessageData → String
  | ofFormat f => s!"(ofFormat ({f} : Format))"
  | ofSyntax s => s!"(ofSyntax ({s} : Syntax))"
  | ofExpr e => s!"(ofExpr ({e} : Expr))"
  | ofLevel l => s!"(ofLevel ({l} : Level))"
  | ofName n => s!"(ofName {repr n})"
  | ofGoal m => s!"(ofGoal {repr m})"
  | withContext c d => s!"(withContext _ {reprMd d})"
  | withNamingContext c d => s!"(withNamingContext _ {reprMd d})"
  | nest n d => s!"(nest {repr n} {reprMd d})"
  | group d => s!"(group {reprMd d})"
  | compose d₁ d₂ => s!"(compose {reprMd d₁} {reprMd d₂})"
  | tagged n d => s!"(tagged {repr n} {reprMd d})"
  | node args => s!"(node #[{", ".intercalate $ (args.map reprMd).toList}])"

instance : Repr MessageData :=
  ⟨fun md _ => reprMd md⟩

partial def topTag : MessageData → Option Name
  | withContext _ d => topTag d
  | withNamingContext _ d => topTag d
  | nest _ d => topTag d
  | group d => topTag d
  | compose d₁ d₂ => d₁.topTag <|> d₂.topTag
  | tagged n _ => some n
  | node args =>
    let args' := args.filterMap topTag
    if h : 0 < args'.size then some <| args'.get ⟨0, h⟩
    else none
  | _ => none

end Lean.MessageData

namespace Lean.Position

instance : HasLess Position :=
  ⟨fun a b => Position.lt a b = true⟩

instance (a b : Position) : Decidable (a < b) :=
  inferInstanceAs (Decidable (Position.lt a b = true))

instance : HasLessEq Position :=
  ⟨fun a b => a < b ∨ a = b⟩

instance (a b : Position) : Decidable (a ≤ b) :=
  inferInstanceAs (Decidable (a < b ∨ a = b))

end Lean.Position