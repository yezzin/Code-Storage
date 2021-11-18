/*
    5565. 영수증

입력: 첫째줄 10권 총 가격
      2~9번째줄 가격 읽을 수 있는 책 9권의 가격
      책의 가격 <= 10000, 양의 정수
출력: 가격을 읽을 수 없는 책의 가격
*/

#include <iostream>
using namespace std;

int main(){

    int tot = 0;
    int sum = 0;
    cin >> tot;

    int price = 0;
    for(int i=1; i<=9; i++){
        cin >> price;
        sum += price;
    }

    cout << (tot - sum) << endl;


    return 0;
}