/*
����:
���� A�� �־����� ��, ���� �� �����ϴ� �κ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� A = {10, 20, 10, 30, 20, 50} �� ��쿡 ���� �� �����ϴ� �κ� ������ A = {10, 20, 10, 30, 20, 50} �̰�, ���̴� 4�̴�.

�Է�:
ù° �ٿ� ���� A�� ũ�� N (1 �� N �� 1,000)�� �־�����.

��° �ٿ��� ���� A�� �̷�� �ִ� Ai�� �־�����. (1 �� Ai �� 1,000)

���:
ù° �ٿ� ���� A�� ���� �� �����ϴ� �κ� ������ ���̸� ����Ѵ�.
*/
#include <iostream>
#define MAX 10000 + 1

int N;
int Arr[MAX] = { 0, };
int DP[MAX] = { 0, };

int main()
{
	std::cin >> N;

	int length = 0;

	for (int i = 1; i < N + 1; i++)
	{
		std::cin >> Arr[i];
	}

	for (int j = 1; j < N + 1; j++)
	{
		DP[j] = 1;
		for (int k = 1; k < j; k++)
		{
			if (Arr[j] > Arr[k])
			{
				DP[j] = (DP[j] > DP[k] + 1) ? DP[j] : DP[k] + 1;
			}
		}

		length = (DP[j] > length) ? DP[j] : length;
	}

	std::cout << length << std::endl;

	return 0;
}
