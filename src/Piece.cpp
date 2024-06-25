#include "Piece.hpp"

namespace Chess {

Piece::Piece(Field* field, PieceType type, int8_t value)
  : mField{field}, mValue{value}, mType{type}, mIsCaptured{false}
{}
Piece::~Piece() {}

}
