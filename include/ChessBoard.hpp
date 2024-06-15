#ifndef _CHESS_BOARD_HPP_
#define _CHESS_BOARD_HPP_

#include "ChessPieceFactory.hpp"
#include <array>

enum class Row {
  A = 0,
  B = 1,
  C = 2,
  D = 3,
  E = 4,
  F = 5,
  G = 6,
  H = 7,
};

enum class Col {
  ONE   = 0,
  TWO   = 1,
  THREE = 2,
  FOUR  = 3,
  FIVE  = 4,
  SIX   = 5,
  SEVEN = 6,
  EIGHT = 7,
};

class ChessBoard
{
public:
  ChessBoard();
  virtual ~ChessBoard() = 0;
  // [[nodiscard]] ChessPiece* operator[](Row row);
  // [[nodiscard]] const ChessPiece* operator[](Row row) const;
  [[nodiscard]] ChessPiece* Move(Row row, Col col) = 0;
  [[nodiscard]] const ChessPiece* Move(Row row, Col col) const = 0;
  virtual void Highlight(Row row, uint8_t col) const = 0;
  virtual void Draw() const = 0;
protected:
  
};

// while (true) {
//   board.Draw();
// }
// auto clickedField;
// SetClickedFieldCallback();
// 
// ChessBoard board;
// if (clickedField.check) {
// auto fields = board.GetMoves(clickedField);
//   board.HighlightFields(fields);
// }
// if (clickedField.move) {
//   board.Move(clickedField);
// }
// board.Draw();
//
// void Pawn::Move() {
//  
// }
//
// ChessPiece:
//  - Move(*_MOVES move);
//  - Move(int row, int col);
//  - GetMoves();
//
// ChessBoard:
//  - operator[] overload
//  -
//
//  So I've been wondering what if I dont make Field class
//  I would just call my array: ChessPiece[x][y] mChessBoard.
//  But before that I just realized I dunno what to do with 
//  input. Or better how I will handle input. This is tricky
//  'cause I want to be able to play in console as well as in
//  window so I make my ChessBoard class a base class.
//  Then I have two derived classes: ConsoleChessBoard and 
//  WindowChessBoard. I need them to output in the right way.
//  ConsoleChessBoard needs to output to console and WindowChessBoard
//  to window. That's very straight-forward. But input will be veeeeryy
//  different in those two separate approaches. Alright I'll think this 
//  through later. Now back to my original thought. I have an idea that
//  every ChessPiece will move itself on the board. It's wrong how I put 
//  it together. What I mean by that is when you want to move a Piece you
//  call the piece mChessBoard[row][col].Move(desired_row, desired_col/MOVE_NAME 
//  (i.e. UP_UP_RIGHT)). This indicates that Piece need to store its position and
//  an array of moves. Again, I don't like it. If I make a class Field.
//  Then every field would have an array of all possible moves. If I 
//  use hash table and store addresses as keys to... what? Better use array.
//  Another array. Also should I make the array of moves in field of size
//  64 or 16? If I make this array private, but write a function that
//  goes in the correct order through *all (not necessarily) and collects
//  possible moves. Or If called to move to desired location then it checks
//  if the moves is even possible. And the thought of not doing field
//  came back. Okay let's not do the field class. Or at least let's try not to.
//
class ConsoleChessBoard : public ChessBoard
{
public:

private:

};

class WindowChessBoard : public ChessBoard
{
public:

private:

};

#endif
