
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
	~Calendar() {}	//�Ҹ���
	Calendar(int nowDate, int month);//������
	int GetNowDate();//���� ��¥ �ޱ�
	void GenerateDate(int year, int month);//��¥ ������ ����
	void PrintCalendar();//������ ��¥ ������ ǥ��
};

#endif