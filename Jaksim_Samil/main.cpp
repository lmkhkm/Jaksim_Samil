/*
2022���� ����Ϸ� �����ϴ� ���
�������� 1���̹Ƿ� ���� 7�� �������� �ݿ����̴�
*/

#include<iostream>
#include"Calendar.h"
#include"MainSystem.h"
using namespace std;

int main(void)
{
	MainSystem sys = MainSystem(2022, 2);
	while (true)
	{
		sys.loop();
	}
}


