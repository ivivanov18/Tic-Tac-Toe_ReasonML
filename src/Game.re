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
  let (history, setHistory) = React.useState(() => [|Array.make(9, "")|]);
  Js.log(history);
  let (xNext, setXNext) = React.useState(() => true);
  let currentBoard = history[Array.length(history) - 1];
  let winner = calculateWinner(currentBoard, winningCombinations);
  let status =
    winner != ""
      ? "The winner is " ++ winner : "Next player: " ++ (xNext ? "X" : "O");

  let handleClick = i => {
    let newSquares = Array.copy(currentBoard); // copy it otherwise reference is same and will not re-render
    if (winner != "" || currentBoard[i] != "") {
      ();
    } else {
      newSquares[i] = xNext ? "X" : "O";
      setHistory(his => Array.append(his, [|newSquares|]));
      setXNext(xNext => !xNext);
    };
  };

  <div className="game">
    <div className="game-board">
      <Board squares=currentBoard onClickSquare=handleClick />
    </div>
    <div className="game-info">
      <div> {ReasonReact.string(status)} </div>
      <ol />
    </div>
  </div>; //todo
};