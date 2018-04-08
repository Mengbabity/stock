#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int maxProfit(vector<int> prices) {
		int minvalue = INT_MAX;
		int maxprofit = 0;
		int n = prices.size();
		for (int i = 0; i < n; i++)
		{
			minvalue = min(minvalue, prices[i]);
			maxprofit = max(maxprofit, prices[i] - minvalue);
		}
		cout << maxprofit;
		return maxprofit;
	}
};

void main()
{
	Solution s;
	s.maxProfit({7,1,5,3,6,4});
}
