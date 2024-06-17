#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

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
  ConsoleApplication();
  ~ConsoleApplication() final;
  void Run() final;
};

class WindowApplication final : public ApplicationBase
{
  WindowApplication();
  ~WindowApplication() final;
  void Run() final;
};

[[nodiscard]] ApplicationBase* EvalCMDArguments(int argc, char** argv);
void PrintHelp();

}

#endif
