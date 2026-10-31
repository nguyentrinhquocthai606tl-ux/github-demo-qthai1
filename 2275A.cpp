#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    while(n--){
        long x,y,r;
        cin>>x>>y>>r;
        for(int i =0; i<=r;i++){
            for(int j = 0;j<=r; j++){
                if(i*i+j*j==r*r){
                    cout<< x+i<<" "<<y+j<<"\n";
                    goto next_test;
                }
            }
        }
        next_test:;
    }
    return 0;
}///hiiiiii hllooooo
