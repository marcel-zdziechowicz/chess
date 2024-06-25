#include <ncurses.h>
#include "Application.hpp"

namespace Chess {

ConsoleApplication::ConsoleApplication()
  : ApplicationBase()
{
  initscr();
  noecho();
  cbreak();
  mBoardWin = newwin(mBoardWinHeight, mBoardWinWidth, (getmaxy(stdscr) - mBoardWinHeight) / 2, (getmaxx(stdscr) - mBoardWinWidth) / 2 );
  if (!mBoardWin) {
    throw "Could not create window!\n";
  }
  box(mBoardWin, 0, 0);
}
ConsoleApplication::~ConsoleApplication()
{
  endwin();
}
void ConsoleApplication::Run()
{
  refresh();
  wrefresh(mBoardWin);
  while (true) {
    //Application event loop
  }
}

}
