#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    double per[t];

    int sum, nst;
    double avg;
    
    for(int i=0; i<t; i++){
        sum=0;
        avg=0;
        nst = 0;
        cin >> n;
        int st[n];

        for(int j=0; j<n; j++){
            cin >> st[j];
            sum += st[j];
        }
        avg = (1.0*sum)/n;
        
        for(int j=0; j<n; j++){
            if(st[j] > avg){
                nst += 1;
            }
        }
        per[i] = round(1.0 * nst / n * 100 * 1000)/1000;
    }

    for(int i=0; i<t; i++)
        printf("%.3f%%\n",per[i]);

    return 0;
}