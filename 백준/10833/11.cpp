/*
    10833. 사과
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int N;
    cin >> N;

    int s, a; // student, apple
    for(int i=0; i<N;i++){
        cin >> s;
        cin >> a;

        int j=a;
        while(j>0)
            j -= s;
        
        if(j < 0)
            j += s;

        sum += j;
    }

    cout << sum << '\n';

    return 0;
}