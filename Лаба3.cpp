
#include <iostream>
#include <deque>
#include <cmath>

int main()
{	
	std::deque<int> player1;
	std::deque<int> player2;
	int moves = 0;
	
	for (int i = 0; i < 5; ++i) {
		int card1 = 0;
		std::cin >> card1;
		player1.push_back(card1);
	}
	for (int i = 0; i < 5; ++i) {
		int card2 = 0;
		std::cin >> card2;
		player2.push_back(card2);
	}
	while (!player1.empty() && !player2.empty()) {
		int c1 = player1.front();
		player1.pop_front();
		int c2 = player2.front();
		player2.pop_front();
		if (c1 == 0 && c2 == 9) {
			player1.push_back(c1);
			player1.push_back(c2);
		}
		else if (c1 == 9 && c2 == 0) {
			player2.push_back(c1);
			player2.push_back(c2);
		}
		else if (c1 < c2) {
			player2.push_back(c1);
			player2.push_back(c2);
		}
		else if (c1 > c2){
			player1.push_back(c1);
			player1.push_back(c2);
		}
		moves++;
		if (moves >= 1000000) {
			std::cout << "botva";
			return 0;
		}
	}
	if (!player1.empty()) {
		std::cout << "first " << moves;
	}
	else {
		std::cout << "second " << moves;
	}


	return 0;
}

