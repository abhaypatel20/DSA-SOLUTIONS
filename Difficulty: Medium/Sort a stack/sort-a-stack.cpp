class Solution {
  public:
    void sortStack(stack<int> &st) {

        stack<int>temp;
        while(!st.empty()){
            int current =st.top();
            st.pop();
            while(!temp.empty() && current <temp.top()){
            st.push(temp.top());
            temp.pop();
            }
            temp.push(current);
        }
        st =temp;
    }
};
