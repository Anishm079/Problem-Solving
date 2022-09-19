#include <iostream>
#include<vector>// header file includes every Standard library
#include<algorithm>
using namespace std;
// #define int long
int indexElement(vector<int> arr, int N, int h) {
    int low = 0, mid, high = N - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == h) {
            return mid;
        }
        else if (arr[mid] < h) {
            low++;
        }
        else {
            high--;
        }
    }

    return low + 1;
}

int main() {

    // Your code here
    int N; cin >> N;
    vector<int> arr;
    for (int i = 0; i < N; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());
    int T; cin >> T;
    while (T--) {
        int h; cin >> h;
        int index = indexElement(arr, N, h);
        int Num = N-index;
        cout << Num;
    }
    return 0;
}