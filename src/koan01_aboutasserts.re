open Helpers;

makeSuite (
  Suite
    "equality"
    [ Koan "equality" (fun _ => (1 == (__ "should be one")))
    , Koan "inequality" (fun _ => ("bar" != (__ "should not be one")))
    ]
);
