// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");

function StartNewGameButton(Props) {
  var startNewGame = Props.startNewGame;
  return React.createElement("div", {
              className: "new-game"
            }, React.createElement("button", {
                  onClick: (function (_event) {
                      return Curry._1(startNewGame, /* () */0);
                    })
                }, "New Game"));
}

var make = StartNewGameButton;

exports.make = make;
/* react Not a pure module */
