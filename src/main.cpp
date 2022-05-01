#include <iostream>

#include <structop.hpp>
#include <initialization.hpp>

struct Options
{
    enum class Commands
    {
        init,
        build,
    };
    Commands command;

    std::optional<bool> quiet = false;
};
STRUCTOPT(Options, command, quiet);

int main(int argc, char **argv)
{
    int return_value = 0;
    try
    {
        auto options = structopt::app("fuligin", "1.0").parse<Options>(argc, argv);

        if (options.command == Options::Commands::build)
        {
            std::cout << "building..." << std::endl;
        }
        else if (options.command == Options::Commands::init)
        {
            initialize();
        }
    }
    catch (structopt::exception &e)
    {
        std::cout << e.what() << "\n";
        std::cout << e.help();
        return_value = 1;
    }

    return return_value;
}
