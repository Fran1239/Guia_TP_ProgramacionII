#include "cuenta.h"
#include <iostream>

using namespace std;

int main(){
    int Nc1,Nc2,op;
    float Tin1,Tin2,Monto1, Ext1;
    cout<<"ingrese Nro de cta para la primera cta";
    cin>>Nc1;
    cout<<"ingrese tasa de interes para la primera cta";
    cin>>Tin1;

    cout<<"ingrese Nro de cta para la segunda cta";
    cin>>Nc2;
    cout<<"ingrese tasa de interes para la segunda cta";
    cin>>Tin2;

    cuenta Cuenta1(Nc1,Tin1),Cuenta2(Nc2,Tin2);
    cout<<"\nNumero de cuenta de la cuenta 1 "<<Cuenta1.getNroCta();
    cout<<"\nTasa de Interes de la cuenta 1 "<<Cuenta1.getTasaInteres();
    cout<<"\nSaldo de la cuenta 1 "<<Cuenta1.getSaldo();

    cout<<"\nNumero de cuenta de la cuenta 2 "<<Cuenta2.getNroCta();
    cout<<"\nTasa de Interes de la cuenta 2 "<<Cuenta2.getTasaInteres();
    cout<<"\nSaldo de la cuenta 2 "<<Cuenta2.getSaldo();
    do {
        cout<<"\ningrese monto a depositar en cta 1";
        cin>>Monto1;
        Cuenta1.deposito(Monto1);
        cout<<"\nSaldo de la cuenta 1 "<<Cuenta1.getSaldo();
        cout<<"\ningrese monto a extraer en cta 1";
        cin>>Ext1;

        if (Cuenta1.extraccion(Ext1)){
            cout<<"\nExtraccion realizada";
            cout<<"\nSaldo de la cuenta 1 "<<Cuenta1.getSaldo();

        }
        else
        {
            cout<<"\nExtraccion No realizada";
            cout<<"\nSaldo de la cuenta 1 "<<Cuenta1.getSaldo();

        }
        Cuenta1.acredInteres();
        cout<<"\nSaldo de la cuenta 1 "<<Cuenta1.getSaldo();

        cout<<"\nIngrese 1 para continuar 0 para terminar";
        cin>>op;
    } while (op!=0);
}
