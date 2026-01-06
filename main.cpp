#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Чтение строк из файла в вектор
vector<string> readLinesFromFile(const string& filename) {
    vector<string> lines;
    
    ifstream inputFile(filename);
    
    if (!inputFile.is_open()) {
        // Если файл не открылся, выводим сообщение об ошибке
        cout << "Ошибка: не удалось открыть файл " << filename << endl;
        return lines; // Возвращаем пустой вектор
    }
    
    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }
    
    inputFile.close();
    
    // Для отладки и проверки работы функции
    // Выводим содержимое вектора в консоль
    cout << "Прочитано строк из файла: " << lines.size() << endl;
    if (!lines.empty()) {
        cout << "Содержимое файла:" << endl;
        for (size_t i = 0; i < lines.size(); i++) {
            cout << "[" << i + 1 << "] " << lines[i] << endl;
        }
    } else {
        cout << "Файл пуст или произошла ошибка чтения." << endl;
    }
    
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