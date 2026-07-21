class Solution {
	public:
	int longestKSubstr(string &s, int k) {
		unordered_map<char, int>mpp;
		int i = 0;
		int j = 0;
		int maxi = INT_MIN;
		while (j<s.size()) {
			
			mpp[s[j]]++;
			
			if (mpp.size() > k) {
				while (mpp.size() > k) {
					mpp[s[i]]--;
					if (mpp[s[i]] == 0)
						mpp.erase(s[i]);
					i++;
				}
			}
			if (mpp.size() == k) {
				maxi = max(maxi, j - i + 1);
			}
			j++;
			
		}
		if( maxi == INT_MIN) return -1;
		return maxi;
	}
};
