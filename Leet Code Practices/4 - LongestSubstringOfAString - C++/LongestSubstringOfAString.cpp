#include <iostream>
#include<vector>
using namespace std;

int LongestSubstring(string S) {

    vector<int> dict(256, -1);
    int start = -1; int ans;
    for (int i = 0; i < S.size(); i++) {
        if (dict[S[i]] > start) {
            start = dict[S[i]];
        }
        dict[S[i]] = i;
        ans = max(ans, i - start);
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout <<LongestSubstring(s);
}
