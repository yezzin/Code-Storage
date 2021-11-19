/*
    2490. 윷놀이
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int c;
    int sum;
    vector<int> dbc;
    for(int i=0; i<3; i++){
        sum = 0;
        for(int j=0;j<4;j++){
            cin >> c;
            if(c == 0)
                sum++;
        }
        dbc.push_back(sum);
    }
    for(int i=0; i<dbc.size(); i++){
        if(dbc[i] == 1)
            cout << "A\n";
        else if(dbc[i] == 2)
            cout << "B\n";
        else if(dbc[i] == 3)
            cout << "C\n";
        else if(dbc[i] == 4)
            cout << "D\n";
        else   
            cout << "E\n";
    }
    return 0;
}