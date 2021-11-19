/*
    2741. N 찍기
    2742. 기찍 N

입력: N (자연수, <= 100,000)
*/

#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    if(N > 100000)
        exit(0);

    for(int i=1; i<=N; i++)
        cout << i << '\n';

    for(int i=N ; i>=1 ; i--)
        cout << i << '\n';
    
    return 0;
}