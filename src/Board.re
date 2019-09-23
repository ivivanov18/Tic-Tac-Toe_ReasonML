let winningCombinations = [
  [0, 1, 2],
  [3, 4, 5],
  [6, 7, 8],
  [0, 3, 6],
  [1, 4, 7],
  [2, 5, 8],
  [0, 4, 8],
  [2, 4, 6],
];

let rec calculateWinner = (squares, lines) => {
  switch (lines) {
  | [] => ""
  | [row, ...tails] =>
    let [a, b, c] = row;
    squares[a] != "" && squares[a] == squares[b] && squares[a] == squares[c]
      ? squares[a] : calculateWinner(squares, tails);
  };
};

[@react.component]
let make = () => {
  let (squares, setSquares) = React.useState(() => Array.make(9, ""));
  let (xNext, setXNext) = React.useState(() => true);

  let handleClick = i => {
    let newSquares = Array.copy(squares); // copy it otherwise reference is same and will not re-render
    let winner = calculateWinner(squares, winningCombinations);
    if (winner != "" || squares[i] != "") {
      ();
    } else {
      newSquares[i] = xNext ? "X" : "O";
      setSquares(_ => newSquares);
      setXNext(xNext => !xNext);
    };
  };

  let renderSquare = i => {
    <Square
      value={Array.get(squares, i)}
      onClick={_event => handleClick(i)}
    />;
  };

  let winner = calculateWinner(squares, winningCombinations);
  let status =
    winner != ""
      ? "The winner is " ++ winner : "Next player: " ++ (xNext ? "X" : "O");

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