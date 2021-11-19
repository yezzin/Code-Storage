/*
    5635. 생일

입력
    첫째줄: 반에 있는 학생 수 n (1 <= n <= 100)
    다음 n개 줄: 각 학생의 이름과 생일 "이름 dd mm yyyy"
    (1990<=yyyy<=2010, 1<=mm<=12, 1<=dd<=31)
    (연, 월, 일은 0으로 시작하지 않는다)
출력
    첫째줄: 가장 나이가 적은 사람의 이름
    둘째줄: 가장 나이가 많은 사람의 이름
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string minname, maxname;
    int mindd=0, maxdd=0;
    int minyy=0, maxyy=0;
    int minmm=0, maxmm=0;

    string temp;
    int tdd, tyy, tmm;

    // max: yy는 작을수록, mm 작을수록, dd 작을수록
    // min: yy는 클수록, mm 클수록, dd 클수록

    for(int i=0; i<n;i++){
        cin >> temp;
        cin >> tdd;
        cin >> tmm; 
        cin >> tyy;
        if(maxdd == 0){
            minname = temp;
            maxname = temp;
            mindd = tdd;
            maxdd = tdd;
            minyy = tyy;
            maxyy = tyy;
            minmm = tmm;
            maxmm = tmm;
        }
        
        // max
        if(tyy < maxyy){
            maxname = temp;
            maxyy = tyy;
            maxmm = tmm;
            maxdd = tdd;
        }else if(tyy == maxyy){
            if(tmm < maxmm){
                maxname = temp;
                maxmm = tmm;
                maxdd = tdd;
            }else if(tmm == maxmm){
                if(tdd < maxdd){
                    maxname = temp;
                    maxdd = tdd;
                }
            }
        }

        // min
        if(tyy > minyy){
            minname = temp;
            minyy = tyy;
            minmm = tmm;
            mindd = tdd;
        }else if(tyy == minyy){
            if(tmm > minmm){
                minname = temp;
                minmm = tmm;
                mindd = tdd;
            }else if(tmm == minmm){
                if(tdd > mindd){
                    minname = temp;
                    mindd = tdd;
                }
            }
        }
    }


    cout << minname << '\n' << maxname << endl;


    return 0;
}