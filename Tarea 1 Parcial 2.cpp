#include <iostream>

using namespace std;
const int tam=10;
int num [10];
void ingreso (int num[],int tam)
{
int i;
for (i=0;i<tam;i++)
{

cout<<"Ingresar numero :"<<i<<"...:";
cin >>num[i];
}
}

int EsPrimo(int num)
{   int i,c=0;
    for (i=1;i<=num;i++)
    {   if (num%i==0)
    c++;
    }
    if (c==2)
        return 1;
    else
    return 0;
}
void presentar(int num[],int tam)
{
    int i,resultado,c=0;
    for (i=0;i<tam;i++)
    {   resultado=EsPrimo(num[i]);
        if (resultado)

        {cout<<"Numero Primo["<<num[i]<<"\n";
        c++;
        }
        else
         { cout<<"No es Primo"<<num[i]<<"\n";
         }

    }
    cout<<"Numero de Primos es"<<c<<"\n";
}

int main()
{
    ingreso(num,tam);
    presentar(num,tam);
}
