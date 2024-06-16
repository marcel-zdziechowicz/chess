#ifndef _BOARD_HPP_
#define _BOARD_HPP_

#include <array>

#include "Miscellaneous.hpp"
#include "Piece.hpp"

namespace Chess {

class Board
{
public:
  Board();
  virtual ~Board() = 0;
  [[nodiscard]] virtual Piece* operator[](Row row) = 0;
  [[nodiscard]] virtual const Piece* operator[](Row row) const = 0;
  [[nodiscard]] virtual Piece* GetPiece(Row row, Col col) = 0;
  [[nodiscard]] virtual const Piece* GetPiece(Row row, Col col) const = 0;
  virtual void Highlight(Row row, Col col) const = 0;
  virtual void Draw() const = 0;

protected:
  std::array<std::array<Field, COLS>, ROWS> mBoard;
  std::array<Piece*, NUM_PIECES> mBlackPieces;
  std::array<Piece*, NUM_PIECES> mWhitePieces;
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
class ConsoleBoard : public Board
{
public:

private:

};

class WindowBoard : public Board
{
public:

private:

};

}
#endif
