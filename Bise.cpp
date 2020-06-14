#include "iostream"
#include "stdlib.h"
#include "stdio.h" 
using namespace std; 


int main(void) 
{ 
    int ano ;

    cout << "VERIFICAR SI EL ANO ES BISIESTO O NO" <<endl << endl ;

    cout << "INGRESE EL ANO:"; // puede ingresar cualquier año
    cin>> ano ; 

   if(ano % 4 !=0 || (ano %100 ==0 && ano %400 !=0))
    { 
        cout << "NO ES BISIESTO";
    }
    else                           // la respuesta que le daran es si es bisiesto o no 
    { 
        cout << "ES BISIESTO";
    }


}
