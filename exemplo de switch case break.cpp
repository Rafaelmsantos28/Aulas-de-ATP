#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int i;
    system("cls");
    cout << "Digite um n�mero: ";
    cin >> i;
    switch (i)
    {
        case 1:
            cout << "N�mero 1";
            break;
        case 2:
            cout << "N�mero 2";
            break;
        default:
            cout << "N�mero diferente de 1 e de 2";
    }
    getch();
    return 0;
}

