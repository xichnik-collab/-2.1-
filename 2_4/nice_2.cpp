
#include "ok.h"

#include <iostream>

namespace OK1{
void foo(int r) {
	setlocale(LC_ALL, "ru");
	static int x = 0;

	std::cout << std::endl << "ОТВЕТ= " << x + r << std::endl;
	x = r;
}
}