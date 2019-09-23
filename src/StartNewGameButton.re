[@react.component]
let make = (~startNewGame) => {
  <div className="new-game">
    <button onClick={_event => startNewGame()}>
      {ReasonReact.string("New Game")}
    </button>
  </div>;
};