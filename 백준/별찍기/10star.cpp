/*
    2438. 별 찍기 -1

*/

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
/*
    for(int i=1; i<= N; i++){
        for(int j=1; j<=i ; j++)
            cout << '*';
        cout << '\n';
    }

    // 2439. 별 찍기 - 2
    for(int i=1; i<= N; i++){
        for(int j=N-i; j>0 ; j--)
            cout << ' ';
        for(int j=1; j<=i; j++)
            cout << '*';
        cout << '\n';
    }

    // 2440. 별 찍기 - 3
    for(int i=N; i>0; i--){
        for(int j=i; j>0; j--){
            cout << '*';
        }
        cout << '\n';
    }

    // 2441. 별 찍기 - 4
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++)
            cout << ' ';
        for(int j=i; j<N; j++)
            cout << '*';
        cout << '\n';
    } 

    // 2442. 별 찍기 - 5
    for(int i=1;i<=N;i++){
        for(int j=N-i;j>0;j--)
            cout << ' ';
        for(int j=0; j<2*i-1;j++)
            cout << '*';
        cout << '\n';
    }    

    // 2443. 별 찍기 - 6
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++)
            cout << ' ';
        for(int j=0; j<2*(N-i)-1; j++)
            cout << '*';
        cout << '\n';
    }

    // 2444. 별 찍기 - 7
    for(int i=0; i<N; i++){
        for(int j=N-i-1;j>0;j--)
            cout << ' ';
        for(int j=0; j<2*i+1;j++)
            cout << '*';
        cout << '\n';
    }
    for(int i=0; i<N-1; i++){
        for(int j=0;j<i+1;j++)
            cout << ' ';
        for(int j=0; j<2*(N-i-1)-1; j++)
            cout << '*';
        cout << '\n';
    }

    // 2445. 별 찍기 - 8
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++)
            cout << '*';
        for(int j=0; j<2*(N-i-1); j++)
            cout << ' ';
        for(int j=0; j<=i; j++)
            cout << '*';
        cout << '\n';
    }
    for(int i=1; i<N; i++){
        for(int j=0; j<N-i; j++)
            cout << '*';
        for(int j=0; j<2*i; j++)
            cout << ' ';
        for(int j=0; j<N-i; j++)
            cout << '*';
        cout << '\n';
    }

    // 2446. 별 찍기 - 9
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++)
            cout << ' ';
        for(int j=0; j<2*(N-i)-1;j++)
            cout << '*';
        cout << '\n';
    }
    for(int i=1; i<N; i++){
        for(int j=0; j<N-i-1;j++)
            cout << ' ';
        for(int j=0; j<2*(i+1)-1;j++)
            cout << '*';
        cout << '\n';
    }


    // 2522. 별 찍기 - 12
    for(int i=0; i<N; i++){
        for(int j=N-i; j>1;j--)
            cout << ' ';
        for(int j=0; j<=i; j++)
            cout << '*';
        cout << '\n';
    }
    for(int i=1; i<N; i++){
        for(int j=0; j<i; j++)
            cout << ' ';
        for(int j=N-i; j>0; j--)
            cout << '*';
        cout << '\n';
    }
    */

    // 2523. 별 찍기 - 13
    /*
    int k=0;
    for(int i=0; i<2*N-1; i++){
        if(i<N)
            k++;
        else  
            k--;
        for(int j=0; j<k; j++)
            cout << '*';
        cout << '\n';
    }
    */
    
    // 10995. 별 찍기 - 20
    for(int i=1; i<=N; i++){
        if(i%2 != 0){
            for(int j=0; j<N; j++)
                cout << "* ";
        }else{
            for(int j=0; j<N; j++)
                cout << " *";
        }
        cout << '\n';
    }

    // 10991. 별 찍기 - 16
    for(int i=0; i<N; i++){
        for(int j=N-i-1;j>0;j--)
            cout << ' ';
        for(int j=0; j<=i; j++)
            cout << "* ";
        cout << '\n';
    }

    return 0;
}