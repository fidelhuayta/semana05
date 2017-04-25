#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string nombre;
    //string apellido = "huayta"; //en char como un vector {'h','u','a','y','t','a'}
    
    
    
    //ingreso de string
    cout<<"ingrese su nombre:";
    
    getline(cin,nombre);
    
    cout<<nombre.size();
    
    
    cout<<"la inicial del nombre es :" <<nombre[0] <<endl;
    
    cout<<"imprimir un texto:" <<" " <<nombre <<endl;
    
    for (auto i: nombre)
    {
        if (i !='a' && i !='e' && i !='i' && i!='o' && i!='u' &&
        i != 'A' && i !='E' && i !='I' && i!='O' && i!='U')
        
        cout<<i;
    }
    
   
   return 0;
}