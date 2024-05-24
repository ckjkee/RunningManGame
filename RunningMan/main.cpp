#include <iostream>
#include <cstdlib>


namespace {
	const char home[] = "|HOME|";
	const char pub[] = "|PUB|";
	const int SIZE = 60;
	const int limit = 1000000;
}

int main()
{
	std::cout << "Enter your character: " << std::endl;
	char ch;
	std::cin >> ch;
	int position = SIZE / 2;
	srand(time(0));
	int counter = 0;
	while (counter != limit)
	{
		std::cout << pub;
		for (int i = 0; i < SIZE; ++i)
		{
			if (i == position)
			{
				std::cout << ch;
			}
			std::cout << ' ';
		}
		std::cout << home << std::endl;
		int move = rand() % 3 - 1;
		position = position + move;
		if (position > SIZE - 1)
		{
			std::cout << "Finally! You are at home! Have a rest." << std::endl;
			break;
		}
		if (position < 1)
		{
			std::cout << "It's not your home! You've lost!" << std::endl;
			break;
		}
		++counter;
	}
}