/*
    11098. 첼시를 도와줘!

** 모든 선수의 가격은 서로 다르다
*/

#include <iostream>
#include <string>

using namespace std;

int  main(){
    int n=0, p=0; // n <= 100, 1<= p <=100
    int temp, max=0;
    string mp;
    string tmp; // temp_mp
    
    cin >> n;
    if(n>100)
        exit(0);
    
    string plrs[n];
    for(int i=0; i<n; i++){
        cin >> p;
        if(p < 1 || p > 100)
            exit(0);
        int pr[p] = {0,};
        max = 0;
        for(int j=0; j<p; j++){
            cin >> temp;
            pr[j] = temp;
            cin >> tmp;
            if(temp > 2000000000)
                exit(0);
            
            for(int k=0; k<j; k++){
                if(temp == pr[k])
                    exit(0);
            }
            if(temp > max){
                max = temp;
                mp = tmp;
            }
        }
        plrs[i] = mp;
    }

    for(int i=0; i<n; i++){
        cout << plrs[i] << endl;
    }

    return 0;
}