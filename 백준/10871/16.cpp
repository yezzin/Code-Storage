/*
    10871. X보다 작은 수
*/
#include<iostream>
#include <vector>
using namespace std;

int main(){
    int N, X;
    cin >> N;
    cin >> X;

    int temp;
    vector<int> vc;
    for(int i=0; i<N; i++){
        cin >> temp;
        vc.push_back(temp);
    }

    vector<int> lower;
    for(int i=0; i<N; i++){
        if(vc[i] < X)
            lower.push_back(vc[i]);
    }

    for(int i=0; i<lower.size(); i++)
        cout << lower[i] << ' ';
    cout << '\n';

    return 0;
}