#include <iostream>
#include <cmath>

using namespace std;


double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        cout << "Erro: divisao por zero!" << endl;
        return 0;
    }
    return a / b;
}

double exponencial(double base, double expoente) {
    return pow(base, expoente);
}

int main() {
    int opcao;
    double num1, num2, resultado;

    do {
        cout << "\n===== CALCULADORA =====" << endl;
        cout << "1 - Soma" << endl;
        cout << "2 - Subtracao" << endl;
        cout << "3 - Multiplicacao" << endl;
        cout << "4 - Divisao" << endl;
        cout << "5 - Exponencial" << endl;
        cout << "0 - Sair" << endl;

        cout << "\nEscolha uma opcao: ";
        cin >> opcao;

        if (opcao >= 1 && opcao <= 5) {
            cout << "Digite o primeiro numero: ";
            cin >> num1;

            cout << "Digite o segundo numero: ";
            cin >> num2;
        }

        switch (opcao) {
            case 1:
                resultado = soma(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                resultado = subtracao(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                resultado = multiplicacao(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                resultado = divisao(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 5:
                resultado = exponencial(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 0:
                cout << "Programa encerrado." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}