#include <iostream>
#include <string>
#include <vector>

// #include <argparse.hpp>
#include <structop.hpp>

using namespace std;

struct Options
{
    // positional argument
    //   e.g., ./main <file>
    enum class Commands
    {
        init,
        build,
    };
    Commands command;
    // std::string command;

    // optional argument
    //   e.g., -b "192.168.5.3"
    //   e.g., --bind_address "192.168.5.3"
    //
    // options can be delimited with `=` or `:`
    // note: single dash (`-`) is enough for short & long option
    //   e.g., -bind_address=localhost
    //   e.g., -b:192.168.5.3
    //
    // the long option can also be provided in kebab case:
    //   e.g., --bind-address 192.168.5.3
    // std::optional<std::string> bind_address;

    // flag argument
    // Use `std::optional<bool>` and provide a default value.
    //   e.g., -v
    //   e.g., --verbose
    //   e.g., -verbose
    // std::optional<bool> verbose = false;

    // directly define and use enum classes to limit user choice
    //   e.g., --log-level debug
    //   e.g., -l error
    // enum class LogLevel
    // {
    //     debug,
    //     info,
    //     warn,
    //     error,
    //     critical
    // };
    // std::optional<LogLevel> log_level = LogLevel::info;

    // pair argument
    // e.g., -u <first> <second>
    // e.g., --user <first> <second>
    // std::optional<std::pair<std::string, std::string> > user;
};
STRUCTOPT(Options, command);

int main(int argc, char **argv)
{
    try
    {
        auto options = structopt::app("my_app").parse<Options>(argc, argv);

        if (options.command == Options::Commands::build)
        {
            std::cout << "building..." << std::endl;
        }
        else if (options.command == Options::Commands::init)
        {
            std::cout << "initializing..." << std::endl;
        }
    }
    catch (structopt::exception &e)
    {
        std::cout << e.what() << "\n";
        std::cout << e.help();
    }

    return 0;
}