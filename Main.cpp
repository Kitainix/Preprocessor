#include <iostream>
#include "Foo.hpp"


// Это - однострочный комментарий, но с помощью\
обратного слэша он разбит на несколько строк.


#define PI 3.14
#define forever for(unsigned long long fori = 0ULL;; fori++)
#define sum(a, b) (a + b)

#define print_arr(arr, size) \
std::cout << "{ "; \
for (int i = 0; i < size; i++) \
	std::cout << arr[i] << ", "; \
std::cout << "\b\b }\n"; 


#define TEST 2

#if TEST == 1
void func() {
	std::cout << "TEST №1\n";
}
#elif TEST == 2
void func() {
	std::cout << "TEST №2\n";
}
#else
void func() {
	std::cout << "NO ACTIVE TEST\n";
}
#endif


#define FLAG 

#ifdef FLAG
const int A = 13;
#else
const int A = 12;
#endif


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	// Константы и конструкции препроцессора.
	
	std::cout << "Pi = " << PI << std::endl;
	forever {
		std::cout << '.';
		std::cout << fori;
	}
	

	
	// Макроссы препроцессора.
	
	std::cout << "Введите два числа: ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	std::cout << sum(2, 2) * 2 << std::endl;

	const int size = 4;
	int arr[size]{ 10, 20, 30, 40 };
	print_arr(arr, size)
	
	std::cout << "PI = " << PI << std::endl;
#undef PI
	// std::cout << "PI = " << PI << std::endl; // Ошибка.
#define PI 3.1416
	std::cout << "PI = " << PI << std::endl;
	


	// 
	func();




	return 0;
}

// Препроцессор - это программа, которая производит некоторые, а иногда весьма значительные, манипуляции с первоначальным текстом программы
// перед тем как он подвергается компиляции.

// Директива препроцессора - команда, указывающие препроцессору на то, где и какие изменения с исходным кодом ему необходимо выполнить. Все
// директивы препроцессора начинаются с символа "#". 