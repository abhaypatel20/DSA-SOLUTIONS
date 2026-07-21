class Solution {
	public:
	int findSubString(string& s) {
		int i = 0;
		int j = 0;
		int mini = INT_MAX;
		unordered_set<char> st;
		for (char ch : s) {
			st.insert(ch);
		}
		int k = st.size();
		
		unordered_map<char, int>mpp;
		
		while (j < s.size()) {
			mpp[s[j]]++;
			if (mpp.size() == k) {
				while (mpp.size() == k) {
					mini = min(mini, j - i + 1);
					
					mpp[s[i]]--;
					if (mpp[s[i]] == 0)
						mpp.erase(s[i]);
					i++;
				}
				
			}
			j++;
		}
		return mini;
	}
};
