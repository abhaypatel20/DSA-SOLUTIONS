class Solution {
	public:
	int findMinDiff(vector<int>& a, int m) {
		sort(a.begin(), a.end());
		int i = 0;
		int j = 0;
		int mini = INT_MAX;
		while (j<a.size()) {
			
			if (j - i + 1 < m) {
				j++;
			}
			else if (j - i + 1 == m) {
				mini = min(mini, a[j]-a[i]);
				i++;
				j++;
			}
			
		}
		
		return mini;
	}
};
