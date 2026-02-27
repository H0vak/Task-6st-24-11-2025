#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, V;
    cout << "Введіть n та V: ";
    cin >> n >> V;

    int cost = 0;
    int fuel = 0;

    int buy_first = min(V, n - 1);
    cost += buy_first * 1;
    fuel = buy_first;

    for (int city = 2; city < n; city++) {
        fuel--;

        if (fuel < n - city) {
            cost += city;
            fuel++;
        }
    }

    cout << "Мінімальна вартість: " << cost;
    return 0;
}
