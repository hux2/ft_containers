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

	std::stack<int>	test;
	std::stack<int>	std_test;
	ft::stack<int>	my_test;
	ft::stack<int>	copy_test;


	test.push(123);
	std_test.push(122);
	my_test.push(123);

	copy_test = my_test;

	if (my_test == copy_test)
	{
		std::cout << "same" << std::endl;
	}

	test.push(42);
	my_test.pop();

	std::cout << test.size() << std::endl;
	std::cout << my_test.size() << std::endl;
	std::cout << copy_test.size() << std::endl;

	is_empty = my_test.empty();
	if (is_empty)
		std::cout << "empty" << std::endl;
	else
		std::cout << "not empty" << std::endl;

	std::cout << "top element : " << test.top() << std::endl;
}
