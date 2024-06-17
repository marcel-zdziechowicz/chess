#include "Application.hpp"

// static constexpr std::string_view wPawn = "\u265F";
// static constexpr std::string_view bPawn = "\u2659";
// static constexpr std::string_view wKnight = "\u265E";
// static constexpr std::string_view bKnight = "\u2658";
// static constexpr std::string_view wBishop = "\u265D";
// static constexpr std::string_view bBishop = "\u2657";
// static constexpr std::string_view wRook = "\u265C";
// static constexpr std::string_view bRook = "\u2656";
// static constexpr std::string_view wQueen = "\u265B";
// static constexpr std::string_view bQueen = "\u2655";
// static constexpr std::string_view wKing = "\u265A";
// static constexpr std::string_view bKing = "\u2654";

int main(int argc, char** argv) {
  auto game = Chess::EvalCMDArguments(argc, argv);
  //game->Run();
  delete game;
}

