#ifndef _PIECE_HPP_
#define _PIECE_HPP_

#include <cstddef>
#include <cstdint>
#include <tuple>
#include <array>
#include <vector>

#include "Miscellaneous.hpp"

namespace Chess {

struct Field;

class Piece {
public:
  Piece(Field* field, PieceType type, int8_t value);
  virtual ~Piece() = 0;
  [[maybe_unused]] virtual std::tuple<int8_t, int8_t> Move(Row row, Col col) = 0;
  [[maybe_unused]] virtual std::tuple<int8_t, int8_t> Move(Advance move) = 0;
  [[maybe_unused]] virtual std::tuple<int8_t, int8_t> Move(Advance direction, int8_t fields) = 0;
  [[nodiscard]] virtual std::vector<Field*> GetMoves() const = 0;
protected:
  Field* mField;
  int8_t mValue;
  PieceType mType;
  bool mIsCaptured;
};

struct Field
{
  Piece* mChessPiece;
  std::array<Field*, NUM_MOVES> mMoves;
  int8_t mRow;
  int8_t mCol;
};

}
#endif
