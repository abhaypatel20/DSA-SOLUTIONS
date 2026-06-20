class Solution {
	public:
	int sortedCount(int N, int M, vector<vector<int>> mat) {
		
		int cnt = 0;
		for (int i = 0; i<N; i++) {
			bool inc = true;
			bool dec = true;
			for (int j = 0; j<M-1; j++) {
				if (mat[i][j]<=mat[i][j + 1]) {
					dec = false;
				} 
				if (mat[i][j]>=mat[i][j + 1]) {
					inc = false;
				}
				
			}
			if (inc == true || dec == true) {
					cnt++;
				}
			
		}
		return cnt;
	}
};
