#ifndef SimpleArgParse_HPP_INCLUDED
#define SimpleArgParse_HPP_INCLUDED

#include <iostream>
#include <string>
#include <vector>

class SimpleArgParse
{
public:
    static void show_usage(std::string exec_name);
    static void parse(int argc, char *argv[]);
};

#endif
