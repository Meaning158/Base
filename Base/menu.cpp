#include "function.h"
#include "Header.h"
void menu()
{
	string action;
	cout << "my database" << "\n";
	cout << "select actions from the suggested list" << "\n";
	cout << "write to the console what you want to do" << "\n";
	cout << "to create a table, write - \"create a table\"" << "\n";
	cout << "to add items to the table, write - \"add to the table\"" <<"\n" ;
	cout << "to print a table, write - \"print the table\"" << "\n";
	cin >> action;
	while (action != "exit")
	{
		if (action == "create_a_table")
		{
			createTable();
		}
		if (action == "add to the table")
		{

		}
		if (action == "print the table")
		{

		}
	}
	if (action == "exit")
	{
		cout << "goodbye" << endl;
		return;
	}
}


