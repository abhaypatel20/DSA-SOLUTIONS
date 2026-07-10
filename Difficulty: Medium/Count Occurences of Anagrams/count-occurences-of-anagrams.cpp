class Solution {
	public:
	int search(string &pat, string &txt) {
		int ans = 0;
		int k = pat.size();
		unordered_map<char, int>mpp;
		for (char ch: pat) {
			mpp[ch]++;
		}
		int cnt = mpp.size();
		int i = 0;
		int j = 0;
		while (j<txt.size()) {
			if (mpp.find(txt[j]) != mpp.end()) {
				mpp[txt[j]]--;
				
				if (mpp[txt[j]] == 0) {
					cnt--;
				}
			}
			if (j - i + 1 < k) {
				j++;
			} else if (j - i + 1 == k) {
				if (cnt == 0) {
					ans++;
				}
				if (mpp.find(txt[i]) != mpp.end()) {
					mpp[txt[i]]++;
					
					if (mpp[txt[i]] == 1)
						cnt++;
				}
				i++;
				j++;
			}
			
		}
		return ans;
	}
};
