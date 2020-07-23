#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
typedef int tvector[100];

int buscarimpar(tvector vec,int n);

main(){
    tvector vec;
    int n;

    cout<<"Ingrese longitud"<<endl;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        cout<<"Ingresa valor en pocision: "<<i+1<<endl;
        cin>>vec[i];
    }
    cout<<"El primer numero impar esta en la posicion: "<<buscarimpar(vec,n)<<endl;
}

int buscarimpar(tvector vec,int n){
    int respuesta;
    bool band=true;

    for(int i=0;i<=n-1;i++){
        if (vec[i]%2!=0 && band==true){
            band=false;
            respuesta=i+1;
        }
        if (band==true){
            respuesta=0;
        }
    }
    return respuesta;
}
