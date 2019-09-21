[@react.component]
let make = () =>
  <div>
    <div className="title"> {ReasonReact.string("Tic Tac Toe")} </div>
    <Component1 message="Hello! Click this text." />
    <Component2 greeting="Hello!" />
    <Board />
  </div>;