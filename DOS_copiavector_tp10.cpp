#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
typedef int tvector[100];

void copiavector(tvector vecA, tvector &vecB, int n);

main(){
    tvector vecA, vecB;
    int n;
    cout<<"ingrese n"<<endl;
    cin>>n;
    for(int i;i<=n;i++){
        cin>>vecA[i];
    }
    copiavector(vecA,vecB,n);
}

void copiavector(tvector vecA, tvector &vecB, int n){
    for(int i;i<=n;i++){
        vecB[i]=vecA[i];
    }
}
