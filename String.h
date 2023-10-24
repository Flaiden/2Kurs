#include <iostream>

int main() {
    const char* source = "Пример строки для копирования";
    char destination[100]; // Здесь указываем максимальную длину строки

    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0'; // Обязательно завершаем строку нулевым символом

    std::cout << "Скопированная строка: " << destination << std::endl;

    return 0;
}
