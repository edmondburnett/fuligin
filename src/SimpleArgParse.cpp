#include <SimpleArgParse.hpp>

void SimpleArgParse::show_usage(std::string exec_name)
{
    std::cerr << "Usage: " << exec_name << " <option(s)> <source path>"
              << "\n\nOptions:\n"
              << "\t-h,--help\t\t\tShow this help message\n"
              << "\t-d,--destination DESTINATION\tSpecify the destination path"
              << std::endl;
}

void SimpleArgParse::parse(int argc, char *argv[])
{
    if (argc < 3)
    {
        show_usage(argv[0]);
        // return 1;
    }

    std::vector<std::string> sources;
    std::string destination;

    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];
        if ((arg == "-h") || (arg == "--help"))
        {
            show_usage(argv[0]);
            // return 0;
        }
        else if ((arg == "-d") || (arg == "--destination"))
        {
            if (i + 1 < argc)
            {                            // Make sure we aren't at the end of argv!
                destination = argv[i++]; // Increment 'i' so we don't get the argument as the next argv[i].
            }
            else
            { // Uh-oh, there was no argument to the destination option.
                std::cerr << "--destination option requires one argument." << std::endl;
                // return 1;
            }
        }
        else
        {
            sources.push_back(argv[i]);
        }
    }
    std::cout << destination << std::endl;
}
