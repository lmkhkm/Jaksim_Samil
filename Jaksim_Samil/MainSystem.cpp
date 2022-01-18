#include "MainSystem.h"

using namespace std;

MainSystem::MainSystem(int year, int month)
{
	this->calender = new Calendar(100, month);
	this->year = year;
	this->month = month;
	this->calender->GenerateDate(this->year, this->month);

}
void MainSystem::ClearShell()
{
	system("cls");
}

void MainSystem::loop()
{
	char status[100];
	
	this->calender->PrintCalendar();
	cout << endl << "Input Status: ";
	cin >> status;
	cout << status << endl;

	if (!strcmp(status,"chd"))
	{
		cout << "Change Date" << endl;
		cout << "Year: ";
		cin >> this->year;
		cout << endl << "Month: ";
		cin >> this->month;
		this->calender->GenerateDate(this->year, this->month);
		this->ClearShell();
	}
	else if (!strcmp(status, "-help"))
	{
		cout << "Command" << endl;
		cout << "-help: show entire command" << endl;
		cout << "chd: change date" << endl;
		cout << "--END--" << endl;
	}
	else
	{
		cout << "Unkown Command" << endl;
	}
}


void MainSystem::ChangeDate(int year, int month)
{

}