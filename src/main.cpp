#include <iostream>
#include <string>
#include <vector>

#include <argparse.hpp>

using namespace std;

struct MyArgs : public argparse::Args
{
    std::string &command = arg("command", "One of: init, build");
    // std::string &source = arg("source", "source path");
    // int &k = kwarg("k", "A keyworded integer value");
    // float &alpha = kwarg("a,alpha", "An optional float value").set_default(0.5f);
    // bool &verbose = flag("v,verbose", "A flag to toggle verbose");
    // bool &dryrun = flag("d,dry-run", "Perform a dry run");
};

int main(int argc, char **argv)
{

    MyArgs args = argparse::parse<MyArgs>(argc, argv);

    if (args.command == "init")
    {
        std::cout << "Initializing new project..." << std::endl;
    }
    else if (args.command == "build")
    {
        std::cout << "Building project..." << std::endl;
    }

    return 0;
}