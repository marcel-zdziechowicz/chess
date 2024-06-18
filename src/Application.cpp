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
  std::cout << "Usage: chess [options]\n\n";
  std::cout << "Options:\n";
  std::cout << "\t--mode {console | window}\n";
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
