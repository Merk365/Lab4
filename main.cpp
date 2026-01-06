#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
vector<string> readLinesFromFile(const string& filename) {
    vector<string> lines;
    // TODO: Реализовать чтение строк из файла
    // Участник №1 работает над этой функцией
    return lines;
}

// Функция 2: Вывод строк на экран
void printLinesToConsole(const vector<string>& lines) {
    cout << "=== Вывод строк на экран ===" << endl;
    for (size_t i = 0; i < lines.size(); i++) {
        cout << "Строка " << i + 1 << ": " << lines[i] << endl;
    }
    cout << "Всего строк: " << lines.size() << endl;
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const vector<string>& lines, const string& filename) {
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        cout << "Запись в файл " << filename << "..." << endl;
        for (const auto& line : lines) {
            outputFile << line << endl;
        }
        outputFile.close();
        cout << "Запись завершена успешно." << endl;
    } else {
        cout << "Ошибка: не удалось открыть файл " << filename << " для записи" << endl;
    }
}

int main() {
    cout << "Программа для работы с текстовыми файлами" << endl;
    
    // Имя файла для чтения
    string inputFilename = "input.txt";
    // Имя файла для записи
    string outputFilename = "output.txt";
    
    vector<string> lines = readLinesFromFile(inputFilename);
    
    printLinesToConsole(lines);
    
    writeLinesToFile(lines, outputFilename);
    
    cout << "Программа завершена." << endl;
    return 0;
}