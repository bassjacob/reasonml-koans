open Helpers;
open Containers;

let koans _ => Mocha.describe "Result" @@ fun _ => {
  Mocha.it "results represent the result of a function" @@
    fun _ =>
        (__())
            |> Mocha.eq (Result.Ok 42);
  Mocha.it "but could be an error" @@
    fun _ =>
        (__())
            |> Mocha.eq (Result.Error "there was an error");
  Mocha.it "a result can be converted to a maybe" @@
    fun _ =>
        (__())
            |> Mocha.eq (Result.toOption (Result.Ok 42));
  Mocha.it "but an error will become nothing" @@
    fun _ =>
        (__())
            |> Mocha.eq (Result.toOption (Result.Error "there was an error"));
  Mocha.it "a maybe can also be converted to a result" @@
    fun _ =>
        (__())
            |> Mocha.eq (Result.fromOption (Some 42));
  Mocha.it "and will become an error if there is nothing" @@
    fun _ =>
        (__())
            |> Mocha.eq (Result.fromOption None);
}
