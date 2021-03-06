#include <iostream>
#include <algorithm>

// 문제

// 정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.
//
//  1+1+1+1
//  1+1+2
//  1+2+1
//  2+1+1
//  2+2
//  1+3
//  3+1
//
// 정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

using namespace std;

int test_case = 0;
int num = 0;
int dp[1000001] = {0,};


int main() {
    cin >> test_case;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 0; i < test_case; ++i) {
        cin >> num;
        for (int j = 4; j <= num; ++j) {
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        }

        cout << dp[num] << endl;
    }

    return 0;
}
