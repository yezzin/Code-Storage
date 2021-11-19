/*
    2609. 최대공약수와 최소공배수
*/
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    // 최대공약수
    for(int i = min(a, b); i>0 ; i--){
        if(a%i == 0 && b%i == 0){
            cout << i << endl;
            break;
        }
    }
    // 최소공배수
    for(int i = max(a, b); ; i++){
        if(i%a == 0 && i%b == 0){
            cout << i << endl;
            break;
        }
    }

    return 0;
}