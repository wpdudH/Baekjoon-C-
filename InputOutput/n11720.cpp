/*
����
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

���
�Է����� �־��� ���� N���� ���� ����Ѵ�.
*/

#include <iostream>
#include <string>

int main()
{
	int len;
	int answer = 0;
	std::string s;

	std::cin >> len;
	std::cin >> s;

	for (int i = 0; i < len; i++)
	{
		answer += s[i] - '0';
	}

	std::cout << answer;

	return 0;
}