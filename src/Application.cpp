#include "Application.hpp"
#include <ios>
#include <vector>
#include <iostream>
#include <iomanip>
#include <format>

namespace Chess {

void PrintHelp()
{
  std::cout << "Usage: chess [options]\n\n";
  std::cout << std::setw(26) << std::left
            << "Options:"
            << "\tDescription\n";

  std::cout << std::setw(26) << std::left
            << "  --mode {console | window}"
            << "\tSets the mode for opening chess\n";

  std::cout << std::setw(26) << std::left
            << "  --help"
            << "\tDisplay help\n";
}

ApplicationBase* EvalCMDArguments(int argc, char** argv)
{
  std::vector<std::string> arguments;
  for (int i = 0; i < argc; i++) {
    arguments.push_back(argv[i]);
  }

  if (arguments.size() == 1) {
    return nullptr;//new WindowApplication;
  }
  else if (arguments.size() >= 2) {
    if (arguments[1] == "--help") {
      PrintHelp();
      return nullptr;
    }
    else if (arguments[1] != "--mode") {
      std::cout << std::format("Unknown option: {}\n", arguments[1]);
      PrintHelp();
      return nullptr;
    }
    else if (arguments.size() == 2) {
      std::cout << "You cannot use --mode without passing the correct mode\n";
    }
  }
  if (arguments.size() >= 3) {
    if (arguments[2] == "window") {
      return nullptr;//new WindowApplication;
    }
    else if (arguments[2] == "console") {
      return nullptr;//new ConsoleApplication;
    }
    else {
      std::cout << std::format("Unknown mode: {}\n", arguments[2]);
      PrintHelp();
      return nullptr;
    }
  }
  PrintHelp();
  return nullptr;
}

}
