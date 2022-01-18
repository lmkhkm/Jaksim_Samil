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
	�׷�����
	4�� ����� 366��
	100�� ����� �׳�
	400�� ����� 366��
	*/
	if (yearDiffrence > 0)//1970�⺸�� �ռ� ��
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
	else//1970�� ������ �� = ���� ��
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
	startDate %= 7; //0�� 1�� 2ȭ 3�� 4�� 5�� 6��
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