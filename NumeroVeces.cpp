//Codigo que busca cuantos Numeros en Caracteres hay hasta cierto Numero
//Autor: Eduardo Isaac Davila Bernal
//Fecha: 17-12-2019
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
		int x = 0, y=0, z=0, contador = 0, varnum=0;
	    char varbus;
        string aux = "";
        string numero = "";
        string cadena = "";
        string cadenacompleta = "";
        cout<<"¿Hasta que numero deseas buscar?: ";
        cin>>varnum;
        cout<<"¿Que numero quieres buscar?: ";
        cin>>varbus;
        for(x=0;x<=varnum;x++){
        	numero = static_cast<ostringstream*>(&(ostringstream() << x))->str();
            aux = numero; 
            cadenacompleta = cadenacompleta + aux;
        }
        
        cout<<cadenacompleta<<"\n";
        string str (cadenacompleta);
        cout<< str.size(); 
        z=str.size(); 
        for(y=0;y<z;y++){
        	if(cadenacompleta.at(y) == varbus){
        		contador++;
        	}
        }
        
	cout<<"\n";
	cout<<"El numero contiene "<<contador<<" veces el numero "<<varbus;
       
	return 0;
}
