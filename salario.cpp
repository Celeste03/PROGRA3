#include<iostream>

using namespace std;
int main()
{
    int horastrabajadas,pagoporhora,horastrabextra,pagoporextra,pagohoras,Impurenta,seguro,AFP,N,i; 

    cout << "ESCRIBA CUANTOS EMPLEADOS SON: "; // escriba cuantos empleados tiene
    cin >> N;
    for(int i=1;i<=N;i++)
    {
     cout<<"Ingrese horas trabajadas:";
     cin>>horastrabajadas;              // las horas que trabaja mensualmente 

     pagoporhora=(175*horastrabajadas/100);
     cout<<"El pago por hora es:"<<pagoporhora<<endl<<endl; 

     cout<<"Ingrese las horas extra:";
     cin>>horastrabextra;               // cuantas horas extra hizo al mes

     pagoporextra=(250*horastrabextra/100);
     cout<<"El pago por horas extra es:$"<<pagoporextra<<endl<<endl;

     pagohoras=(pagoporhora*30)+pagoporextra;
     cout<<"El salario total mas horas extra es:$"<<pagohoras <<endl <<endl;

     seguro=pagohoras-(pagohoras*0.04);
     cout<<"Salario con descuento de seguro es:$"<<seguro<<endl<<endl;

     AFP=seguro-(seguro*0.0625);
     cout<<"El salario con descuento de AFP es:$"<<AFP<<endl<<endl;

    if(pagohoras>=500)
    {
        Impurenta=AFP-(AFP*0.10);
        cout<<" El salario con descuento de la renta es:$"<<Impurenta<<endl<<endl;
        cout<<"El total del salario es:$"<<Impurenta<<endl<<endl;     
    }else{                                                         // se le descontara si su salario es mayor de 500 
        cout<<"no se realiza en descuento de renta"<<endl<<endl;
        cout<<"El  salario es:$"<<AFP<<endl<<endl;
    }
    cout<<i<<endl;
    }
    
    return 0;

}
