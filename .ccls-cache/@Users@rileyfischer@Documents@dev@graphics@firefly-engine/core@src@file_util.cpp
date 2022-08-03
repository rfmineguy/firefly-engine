#include "Core/file_util.h"
#include <fstream>
#include <iterator>
#include <sstream>
#include <iostream>

std::string FileUtil::ReadFile(const std::string& path) {
    std::fstream file(path, std::ios::in);
    if (file.is_open()) {
        std::cout << "File opened\n";
    }
    std::string contents, string;

    while (std::getline(file, string, '\n')) {
        std::cout << string << std::endl;
        contents.append(string);
    }
    return contents;
}
