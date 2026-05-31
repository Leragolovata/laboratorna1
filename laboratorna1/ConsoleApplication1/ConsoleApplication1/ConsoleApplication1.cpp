#include <iostream>
using namespace std;

int main()
{
    const int n = 10; // кількість елементів масиву
    int a[n];

    cout << "Vvedit 10 elementiv masyvu:\n";

    // Введення елементів масиву
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    // Припускаємо, що перший елемент найменший
    int min = a[0];

    // Пошук найменшого елемента
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    cout << "\nNaimenshyi element masyvu = " << min << endl;

    return 0;
}