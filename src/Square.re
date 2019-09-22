[@react.component]
let make = (~value, ~onClick) => {
  //   let (valueXO, setValueXO) = React.useState(() => "X");
  //   let handleClick = _event => {
  //     Js.log("clicked!");
  //     valueXO == "X" ? setValueXO(_ => "O") : setValueXO(_ => "X");
  //   };
  <button className="square" onClick>
    {ReasonReact.string(value)}
  </button>;
};