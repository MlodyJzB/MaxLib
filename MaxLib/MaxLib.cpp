#include <array>
#include <iostream>
#include "Max.h"

int max(std::array<std::array<int, maxColumns>, maxRows> array, size_t rows, size_t columns) {
	int element;
	int maxElement = 0;
	int sum;
	for (int c = 0; c < int(columns); c++) {
		for (int r = 0; r < int(rows); r++) {
			element = array.at(r).at(c);
			sum = thirdDigitSum(element);
			if ((sum != 0) && (sum % 2 == 0) && (element > maxElement)) {
				maxElement = element;
			}
		}
	}
	return maxElement;
}

int thirdDigitSum(int element) {
	int sum = 0;
	while (element > 99) {
		element /= 100;
		sum += element % 10;
		element /= 10;
	}
	return sum;
}
