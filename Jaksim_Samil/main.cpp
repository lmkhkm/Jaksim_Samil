/*
2022년은 토요일로 시작하는 평년
시작일이 1일이므로 따라서 7로 떨어지면 금요일이다
*/

#include<iostream>
#include"Calendar.h"
using namespace std;

void loop(void)
{
	if (false)
	{
		return ;
	}
}

int main(void)
{
	Calendar calendar(100, 1);
	calendar.GenerateDate(2021, 12);
	calendar.PrintCalendar();
}


