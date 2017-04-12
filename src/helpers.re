open Mocha;

let __ = fun error => raise_notrace (Sys_error error);
type koan 'a = Koan string ('a => bool);
type suite 'a = Suite string (list (koan 'a));

let makeSuite = fun suite => {
  let Suite name tests = suite;

  describe name (fun _ => {
    List.iter (fun koan => {
      let Koan name result = koan;
      it name (fun _ => {
        ok (result ());
      });
    }) tests;
  });
};
