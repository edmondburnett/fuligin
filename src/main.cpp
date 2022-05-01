#include <iostream>
#include <string>
#include <vector>

#include <SimpleArgParse.hpp>

using namespace std;

int main(int argc, char **argv)
{
    SimpleArgParse sap;
    sap.parse(argc, argv);

    return 0;
}