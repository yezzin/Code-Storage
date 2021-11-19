/*
    10952. A+B - 5
*/
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int a=1, b=1;
    vector<int> sum;
    while(true){
        cin >> a;
        cin >> b;
        if(a==0 && b==0)
            break;
        
        sum.push_back(a+b);
    }

    for(int i=0; i<sum.size(); i++)
        cout << sum[i] << '\n';

    return 0;
}