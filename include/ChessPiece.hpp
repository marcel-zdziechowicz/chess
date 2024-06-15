#ifndef _CHESS_PIECE_HPP_
#define _CHESS_PIECE_HPP_

#include <cstdint>
#include <tuple>

enum class PieceType {
  WHITE,
  BLACK,
};

class ChessPiece {
public:
  ChessPiece();
  virtual std::tuple<int8_t, int8_t> Move(int8_t NewRow, int8_t NewCol) = 0;
  virtual bool ValidateMove(int8_t NewRow, int8_t NewCol) = 0;
protected:
  int8_t mRow;
  int8_t mCol;
  int8_t mValue;
  PieceType mType;
};

#endif
