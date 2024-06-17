#include "Application.hpp"
#include <vector>
#include <iostream>

namespace Chess {

void PrintHelp()
{
  // Usage: chess [options]
  //
  // Options:
  //   --mode {window | console}    Sets the mode for opening chess
  //   --help                       Display help
  std::cout << 
}

ApplicationBase* EvalCMDArguments(int argc, char** argv)
{
  std::vector<std::string> arguments(argc);
  for (int i = 0; i < argc; i++) {
    arguments.push_back(argv[i]);
    std::cout << arguments.back() << '\n';
  }
  return nullptr;
}

}
