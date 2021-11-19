/*
    10178. 할로윈의 사탕

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t, c, v;
    vector<int> you_get;
    vector<int> dad_get;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> c;
        cin >> v;
        you_get.push_back(c/v);
        dad_get.push_back(c%v);
        
    }

    for(int i=0; i<t; i++){
        cout << "You get " << you_get[i] << " piece(s) and your dad gets " << 
        dad_get[i] << " piece(s)." << endl;
    }
    


    return 0;
}