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

int Bigger(int a, int b)
{
	return (a > b) ? a : b;
}

int N;
int Arr[MAX] = { 0, };
int DP[MAX] = { 0, };

int main()
{
	std::cin >> N;

	int large = 0;

	for (int i = 1; i < N + 1; i++)
	{
		std::cin >> Arr[i];
	}

	for (int j = 1; j < N + 1; j++)
	{
		DP[j] = Arr[j];
		for (int k = 1; k < j; k++)
		{
			if (Arr[j] > Arr[k])
			{
				DP[j] = Bigger(DP[j], DP[k] + Arr[j]);
			}
		}

		large = (DP[j] > large) ? DP[j] : large;
	}

	std::cout << large << std::endl;

	return 0;
}
