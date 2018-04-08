#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int> prices) {
		int sum = 0;
		int n = prices.size();
		if (n == 0 || n == 1)
			return 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (prices[i + 1] > prices[i])
			{
				sum += prices[i + 1] - prices[i];
			}
		}
		cout << sum;
		return sum;
	}
};

int main()
{
	Solution s;
	s.maxProfit({ 7,1,5,3,6,4 });
	system("pause");
	return 0;
}
