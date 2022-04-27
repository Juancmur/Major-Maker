#include <iostream> 
using namespace std;

void majorSelection() 
{

	std::cout << "Insert Name and Major\n";
	std::cout << "1.Welding Technology, Associate of Applied Science\n2.General Studies, Associate of Arts\n"
		<< "3.Accounting, Associate of Applied Science\n4.Real Estate, Associate of Applied Science\n"
		<< "5.Eye Care Technology, Associate of Applied Science" << endl;
	
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

			switch (majorNum)
			{
			case 1:
				cout << userName << " You have pick Welding Technology, Associate of Applied Science" << endl;
				running = false;
				break;
			case 2:
				cout << userName << " You have pick General Studies, Associate of Arts" << endl;
				running = false;
				break;
			case 3:
				cout << userName << " You have pick Accounting, Associate of Applied Science" << endl;
				running = false;
				break;
			case 4:
				cout << userName << " You have pick Real Estate, Associate of Applied Science" << endl;
				running = false;
				break;
			case 5:
				cout << userName << " You have pick Eye Care Technology, Associate of Applied Science" << endl;
				running = false;
				break;
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
