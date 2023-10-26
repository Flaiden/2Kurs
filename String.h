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


// Соединение
#include <iostream>

void connect(char dest[], const char dobav[]) {
    int dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    int src_len = 0;
    while (dobav[src_len] != '\0') {
        dest[dest_len + src_len] = dobav[src_len];
        src_len++;
    }
    dest[dest_len + src_len] = '\0';
}

int main() {
    char str1[50] = "Хочу ";
    const char str2[] = "5!";
    connect(str1, str2);
    std::cout << str1 << std::endl;
    return 0;
}

/////////////////////////////////////////////////

//Поиск символа

#include <iostream>

int findCharacter(const char* str, char target) {
    for (int i = 0; str[i]; ++i) {
        if (str[i] == target) return i;
    }
    return -1;
}

int main() {
    const char* text = "Hello guys!";
    char symbol = 'o';

    int position = findCharacter(text, symbol);

    if (position != -1) {
        std::cout << "Символ '" << symbol << "' найден на позиции " << position << std::endl;
    } else {
        std::cout << "Символ '" << symbol << "' не найден в строке." << std::endl;
    }

    return 0;
}

/////////

////////Сравнение

#include <iostream>


bool compareStrings(const char* str1, const char* str2) {
    
    while (*str1 != '\0' && *str2 != '\0') {
        
        if (*str1 != *str2) {
            return false;
        }
        str1++; 
        str2++; 
    }

  
    if (*str1 != '\0' || *str2 != '\0') {
        return false;
    }

    
    return true;
}

int main() {
    const char* str1 = "Пример строки";
    const char* str2 = "Пример строки";

    if (compareStrings(str1, str2)) {
        std::cout << "Строки идентичны." << std::endl;
    } else {
        std::cout << "Строки различны." << std::endl;
    }

    return 0;
}

///////////



