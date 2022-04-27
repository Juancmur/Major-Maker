#include <iostream> 
using namespace std;

void menu() {
	int choice;
	do
	{
		cout << "0. Get Started\n1." << std::endl << "1. Quit\n2";
		int choice;
		std::cin >> choice;
		
		switch (choice)
		{
		case 0:
			std::cout << "Insert Name and Major\n";
			break;
		case 1:
			std::cout << "Thank You/n";
			break;
		}
	}
}

int main()
{
	menu()
}
