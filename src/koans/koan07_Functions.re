open Helpers;

open Containers;

let add1 x => x + 1;

let add x y => x + y;

let subtract x y => x - y;

let subtractFrom4 = subtract 4;

let always5 = Fun.const 5;

let subtract4 = (Fun.flip subtract) 4;

let multiplyBy2 x => 2 * x;

let koans _ => Mocha.describe "Functions" @@ fun _ => {
  Mocha.it "the id function returns whatever it is passed" @@
    fun _ =>
        (__())
            |> Mocha.eq (Fun.id 4);
  Mocha.it "functions are defined as 'name args = implementation'" @@
    fun _ =>
        (add1 (__()))
            |> Mocha.eq 5;
  Mocha.it "functions may have an optional type signature" @@
    fun _ =>
        (add 3 (__()))
            |> Mocha.eq 5;
  Mocha.it "anonymous functions are defined with '\\args -> implementation'" @@
    fun _ =>
        (subtract 8 (__()))
            |> Mocha.eq 5;
  Mocha.it "anonymous functions may be defined inline" @@
    fun _ =>
        ((fun x y => x - y) 8 (__()))
            |> Mocha.eq 5;
  Mocha.it "functions passed some values return curried functions" @@
    fun _ =>
        (subtractFrom4 (__()))
            |> Mocha.eq 1;
  Mocha.it "the always function returns its first argument, no matter what the second is" @@
    fun _ =>
        (__())
            |> Mocha.eq (always5 4);
  Mocha.it "the flip function flips the order of the first two arguments of a function" @@
    fun _ =>
        (__())
            |> Mocha.eq (subtract4 9);
  Mocha.it "f @@ a applies the function f to the arg a" @@
    fun _ =>
        (__())
            |> Mocha.eq (subtract4 @@ add 1 9);
  Mocha.it "a |> f applies the function f to the arg a" @@
    fun _ =>
        (__())
            |> Mocha.eq (add 1 9 |> subtract4);
  Mocha.it "Fun.(%) composes function g with function f" @@
    fun _ =>
        (__())
            |> Mocha.eq ((Fun.(%) subtract4 multiplyBy2) 9);
};
