#include <iostream>
#include <limits>
#include <cctype>
#include <fstream> // чтение файла и запись в файл
#include <string> // для имен файлов
 const std::string INPUT_FILE = "input.txt";

    std::ifstream input(INPUT_FILE);
    if (!input)
    {
      std::cout << "File " << INPUT_FILE << " cannot be opened" << '\n';
      exit(2);
    }
    const std::size_t LENGTH_MAX = 64;
    char source[LENGTH_MAX + 1]; // + '\0'
    std::cout << "input string (max " << LENGTH_MAX << "): ";
    std::cin.getline(source, LENGTH_MAX, '\n');
    std::cout << "source: " << source << '\n';
char destination[LENGTH_MAX + 1];
const std::string OUTPUT_FILE = "output.txt";
std::ofstream output(OUTPUT_FILE);
if(!output)
{
std::cout << "File " << INPUT_FILE << " cannot be opened" << '\n';
      exit(2);
}
output << func_for_c_string(destination, source);
