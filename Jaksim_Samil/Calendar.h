
#ifndef CALENDER_H
#define CALENDER_H

class Calendar
{
private:
	int nowDate;
	const int ONEYEAR = 365;
	const int ONEMONTH = 30;
	const int ONEWEEK = 7;
	char date[6][7];
	const int MONTHDATE[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const int DEFALTYEAR = 1970;
	

protected:	

public:
	~Calendar() {}	//소멸자
	Calendar(int nowDate, int month);//생성자
	int GetNowDate();//현재 날짜 받기
	void GenerateDate(int year, int month);//날짜 데이터 생성
	void PrintCalendar();//생성된 날짜 데이터 표시
};

#endif