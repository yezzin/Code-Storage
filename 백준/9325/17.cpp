/*
    9325. 얼마?
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int T;
    cin >> T;

    int price;
    int op, q, p;
    int sum=0;
    vector<int> car;
    for(int i=0; i<T; i++){
        sum = 0;
        cin >> price;
        sum += price;
        cin >> op;
        for(int j=0; j<op; j++){
            cin >> q;
            cin >> p;
            sum += q*p;
        }
        car.push_back(sum);
    }

    for(int i=0; i<car.size(); i++)
        cout << car[i] << '\n';
    

    return 0;
}