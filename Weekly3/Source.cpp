#include <iostream>
#include <cstdlib> //For srand and rand
#include <ctime> //For time

void clearcin();

int main() {

	int GuessThis{};
	int UserGuess{};
	bool Repeat{};

	system("cls");
	srand(time(NULL));
	GuessThis = rand() % 100 + 1;
	std::cout << "I'm thinking of a number. Please try to guess it!" << std::endl;
	do {
		Repeat = false;
		std::cout << "Enter a number: ";
		std::cin >> UserGuess;
		clearcin();
		if (UserGuess > GuessThis) {
			std::cout << "Too high, guess a lower number!" << std::endl;
			Repeat = true;
			continue;
		}
		else if (UserGuess < GuessThis) {
			std::cout << "Too low, guess a higher number!" << std::endl;
			Repeat = true;
			continue;
		}
		else if (UserGuess == GuessThis) {
			std::cout << "That's correct! Congratulations!" << std::endl;
			break;
		}
		else {
			std::cout << "Invalid input!" << std::endl;
			Repeat = true;
			continue;
		}
	} while (Repeat == true);

	return 0;
}

void clearcin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}