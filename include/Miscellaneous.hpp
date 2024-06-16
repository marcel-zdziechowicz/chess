#ifndef _MISCELLANEOUS_HPP_
#define _MISCELLANEOUS_HPP_

#include <cstddef>

namespace Chess {

static constexpr size_t ROWS        = 8;
static constexpr size_t COLS        = 8;
static constexpr size_t NUM_MOVES   = 16;
static constexpr size_t NUM_PAWNS   = 8;
static constexpr size_t NUM_ROOKS   = 2;
static constexpr size_t NUM_KNIGHTS = 2;
static constexpr size_t NUM_BISHOPS = 2;
static constexpr size_t NUM_QUEENS  = 1;
static constexpr size_t NUM_KINGS   = 1;
static constexpr size_t NUM_PIECES  = NUM_PAWNS
                                    + NUM_ROOKS
                                    + NUM_KNIGHTS
                                    + NUM_BISHOPS
                                    + NUM_QUEENS
                                    + NUM_KINGS;

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

enum class PieceType {
  WHITE,
  BLACK,
};

enum class Advance {
  UP              = 0,
  UP_UP_RIGHT     = 1,
  UP_RIGHT        = 2,
  RIGHT_RIGHT_UP  = 3,
  RIGHT           = 4,
  RIGHT_RIGHT_DOWN= 5,
  DOWN_RIGHT      = 6,
  DOWN_DOWN_RIGHT = 7,
  DOWN            = 8,
  DOWN_DOWN_LEFT  = 9,
  DOWN_LEFT       = 10,
  LEFT_LEFT_DOWN  = 11,
  LEFT            = 12,
  LEFT_LEFT_UP    = 13,
  UP_LEFT         = 14,
  UP_UP_LEFT      = 15,
};

}

#endif
