let koans _ => ();
/* open Helpers; */
/* open Containers; */

/* let koans _ => Mocha.describe "Mapionaries" @@ fun _ => { */
/*   Mocha.it "dictionaries can be empty" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq @@ List.length @@ Map.keysList Map.empty; */
/*   Mocha.it "or initialized with a single key-value pair" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.size @@ Map.singleton 1 "a"); */
/*   Mocha.it "or from a list of key-value pairs" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.size @@ Map.fromList [ ( 1, "a" ), ( 2, "b" ) ]); */
/*   Mocha.it "they can also be converted back to a list" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.toList @@ Map.fromList [ ( 1, "a" ), ( 2, "b" ) ]); */
/*   Mocha.it "checking for an empty dictionary is easy" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.isEmpty Map.empty); */
/*   Mocha.it "you can also check if a key is present in the dictionary" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.member 1 @@ Map.singleton 1 "a"); */
/*   Mocha.it "or get the value associated with the key" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 1 @@ Map.singleton 1 "a"); */
/*   Mocha.it "a key-value pair can be added to the dictionary" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 2 @@ Map.insert 2 "b" @@ Map.singleton 1 "a"); */
/*   Mocha.it "inserting can also overwrite the value associated with a key" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 1 @@ Map.insert 1 "b" @@ Map.singleton 1 "a"); */
/*   Mocha.it "updating a value works similarly" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 1 @@ Map.update 1 (fun _ => Just "b") @@ Map.singleton 1 "a"); */
/*   Mocha.it "but knows about the current value" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 1 @@ Map.update 1 (fun v => (Maybe.withDefault "" v) ++ "b" |> Just) @@ Map.singleton 1 "a"); */
/*   Mocha.it "updating can add a new value" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 2 @@ Map.update 2 (fun _ => Just "b") @@ Map.singleton 1 "a"); */
/*   Mocha.it "or even remove a value" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 1 @@ Map.update 1 (fun _ => Nothing) @@ Map.singleton 1 "a"); */
/*   Mocha.it "of course there is a more direct way to remove a value too" @@ */
/*     fun _ => */
/*         (Just (__())) */
/*             |> Mocha.eq (Map.get 1 @@ Map.remove 1 @@ Map.singleton 1 "a"); */
/*   Mocha.it "you can get the list of keys" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.keys @@ Map.singleton 1 "a"); */
/*   Mocha.it "or the list of values" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.values @@ Map.singleton 1 "a"); */
/*   Mocha.it "you can get the union of two dictionaries" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.values @@ Map.union (Map.fromList [ ( 1, "a" ), ( 2, "b" ) ]) (Map.fromList [ ( 2, "c" ), ( 3, "d" ) ])); */
/*   Mocha.it "or the intersection" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.values @@ Map.intersect (Map.fromList [ ( 1, "a" ), ( 2, "b" ) ]) (Map.fromList [ ( 2, "c" ), ( 3, "d" ) ])); */
/*   Mocha.it "or the difference" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.values @@ Map.diff (Map.fromList [ ( 1, "a" ), ( 2, "b" ) ]) (Map.fromList [ ( 2, "c" ), ( 3, "d" ) ])); */
/*   Mocha.it "mapping works similarly as with lists" @@ */
/*     fun _ => */
/*         (__()) */
/*             |> Mocha.eq (Map.values @@ Map.map (fun k v => v ++ "c") (Map.fromList [ ( 1, "a" ), ( 2, "b" ) ])); */
/* } */

