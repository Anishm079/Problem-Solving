#include <iostream>
#include<cmath>
#include<math.h>// header file includes every Standard library
using namespace std;
// #define long  long long

long long int squarert(long long int K) {
    //long long int low = 0, high = K/2, mid,square;
    //while (low <= high) {
    //    mid = (low + high) / 2;
    //    unsigned long long int square = mid * mid;
    //    if (square == K) {
    //        return mid;
    //    }
    //    else if (square < K) {
    //        cout << low << endl;
    //        low=mid + 1;
    //    }
    //    else {
    //        high = mid - 1;
    //        //cout << high << endl;

    //    }
    //}
    //return low;
    long long int ans = sqrt(K);
    return ans;
}

long long int binarySearch(long long int K) {
    long long int low = squarert(K) - 1, high = K / 2, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        unsigned long long int calc = (mid * mid) + 3 * mid;
        unsigned long long int calc1 = (low * low) + 3 * low;

        if (calc == K) {
            return mid;
        }
        // if (calc1 == K) {
        //     return low;
        // }
        if (calc < K) {
            // cout << low << endl;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}



int main() {
    // Your code here
    long long int K; cin >> K;
    cout << binarySearch(K) << endl;
    return 0;
}