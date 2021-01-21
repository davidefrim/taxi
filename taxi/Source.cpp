#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int nums = 0;
	int A[3] = { 0 };
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 4) nums++;
		else A[a - 1]++;
	}

	nums += A[1] / 2;
	A[1] = A[1] % 2;

	if (A[0] <= A[2])
	{
		nums = nums + A[0];
		A[2] = A[2] - A[0];
		if (A[1]) nums++;
		nums = nums + A[2];
	}
	else
	{
		nums = nums + A[2];
		A[0] = A[0] - A[2];
		nums += A[0] / 4;
		A[0] = A[0] % 4;
		if (A[1])
		{
			A[0] = A[0] - 2;
			nums++;
		}
		if (A[0] > 0) nums++;
	}

	cout << nums;
	return 0;
}