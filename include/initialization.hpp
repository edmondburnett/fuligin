#ifndef INITIALIZATION_INCLUDED
#define INITIALIZATION_INCLUDED

#include <filesystem>

bool is_path_empty(std::filesystem::path path);
bool safe_to_init();
void initialize();

#endif
