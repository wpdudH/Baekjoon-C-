/*
����
�����̴� ������ ��ȣ�� �˾Ƴ����� �Ѵ�. �����̴� ���� ���縦 ���� �������� ��ǻ�Ϳ� � ���ڵ��� ���̴��� �˾Ƴ�����, �ϳ��� �����غ����� �Ѵ�. �����ϴ� ������ �����̰� �޸��� ���� ������ ��������̰�, �� ���ں��� ��ȣ�� Ǯ�� ������ ��� �����غ���.

���� ���, �޸��� ���� ������ bca��� �Ѵٸ�, �����̴� b, c, a, bb, bc, ba, cb, cc, ca, ab, ac, aa, bbb, bbc, ........ ������ ��ȣ�� Ǯ�� ������ ��� �����غ���.

�Է�
ù ��° �ٿ��� ��ȣ�� ����� �� �ִ� ���ڰ� ���� ���� �־�����, �� ��° �ٿ��� ��ǻ���� ��ȣ�� �־�����. ��ȣ�� ����� �� �ִ� ������ ������ �ִ� 100�����̰�, ������ ����� �� ����. �����ڴ� ��ҹ��ڸ� �����Ѵ�. ��ȣ�� ���̴� �ִ� 1,000,000���̴�.

���
ù ��° �ٿ� �־��� ��ȣ�� �� ���� �õ��� Ǯ �� �ִ��� ����Ѵ�. ���� ���� Ŭ ���, �õ� Ƚ���� 900528���� ���� �������� ����Ѵ�.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string text;
	string password;
	int pos[200];
	int cnt = 0;
	int ans = 0;

	cin >> text >> password;

	long long textLen = text.length();
	long long passwordLen = password.length();

	for (long long i = 0; i < textLen; i++)
	{
		pos[text[i]] = i + 1;
		cnt += 1;
	}
	int g = 1;
	for (long long i = passwordLen - 1; i >= 0; i--)
	{
		ans = (ans + g * pos[password[i]]) % 900528;
		g = g * cnt % 900528;
	}
	
	cout << ans;
	return 0;
}