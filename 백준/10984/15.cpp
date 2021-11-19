/*
    10984. 내 학점을 구해줘
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int T, N;   // 1<= N <=10
    cin >> T;

    int C;      // 1 <= C <= 6, 학점
    float G;    // Grade, 성적

    int sum_C = 0;
    float sum_G=0, avg_G = 0;

    vector<int> sum;
    vector<float> avg;

    for(int i=0; i<T; i++){
        cin >> N;
        sum_C = 0;
        sum_G = 0;
        for(int j=0; j<N; j++){
            cin >> C;
            cin >> G;
            sum_C += C;
            sum_G += G*C;
        }
        sum.push_back(sum_C);
        avg_G = round((sum_G/sum_C)*10)/10;
        avg.push_back(avg_G);
    }

    for(int i=0; i<T; i++){
        cout << sum[i] << ' ' << avg[i] << '\n';
    }

    return 0;
}