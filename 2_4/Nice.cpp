#include <iostream>
#include "ok.h"
#define sum(one,two)(one+two)
//void foo(int x);

//using namespace std
using namespace OK1;

int main() {
	setlocale(LC_ALL, "ru");
	int cr;
	std::cout << " Напишите число: ";
	std::cin >> cr;
	foo(cr);
	std::cout << " Напишите число: ";
	std::cin >> cr;
	foo(cr);
	std::cout << " Напишите число: ";
	std::cin >> cr;
	foo(cr);

	//макрос
	int one, two;
	std::cout << " Напишите два числа: ";
    std::cin >> one>>two;
	std::cout << sum(one, two);

}

	//void foo(int r) {
	//	static int x = 0;
	//
	//	std::cout << std::endl <<"ОТВЕТ= "<< x + r << std::endl;
	//	x = r;
	//}