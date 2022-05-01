#ifndef SimpleArgParse_HPP_INCLUDED
#define SimpleArgParse_HPP_INCLUDED

#include <iostream>
#include <string>
#include <vector>

class SimpleArgParse
{
public:
    SimpleArgParse(std::string version);
    ~SimpleArgParse(){};

    // vars
    std::string version;

    // methods
    void show_usage(std::string exec_name, std::string version);
    void parse(int argc, char *argv[]);
};

#endif
