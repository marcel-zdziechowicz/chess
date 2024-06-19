#include "Application.hpp"
#include <vector>
#include <iostream>
#include <iomanip>

namespace Chess {

void PrintHelp()
{
  // Usage: chess [options]
  // Options:
  //   --mode {window | console}    Sets the mode for opening chess
  //   --help                       Display help
  std::cout << "Usage: chess [options]\n\n";
  std::cout << "Options:\n";

  std::cout << std::setw(26) 
            << "\t--mode {console | window}"
            << "\tSets the mode for opening chess\n";

  std::cout << std::setw(26) 
            << "\t--help"
            << "\tDisplay help\n";
}

ApplicationBase* EvalCMDArguments(int argc, char** argv)
{
  std::vector<std::string> arguments(argc);
  for (int i = 0; i < argc; i++) {
    arguments.push_back(argv[i]);
  }
  if (arguments.size() == 1) {
    return new WindowApplication;
  }
  else if (arguments.size() == 3) {
    if (arguments[2] == "window") {
      return new WindowApplication;
    }
    else if (arguments[2] == "console") {
      return new ConsoleApplication;
    }
    else {
      PrintHelp();
      return nullptr;
    }
  }
  PrintHelp();
  return nullptr;
}

}
