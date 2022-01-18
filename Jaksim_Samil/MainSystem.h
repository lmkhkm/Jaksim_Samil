#ifndef MAINSYSTEM_H
#define MAINSYSTEM_H

#include"Calendar.h"

class MainSystem
{
private:
	bool haltFlag = false;
	int year;
	int month;
	
	Calendar* calender;

public:
	~MainSystem() {};
	MainSystem(int year, int month);
	void ClearShell();
	void loop();
	void ChangeDate(int year, int month);

};


#endif
