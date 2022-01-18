#include "MainSystem.h"
#include <iostream>
#include <stdlib.h>

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
	int status = 0;

	ClearShell();
	
	this->calender->PrintCalendar();
	cout << endl << "Input Status: ";
	cin >> status;
	if (status == 1)
	{
		cout << "Change Date" << endl;
		cout << "Year: ";
		cin >> this->year;
		cout << endl << "Month: ";
		cin >> this->month;
		this->calender->GenerateDate(this->year, this->month);
	}
	else
	{
		cout << "Unkown Command" << endl;
	}
}


void MainSystem::ChangeDate(int year, int month)
{

}