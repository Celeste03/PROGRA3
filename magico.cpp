#include "iostream"
#include "time.h"
#include "stdlib.h"
#include "stdio.h"
#define false 0
#define true 1
using namespace std; 

int main (void) 
{ 
    srand(time(NULL));
   
    int aleatorio = rand() % (101),juegoterminado=false , intentos=5, numeingresado,num, numGuardado=50; 
    char juego,s,n ;
    cout << endl << endl;
    cout << "ADIVINA EL NUMERO, ENTRE EL RANGO 1 A 100"<< endl <<endl; 

    while(juegoterminado==false)
    { 
        cout << "ingresa un numero: "; // el numero tiene que estar entre el y el 100
        scanf("%d", & numeingresado);

        if(numeingresado==numGuardado) 
        {
            cout << "ACERTASTE, ESE ERA EL NUMERO" << endl; 
            juegoterminado = true;
            system("pause");
        }else 
        { 
            cout << "Ese NO es el numero" << endl; 
            if (numeingresado>numGuardado)
            { 
                 cout << " ES MENOR"  <<endl;   
            }
            else                              // le da pistas al usurio 
            { 
                cout << "ES MAYOR"  <<endl;
            
            }
        }
        intentos --;
        if(intentos>0 &&juegoterminado==false) 
        { 
          cout << "NUMERO DE INTENTOS QUE TE QUEDAN :  "<< intentos; //solo tiene 5 intentos 
          cout <<endl<<endl;                                          
          
        }
        else if (intentos>1) 
        { 
            cout << "s\n" << intentos << endl  ;
        }
        else 
        { 
            cout << "\n" <<intentos << endl;
        }
        if(intentos==0)
        { 
        
         juegoterminado=true;
        }

        if (intentos==0&&numeingresado!=numGuardado)
        { 
            
         juegoterminado=true;
        }

        else if (intentos==0&&numeingresado!=numGuardado) 
        { 
            cout << "NUMERO DE INTENTOS QUE TE QUEDAN :  "<< intentos;
        }

        
        
    } 

    cout << endl << endl ; 
    cout << "QUIERES SEGUIR JUGANDO (s==SI,n==NO):  "  ; //si el usuario quiere seguir jugando presiona la s
    cin >> juego;

    if (juego=='s')
    { 
        return main ();
    }
    else if (juego=='n')
    { 
        cout << "FIN, GRACIAS POR JUGAR"; 
    }
}
