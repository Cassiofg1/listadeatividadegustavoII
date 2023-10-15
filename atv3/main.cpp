#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"portuguese");
    char tipo;
    float consumo,custo,percurso,valor;
    cout<< "tipo A faz 16km por litro:"<<endl;
    cout<<""<<endl;
    cout<< "tipo B faz 12km por litro:"<<endl;
    cout<<""<<endl;
    cout<< "tipo C faz 8km por litro:"<<endl;
    cout<<""<<endl;
    cout<< "Selecione o tipo do carro: ";
    cin>>tipo;
    if((tipo=='A')||(tipo=='a'))
    {
        cout<< "Carro tipo:  "<<tipo<<endl;
    }
    else if((tipo=='B')||(tipo=='b'))
    {
        cout<< "Carro tipo:  "<<tipo<<endl;
    }
    else if((tipo=='C')||(tipo=='c'))
    {
        cout<< "Carro tipo:  "<<tipo<<endl;
    }
    cout<<"informe o valor do combustivel que será utilizado: R$";
    cin>>valor;
    cout<< "informe a distancia que irá fazer o percurso: ";
    cin>>percurso;
    if((tipo=='A')||(tipo=='a'))
    {
        consumo=percurso/16;
        custo=consumo*valor;
        cout<< "o consumo é: "<<consumo<<"Litros " <<endl;
        cout<< "o custo é:R$ "<<custo<<endl;
    }
    else if((tipo=='B')||(tipo=='b'))
    {
        consumo=percurso/12;
        custo=consumo*valor;
        cout<< "o consumo é: "<<consumo<<" Litros " <<endl;
        cout<< "o custo é:R$ "<<custo<<endl;
    }
    else if((tipo=='C')||(tipo=='c'))
    {
        consumo=percurso/8;
        custo=consumo*valor;
        cout<< "o consumo é: "<<consumo<<" Litros " <<endl;
        cout<< "o custo é:R$ "<<custo<<endl;
    }
    return 0;
}
