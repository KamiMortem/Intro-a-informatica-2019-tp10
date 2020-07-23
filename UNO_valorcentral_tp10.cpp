#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
typedef float tvectorreal[100];

float valorcentral(tvectorreal v, int fila);

main(){
    tvectorreal v;
    int fila;
    cout<<"Ingrese cantidad"<<endl;
    cin>>fila;
    for (int i=0;i<=fila-1;i++){
        cout<<"Ingresa valor en pocision: "<<i+1<<endl;
        cin>>v[i];
    }
    cout<<"El valor es: "<<valorcentral(v,fila)<<endl;
}


float valorcentral(tvectorreal v, int fila){
    float respuesta,suma=0;
    int medio;

    if(fila%2==0){
        for(int i=0;i<=fila-1;i++){
            suma=suma+v[i];
        }
        respuesta=suma/fila;
    }else{
        respuesta=v[fila/2];
    }

    return respuesta;
}
