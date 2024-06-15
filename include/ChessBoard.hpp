#ifndef _CHESS_BOARD_HPP_
#define _CHESS_BOARD_HPP_

#include "ChessPieceFactory.hpp"
#include <array>

class ChessBoard
{
public:
  class Field
  {
  public:

  private:
    ChessPiece* mPiece;
    
  };
  
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
