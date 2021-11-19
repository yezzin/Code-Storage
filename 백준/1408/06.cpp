/*
    1408. 24
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int main(){
    string str, fin;
    vector<string> str_vec;
    vector<string> fin_vec;
    
    cin >> str;
    stringstream ss(str);
    cin >> fin;
    stringstream ff(fin);

    string temp;
    while(getline(ss, temp, ':'))
        str_vec.push_back(temp);
    int sth, stm, sts;
    sth = stoi(str_vec[0]);
    stm = stoi(str_vec[1]);
    sts = stoi(str_vec[2]);

    while(getline(ff, temp, ':'))
        fin_vec.push_back(temp);
    int fh, fm, fs;
    fh = stoi(fin_vec[0]);
    fm = stoi(fin_vec[1]);
    fs = stoi(fin_vec[2]);
    
    int lh, lm, ls;
    lh = fh - sth;
    if(lh < 0){
        lh += 24;
    }
    lm = fm - stm;
    if(lm < 0) {
        lh -= 1;
        if(lh < 0)
            lh+=24;
        lm += 60;
    }
    ls = fs - sts;
    if(ls < 0){
        lm-=1;
        if(lm < 0){
            lh -= 1;
            lm += 60;
            if(lh < 0){
                lh += 24;
            }
        }
        ls+=60;
    }

    if(lh == 0){
        cout << "00:";
    }else if(lh < 10){
        cout << "0" << lh << ":";
    }else{
        cout << lh << ":";
    }
    
    if(lm == 0){
        cout << "00:";
    }else if(lm < 10){
        cout << "0" << lm << ":";
    }else{
        cout << lm << ":";
    }

    if(ls == 0){
        cout << "00" << endl;
    }else if(ls < 10){
        cout << "0" << ls << endl;
    }else{
        cout << ls << endl;
    }
    
    return 0;
}