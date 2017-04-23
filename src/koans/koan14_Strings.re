open Helpers;
open Containers;

let koans _ => Mocha.describe "Strings" @@ fun _ => {
  Mocha.it "length returns the string length" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.length "Hello");
  Mocha.it "reverse returns the reverse of a string" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.rev "Hello");
  Mocha.it "repeat returns the string repeated n times" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.repeat "ya" 2);
  Mocha.it "the ^ infix function appends two strings" @@
    fun _ =>
        (__())
            |> Mocha.eq ("Reason" ^ "ML");
  Mocha.it "concat appends a list of strings together, interpolated with a separator" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.concat " " [ "ReasonML", "Lang", "Yay!" ]);
  Mocha.it "slice gets a substring" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.sub "I'm a string" 4 12);
  Mocha.it "negative indices start from the end" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.sub "I'm a string" (-8) (-1));
  Mocha.it "left takes the first n characters of a string" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.take 3 "I'm a string");
  Mocha.it "dropLeft drops the first n characters of a string" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.drop 3 "I'm a string");
  Mocha.it "find looks for a substring, returning the index of it's place, or -1" @@
    fun _ =>
        (__())
            |> Mocha.eq (String.find start::0 sub::"string" "I'm a string");
}
