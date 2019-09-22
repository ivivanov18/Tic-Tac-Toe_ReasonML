[@react.component]
let make = () => {
  let (squares, setSquares) = React.useState(() => Array.make(9, ""));
  let (xNext, setXNext) = React.useState(() => true);

  let handleClick = i => {
    let newSquares = Array.copy(squares); // copy it otherwise reference is same and will not re-render
    newSquares[i] = xNext ? "X" : "O";
    setSquares(_ => newSquares);
    setXNext(xNext => !xNext);
  };

  let renderSquare = i => {
    <Square
      value={Array.get(squares, i)}
      onClick={_event => handleClick(i)}
    />;
  };

  let status = "Next player: " ++ (xNext ? "X" : "O");

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