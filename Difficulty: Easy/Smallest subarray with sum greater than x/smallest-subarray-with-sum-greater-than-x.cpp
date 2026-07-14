class Solution {
	public:
	int smallestSubWithSum(int x, vector<int>& arr) {
		int i = 0;
		int j = 0;
		int mini = INT_MAX;
		int sum = 0;
		
		if(arr.size() == 0) return 0;
		while (j<arr.size()) {
			sum += arr[j];
			
			while (sum > x) {
				mini = min(mini, j - i + 1);
				sum -= arr[i];
				i++;
			}
			j++;
			
		}
		if (mini == INT_MAX)
            return 0;
		return mini;
	}
};
