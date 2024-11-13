#include <iostream>
#include <forward_list>

int main() {
    // 1. ��������� ������'������ ������ � ������� ����������
    std::forward_list<int> flist = { 1, 2, 3, 4, 5 };

    // 2. ��������� ��� �������� ������ �� �����
    std::cout << "�Elements of list: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
