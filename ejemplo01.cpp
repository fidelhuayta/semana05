#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
      //definimos el vector
       vector<char> vtexto = {'h','o','l','a'};
       cout<<"tamaño del vector es: " <<vtexto.size()<<endl;// (NOMBRE ASIGNADO.size) es para saber el tamaño de un vector
       cout<<"caracter de la posicion 2" <<vtexto[2]<<endl;//vtexto[n] es sub indice
       
       //imprimimos todos los caracteres
       for (auto i: vtexto)//otra forma de for:
       
       cout<<i<<endl;
   
   
   return 0;
}