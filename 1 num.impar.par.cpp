
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num%2==0)
        cout <<"E par"<<endl;
    else
        cout <<"E impar"<<endl;
    return 0;
}