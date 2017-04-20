/* comments begin with /* and end with */ */
/* replace (__ ()) with something that makes the tests pass */
open Helpers;

let koans _ =>
  Mocha.describe
    "Literals"
    (
      fun _ => {
        Mocha.it "strings are enclosed in double quotes" (fun _ => Mocha.eq "string" (__ ()));
        Mocha.it "characters are enclosed in single quotes" (fun _ => Mocha.eq 'a' (__ ()));
        Mocha.it "floats have a decimal" (fun _ => Mocha.eq 1.0 (__ ()));
        Mocha.it "integers do not" (fun _ => Mocha.eq 1 (__ ()));
        Mocha.it "floats can be negative" (fun _ => Mocha.eq (-1.0) (__ ()));
        Mocha.it "integers can be negative" (fun _ => Mocha.eq (-1) (__ ()));
      }
    );
