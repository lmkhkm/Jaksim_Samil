/*
2022년은 토요일로 시작하는 평년
시작일이 1일이므로 따라서 7로 떨어지면 금요일이다
*/

#include<iostream>
using namespace std;

class Calendar
{
private:
	int nowDate;
	const int ONEYEAR = 365;
	const int ONEMONTH = 30;
	const int ONEWEEK = 7;
	char date[6][7];
	int MONTHDATE[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

protected:

public:
	Calendar(int nowDate, int month)
	{
		this->nowDate = nowDate;
		GenerateDate(month);
		PrintCalendar();
	}

	int GetNowDate()
	{
		return(this->nowDate);
	}


	void GenerateDate(int month)
	{
		int startDate = 0;
		int nowDay = 0;

		for (int i = 0; i < month; i++)
		{
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
				else if(nowDay>MONTHDATE[month])
				{
					this->date[j][k] = ' ';
				}
				else
				{
					nowDay++;
					this->date[j][k] = nowDay;
				}
			}
		}
	}
	
	void PrintCalendar()
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
					cout << "  " << date[i][j]+0;
				}
			}
			cout << endl;
		}
	}

};


void loop(void)
{
	if (false)
	{
		return ;
	}
}

int main(void)
{
	Calendar calendar(100, 2);
}


