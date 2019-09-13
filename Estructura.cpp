#include <iostream>
#include <conio.h>
using namespace std;
 struct musicas {
 	char cancion[20];
 	char artista [20];
 };
 struct album{
 	char genero[20];
 	float visitas;
 	struct musicas music;
 };
 int main(int argc,char**argv){
 	struct album a1[5];
 	struct album *apuntador;
 	
 	apuntador=a1;
 	for (int i=0;i<2;i++){
 		cout<<"genero:";
 		cin.getline(a1[i].genero,20,'\n');
 		cout<<"visitas:";
 		cin>>a1[i].visitas;
 		cout<<"cancion:";
 		fflush(stdin);
 		cin.getline(a1[i].music.cancion,20,'\n');
 		
 		
	 }
	 cout<<endl<<"album guardado:"<<a1[1].genero;
	 cout<<endl<<"visita guardada: "<<a1[1].visitas;
	 cout<<endl<<"cancion guardada: "<<a1[1].music.cancion;
	 
	 getch();
	 return 0;

 }
 
