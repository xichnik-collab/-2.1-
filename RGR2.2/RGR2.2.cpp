#include <iostream>


int main() {
	setlocale(LC_ALL, "ru");
	short x;

	std::cout << "число должно быть больше нуля\n";
	std::cin >> x;
	while (x <= 0) {
		std::cin.clear();
		std::cin.ignore();
		std::cout << "число должно быть больше нуля\n";
		// как предотвратить ошибку если написать букву
		std::cin >> x;
	}
	int sum = 0;
	for (int i = 1; i <= x; ++i) {
		if (i > 1) {
			std::cout << "+";
		}
		sum += i;
		std::cout << i;
	}
	std::cout << "\n" << "СУММА " << sum << "\n";


	const int size = 10;

	int nummber[size] = { 8, 7,8 ,0,79,88,88,6,5,4 };
	const char* name[size]{
		"ПЕРВОЕ_ЧИСЛО",
		"ВТОРОЕ_ЧИСЛО",
		"ТРЕТЬЕ_ЧИСЛО",
		"ЧЕТВЕРТОЕ_ЧИСЛО",
		"ПЯТОЕ_ЧИСЛО",
		"ШЕСТОЕ_ЧИСЛО",
		"СЕДЬМОЕ_ЧИСЛО",
		"ВОСЬМОЕ_ЧИСЛО",
		"ДЕВЯТОЕ_ЧИСЛО",
		"ДЕСЯТОЕ_ЧИСЛО",

	};

	for (int i = 0;i < 10; ++i) {
		std::cout << name[i] << " " << nummber[i] << std::endl;

	};
	std::cout << "\n             ЧЕТНЫЕ_ЧИСЛА\n";
	for (int i = 0; i < 10; ++i) {
		if (nummber[i] % 2 != 1) {
			std::cout << nummber[i] << " " << name[i] << std::endl;
		}
	};
	std::cout << "\n             НЕЧЕТНЫЕ_ЧИСЛА\n";
	for (int i = 0; i < 10; ++i) {
		if (nummber[i] % 2 == 1) {
			std::cout << nummber[i] << " " << name[i] << std::endl;
		}
	};

	return 0;
}