[@react.component]
let make = () => {
  let handleClick = i => Js.log(i);
  let renderSquare = i =>
    <Square value=i onHandleClick={() => handleClick(i)} />;

  let status = "Next player: X";
  <div>
    <div className="status"> {ReasonReact.string(status)} </div>
    <div className="board-row">
      {renderSquare(0)}
      {renderSquare(1)}
      {renderSquare(2)}
    </div>
    <div className="board-row">
      {renderSquare(3)}
      {renderSquare(4)}
      {renderSquare(5)}
    </div>
    <div className="board-row">
      {renderSquare(6)}
      {renderSquare(7)}
      {renderSquare(8)}
    </div>
  </div>;
};