#include <iostream> 
using namespace std;

void majorSelection() 
{

	std::cout << "Insert Name and Major\n";
	std::cout << "1.Welding Technology, Associate of Applied Science\n2.General Studies, Associate of Arts\n"
		<< "3.Accounting, Associate of Applied Science\n4.Real Estate, Associate of Applied Science\n"
		<< "5.Eye Care Technology, Associate of Applied Science";
	
}

void menu() 
{
	int choice;

	bool running = true;
	while (running) //menu
	{
		// 0 will start the program, 1 will end the program
		cout << "0. Get Started\n" << "1. Quit\n";
		int choice;
		std::cin >> choice; 

		string userName; //store name and major selection
		int majorNum;
				
		switch (choice)
		{
		case 0:
			majorSelection();
			cin >> userName; // get name and major
			cin >> majorNum;
			if (majorNum = 1)
			{
				cout << userName << " You have pick Welding Technology, Associate of Applied Science";
			}
			else if (majorNum = 2)
			{
				cout << userName << " You have pick General Studies, Associate of Arts";
			}
			else if (majorNum = 3)
			{
				cout << userName << " You have pick Accounting, Associate of Applied Science";
			}
			else if (majorNum = 4)
			{
				cout << userName << " You have pick Real Estate, Associate of Applied Science";
			}
			else
			{
				cout << userName << " You have pick Eye Care Technology, Associate of Applied Science";
			}

			running = false;
			break;
		case 1:
			std::cout << "Thank You\n";
			running = false;
			break;
		}
	}
}

int main()
{
	menu();
}
