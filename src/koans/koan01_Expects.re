/* comments begin with /* and end with */ */
/* replace (__ ()) with something that makes the tests pass */

open Helpers;

let koans _ =>
  Mocha.describe
    "Expects"
    (
      fun _ => {
        Mocha.it "Mocha.ok expects a true value" (fun _ => { Mocha.ok (__()); });
        Mocha.it "Mocha.eq expects two equal values" (fun _ => { Mocha.eq 1 (__()); });
        Mocha.it "Mocha.neq expects two unequal values" (fun _ => { Mocha.eq 1 (__()); });
      }
    );
