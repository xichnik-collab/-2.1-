#include <iostream>

int main() {

	setlocale(LC_ALL, "RU");
	int x;
	int y;
	std::cout << "Введите первое число\n";
	std::cin >> x;
	std::cout << "Введите второе число\n";
	std::cin >> y;
	double mid = (x + y) / 2.0;
	std::cout << "ответ" << " " << mid << "\nВведите знак операции +, -, * или /\n";
	char token;
	std::cin >> token;

#if 0
	if (token == '+') {
		std::cout << "сумма = " << x + y;
		//если token такой же как знак + то вывод на экран сумму 
	}
	if (token == '-') {
		std::cout << "Разность = " << x - y;
	}
	if (token == '*') {
		std::cout << "произведение = " << x * y;
	}
	if (token == '/') {
		std::cout << "деление  = " << x / y;
	}
	else
		std::cout << "ERRORRRRRR ;)";
	// иначе в случаи не выполнения ниодного из условий if, то на экране появится ошибка
#endif // 0




	switch (token) {
	case '+':
		std::cout << "сумма = " << x + y;
		break;
	case '-':
		std::cout << "Разность = " << x - y;
		break;
	case '*':
		std::cout << "произведение = " << x * y;
		break;
	case '/':
		std::cout << "деление = " << x / y;
		break;
	default:
		std::cout << "ERRORR ;)";



	}
	return 0;
}
