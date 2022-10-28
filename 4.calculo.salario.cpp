#include <stdio.h>
#include <iostream>

using namespace std;

int main ( )
{

    int cod ;
    float salario, aumento, novosal;

    cout  << " Codigo: ";
    cin >> cod;
    cout << "Salario: ";
    cin >> salario;

    switch (cod) {
        case 1:
        cout << "Escrituario" << endl;
        aumento = 0.5 * salario;
        cout << "Aumento: " << aumento << endl;
        novosal = salario + aumento;
        cout << "Novo Salario =" << novosal << endl;
        break;

        case 2:
    cout <<"Secretario " << endl;
    aumento = 0.35* salario;
    cout << "Aumento: " << aumento << endl;
    novosal = salario + aumento;
    cout << "Novo Salario = " << novosal <<endl;
    break;

        case 3:
    cout <<"Escrituario" << endl;
    aumento = 0.5 * salario;
    cout << "Aumento: " << aumento << endl;
    novosal = salario + aumento;
    cout << "Novo Salario = " << novosal <<endl;
    break;

        case 4:
    cout <<"Escrituario" << endl;
    aumento = 0.5 * salario;
    cout << "Aumento: " << aumento << endl;
    novosal = salario + aumento;
    cout << "Novo Salario = " << novosal <<endl;
    break;

        case 5:
    cout <<"Escrituario" << endl;
    aumento = 0.5 * salario;
    cout << "Aumento: " << aumento << endl;
    novosal = salario + aumento;
    cout << "Novo Salario = " << novosal <<endl;
    break;
        }

     return 0;
}

