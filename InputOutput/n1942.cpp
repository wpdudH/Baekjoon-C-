/*
����
������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? 
�̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1 �� x �� 12)�� y(1 �� y �� 31)�� �־�����. ����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

���
ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.
*/

#include <iostream>
#include <map>

int main()
{
	const std::map<int, int> date({ 
		{1, 31}, { 2, 28 }, { 3, 31 }, { 4, 30 }, { 5, 31 }, { 6, 30 }, { 7, 31 }, { 8, 31 } , { 9, 30 }, { 10, 31 }, { 11, 30 }, { 12, 31 }
		});

	int month, day;

	std::cin >> month >> day;

	for (int i = 1; i < month; i++)
	{
		day += date.at(i);
	}

	switch (day % 7)
	{
	case 1:
		std::cout << "MON";
		break;
	case 2:
		std::cout << "TUE";
		break;
	case 3:
		std::cout << "WED";
		break;
	case 4:
		std::cout << "THU";
		break;
	case 5:
		std::cout << "FRI";
		break;
	case 6:
		std::cout << "SAT";
		break;
	case 0:
		std::cout << "SUN";
		break;
	}
}