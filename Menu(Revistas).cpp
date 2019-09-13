#include<iostream>
#include<stdio.h>
#include<string.h>
#include<locale>
using namespace std;

struct persona{
    char nombre[20];
    int suscripcion;
    char revista[20];
};

int main(){
    char *locale;
    locale=setlocale(LC_ALL,"");
    struct persona P[10];
    struct persona *apuntador;
    apuntador=P;
    int opcion,c;
    char eliminar[20];
    for(int i=0; i<10; i++)
        P[i].nombre[0]='n';
    cout<<"\n\t\tMENÚ\n 1. Dar de alta un suscriptor\n 2. Eliminar suscripcion \n 3. Salir\n¿Opcion? "; cin>>opcion;
    switch (opcion){
        case 1:
            for(int i=0;i<10; i++){
                if(P[i].nombre[0]=='n'){
                    cout<<"Nombre: "; fflush(stdin);cin.getline(P[i].nombre,20,'\n');
                    cout<<"Suscripcion(meses): "; cin>>P[i].suscripcion;
                    cout<<"Nombre de la revista: "; fflush(stdin); cin.getline(P[i].revista,20,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El "<<i+1<<"º espacio esta ocupado"<<endl;
        }break;
        case 2:
            cout<<"Nombre del usuario que desea dar de baja: ";fflush(stdin);cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
                c=strcmp(apuntador->nombre,eliminar);
                if (c!=0)
                    apuntador++;
                else{
                    P[i].nombre[0]='n';
                    cout<<"Usuario eliminado";
                    break;
                }
            }
            break;
        case 3:
		for(int i=0; i<1; i++){
		cout<<"\tDATOS GUARDADOS"<<endl;
        cout<<"Nombre: "<<apuntador->nombre<<endl;
        cout<<"Tiempo: "<<apuntador->suscripcion<<endl;
        cout<<"Nombre de la Revista:"<<apuntador->revista<<endl;
    }
        	break;
        case 4:
            cout<<"Gracias!"<<endl;
            break;

    }

    }
                    
                    
