#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

#include <ncurses.h>

namespace Chess {

class ApplicationBase
{
public:
  ApplicationBase();
  virtual ~ApplicationBase() = 0;
  virtual void Run() = 0;
};

class ConsoleApplication final : public ApplicationBase
{
public:
  ConsoleApplication();
  virtual ~ConsoleApplication() final;
  virtual void Run() final;
private:
  static constexpr int32_t mBoardWinWidth = 8;
  static constexpr int32_t mBoardWinHeight = 8;
  WINDOW* mBoardWin;
};

class WindowApplication final : public ApplicationBase
{
public:
  WindowApplication();
  ~WindowApplication() final;
  void Run() final;
private:
};

[[nodiscard]] ApplicationBase* EvalCMDArguments(int argc, char** argv);
void PrintHelp();

}

#endif
