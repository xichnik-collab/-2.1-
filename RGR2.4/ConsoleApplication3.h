#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "овв";
	const int size = 10;
	int arr[size] = { 3,2,10,8,5 };
	for (int i = 0;i < size;++i) {
		int min_index = i;
		for (int j = i + 1;j < size;++j) {
			if (arr[i] > arr[j]) {
				min_index = j;
			}
		}

	}


}