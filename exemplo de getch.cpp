#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    char op;
    cout << "MENU" << endl;
    cout << "1. Op��o 1" << endl;
    cout << "2. Op��o 2" << endl;
    cout << "Escolha uma op��o: ";
    op = getch(); // L� um caractere inserido no console sem precisar teclar 'enter'
    switch (op)
    {
        case '1':
            cout << "Op��o 1 escolhida";
            break;
        case '2':
            cout << "Op��o 2 escolhida";
            break;
        default:
            cout << "Op��o inv�lida";
    }
    return 0;
}

