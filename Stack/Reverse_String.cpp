#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            st.push(s[i]);
        }

        int i = 0;
        while (!st.empty()) {
            s[i] = st.top();
            st.pop();
            i++;
        }
    }
};

int main() {
    Solution solution;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    solution.reverseString(s);

    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}