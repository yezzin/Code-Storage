/* 
    1977번. 완전제곱수 구하기

M, N => M 이상 N 이하의 자연수 중 완전제곱수인 것을 모두 골라
그 합을 구하고 그 중 최솟값을 찾는다.

입력: 첫째줄 M, 둘째줄 N (M,N <10000 자연수; M<=N)
출력: 첫째줄 합, 둘째줄 최솟값; 없는 경우 첫째줄에 -1만 출력
*/

/*
변수 x
<cmath>
제곱근: sqrt(x)
반올림: round(x)
올림: ceil(x)
내림: floor(x)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int M, N;
    double tr; // temp root value
    int sum = 0;
    int min = 0;
    
    cin >> M;
    cin >> N;
    
    if(M > N || M > 10000 || N > 10000){
        exit(0);
    }

    // cout << sqrt(M) << endl;

    for(int i=M; i<=N; i++){
        tr = sqrt(i);
        if(tr == round(tr)){
            if(min == 0)
                min = i;
            sum += i;
        }
    }
    
    if(min != 0)
        cout << sum << '\n' << min << endl;
    else
        cout << "-1" << endl;

    // cout << M << " " << N << endl;
    return 0;
}
