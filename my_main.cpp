#include "vector.hpp"
#include <vector>
#include <stack>
#include "stack.hpp"
#include <iostream>

int main()
{
	int	is_empty;
	// ft::vector<int> hi(5);

	// hi.push_back(1);
	// hi.push_back(2);
	// hi.push_back(3);
	// hi.push_back(4);
	// hi.push_back(5);

	// hi.print_vector();

	std::stack<int, std::vector<int> >	test;
	ft::stack<int, std::vector<int> >	my_test;
	ft::stack<int, std::vector<int> >	copy_test;

	copy_test = my_test;

	test.push(123);
	my_test.push(42);

	std::cout << test.size() << std::endl;
	std::cout << my_test.size() << std::endl;
	std::cout << copy_test.size() << std::endl;


	is_empty = my_test.empty();
	if (is_empty)
		std::cout << "empty" << std::endl;
	else
		std::cout << "not empty" << std::endl;
}
