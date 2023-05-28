#include <iostream>
#include <vector>

int main()
{
	/*Если необходимо удалить все элементы вектора, то можно использовать функцию clear:
	std::vector<int> v { 1,2,3,4 };
	v.clear();*/
	std::cout << "Функция clear()" << '\n';
    std::vector<int> vec (5, 2); // 5 элементов с цифрой 2

	std::cout << "Первый вывод vec: "; // 22222
	for (int n : vec)
	{
		std::cout << n; // 2, 2, 2, 2, 2
		if (n != vec.size() - 1) std::cout << ", ";
	}
	std::cout << '\n';
	// удаляем все элементы
	vec.clear();
	std::cout << "Второй вывод vec: (после применения функции clear(); "; 
	for (int n : vec)
	{
		std::cout << n << ", ";
	}
	std::cout << '\n' << '\n';

	/* Функция pop_back() удаляет последний элемент вектора :*/
	std::cout << "Функция pop_back()" << '\n';
	std::vector<int> vec2 {1,2,3,4,5,6,7};
	std::cout << "Первый вывод vec2: "; 
	for (int i = 0; i < vec2.size(); i++)
	{
		std::cout << vec2[i]; 
		if (i != vec2.size() - 1) std::cout << ", ";
	}
	std::cout << '\n';

	vec2.pop_back();
	std::cout << "Второй вывод vec: (после применения функции pop_back(): ";
	for (int i = 0; i < vec2.size(); i++)
	{
		std::cout << vec2[i];
		if (i != vec2.size() - 1) std::cout << ", ";
	}
	std::cout << '\n' << '\n';


	/*Если нужно удалить элемент из середины или начала контейнера, применяется 
	функция std::erase(), которая имеет следующие формы:
	erase(p): удаляет элемент, на который указывает итератор p. 
	Возвращает итератор на элемент, следующий после удаленного, или на конец контейнера, 
	если удален последний элемент erase(begin, end): удаляет элементы из диапазона, 
	на начало и конец которого указывают итераторы begin и end. Возвращает итератор на 
	элемент, следующий после последнего удаленного, или на конец контейнера, если удален 
	последний элемент*/

	// Применение функции :
	std::vector<int> numbers1{ 1, 2, 3, 4, 5, 6 };
	auto iter = numbers1.cbegin(); // указатель на первый элемент
	numbers1.erase(iter + 2);   // удаляем третий элемент
	// numbers1 = { 1, 2, 4, 5, 6 }

	std::vector<int> numbers2 = { 1, 2, 3, 4, 5, 6 };
	auto begin = numbers2.cbegin(); // указатель на первый элемент
	auto end = numbers2.cend();     // указатель на последний элемент
	numbers2.erase(begin + 2, end - 1); // удаляем с третьего элемента до последнего
	// numbers2 = {1, 2, 6}

	

}

