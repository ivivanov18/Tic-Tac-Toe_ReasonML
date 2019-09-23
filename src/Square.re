[@react.component]
let make = (~value, ~onClick) => {
  <button className="square" onClick> {ReasonReact.string(value)} </button>;
};