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
				cout << " The classes you must take are Introduction to Blueprint Reading,"
				<<	"Fundamentals of Oxy - Fuel Welding and Cutting, Introduction to Gas Tungsten Arc Welding(GTAW),"
				<<	"Advanced Shielded Metal Arc Welding(SMAW)" << endl; 
				cout << " These classes are available Online or Face to Face Monday through Friday" << endl; 
				cout << " Face to Face" << endl; 
				cout << " 6:30am  7:40am  8:50am  10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm " << endl; 
				cout << " Online " << endl; 
				cout << " 10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm  6:10pm  7:20pm  8:30pm " << endl;
				running = false;
				break;
			case 2:
				cout << userName << " You have pick General Studies, Associate of Arts" << endl;
				cout << " The classes are you must take are Composition I," 
				<<	"College Algebra, Biology for Science Majors, United States History " << endl;
				cout << " Face to Face" << endl;
				cout << " 6:30am  7:40am  8:50am  10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm " << endl;
				cout << " Online " << endl;
				cout << " 10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm  6:10pm  7:20pm  8:30pm " << endl;
				running = false;
				break;
			case 3:
				cout << userName << " You have pick Accounting, Associate of Applied Science" << endl;
				cout << " The classes you must take are Principles of Financial Accounting, Business Principles"
				<< "Payroll and Business Tax Accounting, Introduction to Computerized Accounting" << endl;
				cout << " Face to Face" << endl;
				cout << " 6:30am  7:40am  8:50am  10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm " << endl;
				cout << " Online " << endl;
				cout << " 10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm  6:10pm  7:20pm  8:30pm " << endl;
				running = false;
				break;
			case 4:
				cout << userName << " You have pick Real Estate, Associate of Applied Science" << endl;
				cout << " The classes you must take are Principles of Real Estate, Law of Contracts,"
				<<	"Real Estate Finance, Law of Agency " << endl; 
				cout << " Face to Face" << endl;
				cout << " 6:30am  7:40am  8:50am  10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm " << endl;
				cout << " Online " << endl;
				cout << " 10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm  6:10pm  7:20pm  8:30pm " << endl;
				running = false;
				break;
			case 5:
				cout << userName << " You have pick Eye Care Technology, Associate of Applied Science" << endl;
				cout << " The classes you must take are Visual System, Ophthalmic Techniques," 
				<<	"Introduction to Eye Care Professions, Vision Care Office Procedures" << endl;
				cout << " Face to Face" << endl;
				cout << " 6:30am  7:40am  8:50am  10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm " << endl;
				cout << " Online " << endl;
				cout << " 10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm  6:10pm  7:20pm  8:30pm " << endl;
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