[@react.component]
let make = (~squares, ~onClickSquare) => {
  let renderSquare = i => {
    <Square value={Array.get(squares, i)} onClick={_event => onClickSquare(i)} />;
  };

  <div>
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