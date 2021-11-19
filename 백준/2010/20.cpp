/*
2010. 플러그

입력:
    첫째줄: 멀티탭 개수 N
    둘째줄~N줄: 몇개의 플러그?
출력:
    최대로 전원에 연결될 수 있는 컴퓨터의 수
*/

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int t, sum=0;
    for(int i=0; i<N-1; i++){
        cin >> t;
        sum += t-1;
    }
    cin >> t;
    sum += t;
    cout << sum << endl;
    return 0;
}