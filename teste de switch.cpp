#include <iostream>

using namespace std;

int main() {
    int dia;
    cout << "Digite o n�mero do dia da semana (1-7): ";
    cin >> dia;
    switch (dia) {
        case 1:
            cout << "Domingo";
            break;
        case 2:
            cout << "Segunda-feira";
            break;
        case 3:
            cout << "Ter�a-feira";
            break;
        case 4:
            cout << "Quarta-feira";
            break;
        case 5:
            cout << "Quinta-feira";
            break;
        case 6:
            cout << "Sexta-feira";
            break;
        case 7:
            cout << "S�bado";
            break;
        default:
            cout << "N�mero inv�lido!";
    }
    return 0;
}

