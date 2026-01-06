#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Чтение строк из файла в вектор
vector<string> readLinesFromFile(const string& filename) {
    vector<string> lines;
    // TODO: Реализовать чтение строк из файла
    // Временно для отладки можно добавить тестовые данные
    // lines.push_back("Тестовая строка 1");
    // lines.push_back("Тестовая строка 2");
    return lines;
}

// Вывод строк на экран
void printLinesToConsole(const vector<string>& lines) {
    // TODO: Реализовать вывод строк на экран
    // for (const auto& line : lines) {
    //     cout << line << endl;
    // }
}

// Запись строк в файл
void writeLinesToFile(const vector<string>& lines, const string& filename) {
    // TODO: Реализовать запись строк в файл
    // ofstream outputFile(filename);
    // if (outputFile.is_open()) {
    //     for (const auto& line : lines) {
    //         outputFile << line << endl;
    //     }
    //     outputFile.close();
    // }
}

int main() {
    cout << "Программа для работы с текстовыми файлами" << endl;
    
    // Имя файла для чтения
    string inputFilename = "input.txt";
    // Имя файла для записи
    string outputFilename = "output.txt";
    
    // Чтение строк из файла
    vector<string> lines = readLinesFromFile(inputFilename);
    
    // Вывод строк на экран
    printLinesToConsole(lines);
    
    // Запись строк в файл
    writeLinesToFile(lines, outputFilename);
    
    cout << "Программа завершена." << endl;
    return 0;
}