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
  [[nodiscard]] virtual std::array<Piece*, COLS>& operator[](Row row) = 0;
  [[nodiscard]] virtual const std::array<Piece*, COLS>& operator[](Row row) const = 0;
  [[nodiscard]] virtual Piece* GetPiece(Row row, Col col) = 0;
  [[nodiscard]] virtual const Piece* GetPiece(Row row, Col col) const = 0;
  virtual void Highlight(Row row, Col col) const = 0;
  virtual void Draw() const = 0;
protected:
  std::array<std::array<Field, COLS>, ROWS> mBoard;
  std::array<Piece*, NUM_PIECES> mBlackPieces;
  std::array<Piece*, NUM_PIECES> mWhitePieces;
};

class ConsoleBoard final : public Board 
{
public:
  ConsoleBoard();
  ~ConsoleBoard() final;
  [[nodiscard]] std::array<Piece*, COLS>& operator[](Row row) final;
  [[nodiscard]] const std::array<Piece*, COLS>& operator[](Row row) const final;
  [[nodiscard]] Piece* GetPiece(Row row, Col col) final;
  [[nodiscard]] const Piece* GetPiece(Row row, Col col) const final;
  void Highlight(Row row, Col col) const final;
  void Draw() const final;
private:
};

class WindowBoard final : public Board
{
public:
  WindowBoard();
  ~WindowBoard() final;
  [[nodiscard]] std::array<Piece*, COLS>& operator[](Row row) final;
  [[nodiscard]] const std::array<Piece*, COLS>& operator[](Row row) const final;
  [[nodiscard]] Piece* GetPiece(Row row, Col col) final;
  [[nodiscard]] const Piece* GetPiece(Row row, Col col) const final;
  void Highlight(Row row, Col col) const final;
  void Draw() const final;
private:

};

}

#endif
