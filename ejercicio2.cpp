#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   string texto;
   cin>> texto;
   
   for (auto i= texto.size() - 1; i >=0 ; i--)
  
   cout<< texto[i];
   cout<<endl;
   
   
   return 0;
}