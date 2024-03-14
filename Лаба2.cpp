#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <cassert>

int main()
{
	std::vector < std:: string > rpn;
	std::string str;
	while (std::cin >> str) {
		rpn.push_back(str);
	}
	std::stack <int> stack;
	for (std::string str2 : rpn) {
		if (str2 == "+") {
			assert(stack.size() >= 2);
			int number_2 = stack.top();
			stack.pop();
			stack.top() += number_2;
		} else if (str2 == "-") {
			assert(stack.size() >= 2);
			int number_2 = stack.top();
			stack.pop();
			stack.top() -= number_2;
		} else if (str2 == "*") {
			assert(stack.size() >= 2);
			int number_2 = stack.top();
			stack.pop();
			stack.top() *= number_2;
		}
		else {
			stack.push(std::stoi(str2));
		}
	}
	assert(stack.size() == 1);
	std::cout << stack.top();

	return 0;
}



