#include <iostream>

int num(int one = 1);
int good(int a, int b, int& c, int& e);


int main()
{
    setlocale(LC_ALL, "ru");

    const int row = 2;
    const int column = 3;
    int arr[row][column];

    int sum = 0;
    int arr2[column] = {};

    for (int i = 1;i < row;++i) {
        for (int j = 0;j < column;++j) {

            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << "\t";
            sum += arr[i][j];
            arr2[j] += arr[i][j];

        }std::cout << std::endl;

    }std::cout << "СУММА:  " << sum << "\n";
    for (int i = 0;i < column;++i) {
        std::cout << arr2[i] << '\t';

    }


    float flo = 20.84;
    float* pflo = &flo;
    float* pflo_2 = &flo;
    *pflo_2 = 77.88;
    std::cout << std::endl << "\nПервая сылка= " << *pflo << "\nПеременная= " << flo << std::endl;;

    std::cout << "Напишите число\n";
    int a, a2, b, c, e;
    std::cin >> a;


    num(a);
    std::cout << "\nПроверка параметра по умолчанию (num()): ";
    num();
    std::cout << std::endl;

    // для функцмм good
    std::cin >> a2;
    std::cin >> b;
    std::cin >> c;
    std::cin >> e;

    int* pc = &c;
    int* pe = &e;

    good(a2, b, *pc, *pe);
    std::cout << *pc << "  " << e << "\n";



    //с 15-18пп
    int ok = 10;
    std::cout << ok << std::endl;
    for (int i = 0;i < 3;++i) {
        std::cout << ok << std::endl;
        int ok2 = 25;
        std::cout << ok2 << std::endl;
    }
    //std::cout << ok2 << std::endl; выдает ошибку- проверил
}

int num(int one) {
    int sum = 0;
    if (one > 0) {
        for (int i = 0; i <= one; ++i) {
            sum += i;

        }
        std::cout << sum;
        return sum;

    }
    else
        std::cout << 0;
    return 0;

}


int good(int a, int b, int& c, int& e) {
    c = a + b;
    e = a * b;
    std::cout << a << "\t";
    std::cout << b << "\t";
    std::cout << c << "\t";
    std::cout << e << std::endl;
    return  a, b, c, e;

}


