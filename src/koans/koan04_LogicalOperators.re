open Helpers;

let koans = fun _ => Mocha.describe "Logical Operators" @@ fun _ => {
  Mocha.it "not negates a boolean" @@
    fun _ =>
        (not (__()))
            |> Mocha.eq false;
  Mocha.it "&& is a logical AND" @@
    fun _ =>
        (true && (__()))
            |> Mocha.ok;
  Mocha.it "|| is a logical OR" @@
    fun _ =>
        (false || (__()))
            |> Mocha.ok;
}

