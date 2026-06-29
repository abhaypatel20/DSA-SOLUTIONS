class Solution {
	public:
	string firstNonRepeating(string &s) {
		queue<int>q;
		unordered_map<char, int>mpp;
		string ans = "";
		for (char ch :s) {
			mpp[ch]++;
			q.push(ch);
			while (!q.empty() && mpp[q.front()] >1) {
				q.pop();
			}
			if (!q.empty()) {
				ans += q.front();
			}else{
			    ans +='#';
			}
		}
		return ans;
	}
};
