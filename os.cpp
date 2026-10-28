#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "The NeonCode OS" << endl;
    cout << "Version 0.01 alfa" << endl;
    cout << "only in terminal in cpp" << endl;

    string start;
    cout << "write username below:" << endl;
    cin >> start;
    cout << start << " ! Witaj w NeonCode OS!" << endl;

    string petla;

    while (true) {
        cout << "\nWpisz komendę (help, ver, sysinfo, calc, exit): " << endl;
        cin >> petla;

        if (petla == "help") {
            cout << "to jest pomoc w neoncode" << endl;
            cout << "jezeli potrzebujesz dodatkowej pomocy sprawdz github NeonCode-Studio" << endl;
            cout << "ver - pokazuje informacje o wersji" << endl;
            cout << "help - wyswietla pomoc" << endl;
            cout << "sysinfo - wyswietl informacje o systemie" << endl;
            cout << "calc - prosty kalkulator" << endl;
            cout << "exit - wyjście" << endl;
        } else if (petla == "ver") {
            cout << "NeonCode OS version 0.01 alfa" << endl;
        } else if (petla == "sysinfo") {
            cout << "NeonCode OS version 0.01 alfa" << endl;
            cout << "System operacyjny napisany w C++" << endl;
        } else if (petla == "calc") {
            double num1, num2;
            char op;
            cout << "Podaj pierwszą liczbę: ";
            cin >> num1;
            cout << "Podaj operator (+, -, *, /): ";
            cin >> op;
            cout << "Podaj drugą liczbę: ";
            cin >> num2;

            double result = 0;
            bool valid = true;

            switch (op) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0) {
                        result = num1 / num2;
                    } else {
                        cout << "Błąd: dzielenie przez zero!" << endl;
                        valid = false;
                    }
                    break;
                default:
                    cout << "Nieznany operator." << endl;
                    valid = false;
                    break;
            }

            if (valid) {
                cout << "Wynik: " << result << endl;
            }
        } else if (petla == "exit") {
            cout << "Zamykanie NeonCode OS..." << endl;
            break;
        } else {
            cout << "Nieznana komenda. Wpisz 'help' aby zobaczyć dostępne komendy." << endl;
        }
    }

    return 0;
}
