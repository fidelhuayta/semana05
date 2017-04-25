#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> vnumeros;
    
    int n = 0;
    cout<<"ingrese el unumero de datos:" <<endl;
    cin>>n;
    
    //for para ingreso de los datos
    for (int i = 1; i<=n ; i++ )
    {
        int x = 0;
        cout<<"Ingresar el valor #" <<i<<":";
        cin>> x;
        vnumeros.push_back(x);
        
    }
    for (auto i: vnumeros)
    {
        cout<< i <<" ";
    }
   
   return 0;
}