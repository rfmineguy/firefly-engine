#include "Core/file_util.h"
#include <fstream>
#include <iterator>
#include <sstream>
#include <iostream>

std::string FileUtil::ReadFile(const std::string& path) {
    std::fstream file(path, std::ios::in);
    std::string contents = "", string;
    std::stringstream str;
    str << file.rdbuf();
    file.close();

    std::string s = str.str();
    return s;
}
