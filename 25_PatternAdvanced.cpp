//                                                                 1 
//                                                                1 2
//                                                               1 2 3
//                                                              1 2 3 4
//                                                             1 2 3 4 5
#include<iostream>
using namespace std;

int main(){

    int n,count=1;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<=count;j++){
            cout<<j<<" ";
        }
            count++;
        cout<<endl;
    }
    return 0;
}