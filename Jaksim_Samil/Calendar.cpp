#include"Calendar.h"
#include<iostream>
using namespace std;

Calendar::Calendar(int nowDate, int month)
{
	this->nowDate = nowDate;
	GenerateDate(DEFALTYEAR, month);
	PrintCalendar();
}

int Calendar::GetNowDate()
{
	return(this->nowDate);
}

void Calendar::GenerateDate(int year, int month)
{
	int startDate = 0;
	int nowDay = 1;
	int yearDiffrence = year - DEFALTYEAR;

	/*
	그래고리력
	4의 배수는 366일
	100의 배수는 그냥
	400의 배수는 366일
	*/
	if (yearDiffrence > 0)//1970년보다 앞설 때
	{
		for (int i = 0; i < yearDiffrence; i++)
		{
			if (i / 4 == 2)
			{
				startDate += 366;
			}
			else
			{
				startDate += 365;
			}
		}
	}
	else//1970년 이전일 때 = 구현 중
	{

	}
	

	for (int i = 0; i < month; i++)
	{
		if (year / 4 == 0 && i == 2)
		{
			startDate += MONTHDATE[i] + 1;
		}
		else
			startDate += MONTHDATE[i];
	}
	startDate -= 1;
	if (startDate < 0)
	{
		startDate += 7;
	}
	startDate %= 7; //0일 1월 2화 3수 4목 5금 6토
	for (int j = 0; j < 6; j++)
	{
		for (int k = 0; k < 7; k++)
		{
			if (j == 0 && k < startDate)
			{
				this->date[j][k] = ' ';
			}
			else if (nowDay > MONTHDATE[month])
			{
				this->date[j][k] = ' ';
			}
			else
			{

				this->date[j][k] = nowDay;
				nowDay++;
			}
		}
	}
}

void Calendar::PrintCalendar()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (date[i][j] == ' ')
			{
				cout << "    ";
			}
			else
			{
				cout << "  " << date[i][j] + 0;
			}
		}
		cout << endl;
	}
}