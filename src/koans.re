open Mocha;

module type Koan = {let koans: unit => unit;};

let iterator = fun ((module M): (module Koan)) => M.koans ();

describe
  "ReasonML bucklescript Koans"
  (
    fun _ =>
      List.iter iterator [
        (module Koan01_Expects),
        (module Koan02_Literals),
        (module Koan03_ComparisonOperators),
        (module Koan04_LogicalOperators),
        (module Koan05_MathematicalOperators),
        (module Koan06_NumberConversions),
        (module Koan07_Functions),
        (module Koan08_Maybe),
        (module Koan09_Lists),
        (module Koan10_Arrays),
        (module Koan11_Tuples),
        (module Koan12_Dictionaries),
        (module Koan13_Results),
        (module Koan14_Strings),
        (module Koan15_Regexes),
        (module Koan16_Time),
        (module Koan17_Dates),
        (module Koan18_Sets),
        (module Koan19_Records),
        (module Koan20_UnionTypes),
      ]
  );
