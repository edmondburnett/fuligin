#include <filesystem>
#include <iostream>
#include <stdlib.h>

namespace fs = std::filesystem;

bool is_path_empty(fs::path path)
{
    return fs::is_empty(path);
}

void safe_init()
{
    fs::path current_path = fs::current_path();

    if (is_path_empty(current_path) == true)
    {
        std::cout << "Initializing new project in: " << current_path << "..." << std::endl;
    }
    else
    {
        std::cout << "Current directory is not empty, aborting!" << std::endl;
        exit(1);
    }
}

void initialize()
{
    safe_init();
}