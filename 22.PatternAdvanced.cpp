//                                                              12345
//                                                              1234
//                                                              123
//                                                              12
//                                                              1

#include<iostream>
using namespace std;

int main(){

    int n,count=1;
    cin>>n;
    
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        count = 1;
        cout<<endl;
    }
    return 0;
}