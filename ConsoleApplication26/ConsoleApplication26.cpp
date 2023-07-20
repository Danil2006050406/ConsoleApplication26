// ConsoleApplication26.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

void removeCloseNumbers(vector<double>& numbers, double tolerance) {
    
    sort(numbers.begin(), numbers.end());

    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        double diff = numbers[i + 1] - numbers[i];
        double percentageDiff = diff / numbers[i] * 100.0;

        
        if (percentageDiff < tolerance) {
            
            numbers.erase(numbers.begin() + i);
            
            break;
        }
    }
}

int main() { 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<double> numbers = { 12.5, 15.0, 11.0, 14.0, 13.0, 10.5, 14.5 };

    cout << "Список до сортування та видалення: ";
    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    
    removeCloseNumbers(numbers, 10.0);

    cout << "Список після сортування та видалення: ";
    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
