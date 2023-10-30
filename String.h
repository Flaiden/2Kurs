#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    const char* source = "Пример строки для копирования";
    char destination[100] = {0};

    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        std::cout << "Скопирован символ '" << source[i] << "' из индекса " << i << std::endl;
        i++;
    }

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

std::cout << "Действие произведено в индексе: " << dest_len << std::endl;
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
        std::cout << "Символ '" << symbol << "' найден на позиции " << position << ", индекс: " << position << std::endl;
    } else {
        std::cout << "Символ '" << symbol << "' не найден в строке." << std::endl;
    }

    return 0;
}





/////////

////////Сравнение

#include <iostream>

const char* my_strstr(const char* stroka1, const char* stroka2) {
    if (!stroka1 || !stroka2) {
        return stroka1;  
    }

    for (int i = 0; stroka1[i] != '\0'; i++) {
        std::cout << "Сравниваем символы в индексах " << i << " и " << 0 << std::endl;
        int j = 0;
        while (stroka2[j] != '\0' && stroka1[i + j] == stroka2[j]) {
            std::cout << "Символы равны в индексах " << i+j << " и " << j << std::endl;
            j++;
        }

        if (stroka2[j] == '\0') {
            return &stroka1[i];
        }
    }

    return stroka1;  
}

int main() {
    setlocale(LC_ALL, "Rus");
    const char* stroka1 = "это пример текста";
    const char* stroka2 = "пример";

    const char* result = my_strstr(stroka1, stroka2);

    if (result != stroka1) {
        std::cout << "подстрока найдена в индексе: " << (result - stroka1) << std::endl;
    } else {
        std::cout << "подстрока не найдена" << std::endl;
    }

    return 0;
}

/////////// подсчёт символов

#include <iostream>
#include <locale>

int wstroklong(const wchar_t* str) {
int length = 0;
int index = 0; // добавляем переменную для индекса


while (str[length] != L'\0') {
    std::wcout << L"Индекс: " << index << std::endl; // выводим индекс
    length++;
    index++; // увеличиваем индекс на 1
}

return length;
}

int main() {
const wchar_t* myString = L"Привет";


int length = wstroklong(myString);
std::wcout << L"Длина строки: " << length << std::endl;

return 0;
}

/////////////////



