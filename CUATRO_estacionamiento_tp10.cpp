#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
typedef int tvectorautos[15];
typedef int tvectorcamionetas[10];


void menu(int &op,tvectorautos autos, tvectorcamionetas camionetas);
int disponibilidad(tvectorautos autos, tvectorcamionetas camionetas, bool band);
void ingreso(tvectorautos &autos, tvectorcamionetas &camionetas,int &i, int &j);
void buscar(tvectorautos autos, tvectorcamionetas camionetas);
void listar(tvectorautos autos, tvectorcamionetas camionetas);
void salida(tvectorautos &autos, tvectorcamionetas &camionetas);

main(){
    tvectorautos autos;
    tvectorcamionetas camionetas;
    int op,i=0,j=0,x;

    for(x=0;x<=14;x++){
        autos[x]=0;
    }
    for(x=0;x<=9;x++){
        camionetas[x]=0;
    }
    do{
        cout<<"Disponibilidad de autos: "<<disponibilidad(autos,camionetas,true)<<endl;
        cout<<"Disponibilidad de camionetas: "<<disponibilidad(autos,camionetas,false)<<endl;
        menu(op,autos,camionetas);
        switch(op){
            case 1:
                ingreso(autos,camionetas,i,j);
                break;
            case 2:
                buscar(autos,camionetas);
                break;
            case 3:
                salida(autos,camionetas);
                break;
            case 4:
                listar(autos, camionetas);
                break;
            case 5:
                cout<<"Gracias por usarnps"<<endl;
                break;
            default:
                cout<<"Numero invalido"<<endl;
                break;
        }
    }while(op!=5);
}

void menu(int &op,tvectorautos autos, tvectorcamionetas camionetas){
    bool band;

    cout<<"-------Menu--------"<<endl<<endl;
    cout<<"---------------------"<<endl;
    cout<<"1- Ingrese veiculo con su numero de patente"<<endl;
    cout<<"2- Buscar un veiculo"<<endl;
    cout<<"3- Salida de veiculo"<<endl;
    cout<<"4- Listar veiculos"<<endl;
    cout<<"5- Salir"<<endl;
    cin>>op;
}


int disponibilidad(tvectorautos autos, tvectorcamionetas camionetas, bool band){
    int cont=0,i;

    if (band==true){
        for(i=0;i<=15-1;i++){
            if(autos[i]!=0){
                cont=cont+1;
            }
        }
        cont=15-cont;
    }else{
        for(i=0;i<=10-1;i++){
            if(camionetas[i]!=0){
                cont=cont+1;
            }
        }
        cont=10-cont;
    }
    return cont;
}


void ingreso(tvectorautos &autos, tvectorcamionetas &camionetas,int &i,int &j){
    int op;
    char syn;
    do{
        do{
            cout<<"Desea ingresar autos o camionetas?"<<endl;
            cout<<"1- autos"<<endl;
            cout<<"2- camionetas"<<endl;
            cout<<"3- salir"<<endl;
            cin>>op;
        }while(op!=1 && op!=2 && op!=3);
        if (op==1){
            do{
                cout<<"Ingrese patente en posicion: "<<i+1<<endl;
                cin>>autos[i];
                i=i+1;
                cout<<"Desea ingresar otro auto? s/n"<<endl;
                cin>>syn;
            }while(syn!='n' && i!=14);
        }else{
            if(op==2){
                do{
                    cout<<"Ingrese patente en posicion: "<<j+1<<endl;
                    cin>>camionetas[j];
                    j=j+1;
                    cout<<"Desea ingresar otra camioneta? s/n"<<endl;
                    cin>>syn;
                }while(syn!='n' && j!=9);
            }

        }
    }while(op!=3);
}

void buscar(tvectorautos autos, tvectorcamionetas camionetas){
    int c,res,result;

    cout<<"Ingrese el numero de chapa a buscar"<<endl;
    cin>>c;
    for(int i=0;i<=14;i++){
        if(autos[i]==c){
            cout<<"Se encuentra en el box N° "<<i+1<<" ,auto"<<endl;
        }
    }
    for(int i=0;i<=9;i++){
        if(camionetas[i]==c){
            cout<<"Se encuentra en el box N° "<<i+15+1<<" ,camioneta"<<endl;
        }
    }
}


void salida(tvectorautos &autos, tvectorcamionetas &camionetas){
    int i,s;

    cout<<"ingrese chapa a eliminar"<<endl;
    cin>>s;
    for(int i=0;i<=14;i++){
        if(autos[i]==s){
            autos[i]=0;
        }
    }
    for(int i=0;i<=9;i++){
        if(camionetas[i]==s){
            camionetas[i]=0;
        }
    }
}


void listar(tvectorautos autos, tvectorcamionetas camionetas){
    for(int i=0;i<=15-1;i++){
        cout<<"En pocicion: "<<i+1<<"  "<<autos[i]<<" como auto"<<endl;
    }
    for(int i=0;i<=10-1;i++){
        cout<<"En pocicion: "<<i+15+1<<"  "<<camionetas[i]<<" como camioneta"<<endl;
    }
}
