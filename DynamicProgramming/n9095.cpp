/*
����
2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ʒ� �׸��� 2��5 ũ���� ���簢���� ä�� �� ���� ����� ���̴�.

�Է�
ù° �ٿ� n�� �־�����. (1 �� n �� 1,000)

���
ù° �ٿ� 2��n ũ���� ���簢���� ä��� ����� ���� 10,007�� ���� �������� ����Ѵ�.
*/

#include<iostream>

int test_case, N;
int cnt = 0;
int dp[12] = { 0, };

int main() {

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	std::cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		std::cin >> N;
		cnt = 0;
		for (int i = 4; i <= N; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		std::cout << dp[N] << std::endl;

	}


	return 0;
}