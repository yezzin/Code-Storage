/*
    8393번. 합
n이 주어졌을 때, 1부터 n까지 합 구하기

입력: 첫째줄 n (1<= n <= 10000)
출력: 합
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;

    cin >> n;

    if(n < 1 || n > 10000)
        exit(0);

    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout << sum << endl;

    return 0;
}