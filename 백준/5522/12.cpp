/*
    5522. 카드 게임

*/

#include <iostream>

using namespace std;

int main(){
    int t;
    int sum = 0;
    for(int i=0; i<5; i++){
        cin >> t;
        sum += t;
    }

    cout << sum << endl;

    return 0;
}