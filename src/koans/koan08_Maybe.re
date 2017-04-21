open Helpers;

let koans _ => ();

/*     Mocha.describe "Option" */
/*           Mocha.it "maybe represents a value that may be nothing" @@ */
/*             fun _ => */
/*                 (__()) */
/*                     |> Mocha.eq None */
/*           Mocha.it "or the value could be something" @@ */
/*             fun _ => */
/*                 (__()) */
/*                     |> Mocha.eq (Some 5) */
/*           Mocha.it "withDefault can be used to get the value from a maybe" @@ */
/*             fun _ => */
/*                 (__()) */
/*                     |> Mocha.eq (Maybe.withDefault 3 (Some 5)) */
/*           Mocha.it "but will give the default value if there is nothing" @@ */
/*             fun _ => */
/*                 (__()) */
/*                     |> Mocha.eq (Maybe.withDefault 3 None) */
/*           Mocha.it "map will transform the value in a maybe" @@ */
/*             fun _ => */
/*                 (__()) */
/*                     |> Mocha.eq (Maybe.map (\n -> n / 2) (Just 4)) */
/*           Mocha.it "but will not transform a nothing" @@ */
/*             fun _ => */
/*                 (__()) */
/*                     |> Mocha.eq (Maybe.map (\n -> n / 2) Nothing) */
