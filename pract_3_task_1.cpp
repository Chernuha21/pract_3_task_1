#include <iostream>
#include <forward_list>

int main() {
    // 1. Створення однозв'язного списку з кількома елементами
    std::forward_list<int> flist = { 1, 2, 3, 4, 5 };

    // 2. Виведення всіх елементів списку на екран
    std::cout << "ЕElements of list: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
