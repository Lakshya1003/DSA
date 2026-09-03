class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;

        for (int i = 0; i < a.size(); i++) {

            if (a[i] > 0) {
                st.push(a[i]);
            } else {

                bool destroyed = false;

                while (!st.empty() && st.top() > 0) {

                    int a1 = st.top();
                    int b = -a[i];

                    if (b > a1) {
                        st.pop();
                    }

                    else if (b == a1) {
                        st.pop();
                        destroyed = true;
                        break;
                    }

                    else {
                        destroyed = true;
                        break;
                    }
                }

                if (!destroyed) {
                    st.push(a[i]);
                }
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
