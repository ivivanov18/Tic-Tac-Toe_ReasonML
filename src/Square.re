[@react.component]
let make = (~value, ~onHandleClick) => {
  //   let (valueXO, setValueXO) = React.useState(() => "X");
  //   let handleClick = _event => {
  //     Js.log("clicked!");
  //     valueXO == "X" ? setValueXO(_ => "O") : setValueXO(_ => "X");
  //   };
  <button className="square" onClick=onHandleClick>
    {ReasonReact.string(value)}
  </button>;
};