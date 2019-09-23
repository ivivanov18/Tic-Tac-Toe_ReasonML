[@react.component]
let make = () =>
  <div>
    <div className="title"> {ReasonReact.string("Tic Tac Toe")} </div>
    <Game />
  </div>;