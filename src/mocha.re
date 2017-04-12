external describe : string => (unit => unit) => unit = "describe" [@@bs.val] [@@bs.module "mocha"];
external it : string => (unit => unit) => unit = "it" [@@bs.val] [@@bs.module "mocha"];
external ok : 'a => unit = "ok" [@@bs.val] [@@bs.module "assert"];
external eq : 'a => 'a => unit = "deepEqual"  [@@bs.val] [@@bs.module "assert"];
