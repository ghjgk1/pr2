// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>

//Структура
struct House {
    char address[256];
    int bedrooms;
    float price;
};

void EditHouse(House &house) {
    std::cout << "Введите адрес: ";
    std::cin >> house.address;
    std::cout << "Введите количество комнат: ";
    std::cin >> house.bedrooms;
    std::cout << "Введите цену: ";
    std::cin >> house.price;
};

bool averagePrice(House house, int kolBedrooms) {
    if (house.bedrooms == kolBedrooms) return true;
    else return false;
}

//Класс

class Queue
{
private:
    int* elements;
    int size = 0;
public:
    void Add(int number) {
        size++;
        int* newElements = new int[size];
        if (size != 1) {
            for (int i = 0; i < size; i++) {
                newElements[i] = elements[i];
            }
        }
        newElements[size - 1] = number;
        elements = new int[size];
        elements = newElements;
    }
    void Remove() {
        if (size > 0) {
            size--;
            int* newElements = new int[size];
            for (int i = 0; i < size; i++) {
                newElements[i] = elements[i];
            }
            elements = new int[size];
            elements = newElements;
        }
    }
    void PrintQueue(){
        std::cout << "Очередь: " << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;

    }
};



int main()
{
    setlocale(LC_ALL, "Russian");
    //Одномерный массив
    /*int sum = 0;
    srand(time(NULL));
    int arr[10];
    std::cout << "Исходный массив ";
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 - 50;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Массив абсолютных значений ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) arr[i] = arr[i] * (-1);
        std::cout << arr[i] << " ";
        sum += arr[i];
    }
    std::cout << std::endl;
    std::cout << "Сумма абсолютных значений " << sum;*/


    //Двумерный массив
    /*srand(time(NULL));
    int arr[5][5];
    std::cout << "Массив";
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < 5; i++) {
        int kol = 0;
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
            for (int k = j + 1; k < 5; k++) {
                if (arr[i][j] == arr[i][k]) kol++;
            }
        }
        if (kol == 0) std::cout << "Нет повторяющихся чисел" << std::endl;
        else std::cout << "Есть повторяющиеся числа" << std::endl;
    }*/

    //Структура
    /*srand(time(NULL));
    int kolBedrooms;
    House houses[5];
    for (int i = 0; i < 5; i++) {
        EditHouse(houses[i]);
    }
    std::cout << "Введите количество комнат, для которых необходимо расчитать среднюю цену: ";
    std::cin >> kolBedrooms;
    int kol = 0, price = 0;
    for (int i = 0; i < 5; i++) {
        if (averagePrice(houses[i], kolBedrooms) == true) {
            kol++;
            price += houses[i].price;
        }
    }
    std::cout << "Cредняя цена для " << kolBedrooms << "-х квартир: " << price / kol;*/

    //Класс
    Queue myQueue;
    bool bb = true;
    while (bb == true) {
        int i;
        std::cout << "Для добавления нажмите 0" << std::endl << "Для удаления нажмите 1" << std::endl << "Для просмотра очереди нажмите 2" << std::endl << "Для выхода нажмите любую другую цифру" << std::endl;
        std::cin >> i;
        if (i == 0) {
            std::cout << "Введите число для добавления" << std::endl;
            std::cin >> i;
            myQueue.Add(i);
        }
        else if (i == 1) myQueue.Remove();
        else if (i == 2) myQueue.PrintQueue();
        else bb = false;
    }
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
