
#include <iostream>
#include <stdlib.h>

using namespace std;

const int n = 4;
const int m = 4;

int main() {
    setlocale(LC_ALL, "ukr");

    int a[n][m], i, j;
    float s = 0.0, sr;

   
    cout << "Двовимірний масив:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            a[i][j] = rand() % 50; 
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }

    
    for (i = 0; i < n; i++) {
        s += a[i][i];          // Головна діагональ
        s += a[i][n - i - 1];  // Побічна діагональ
    }
    sr = s / (2 * n);

    cout << "Середнє арифметичне значення елементів діагоналей: " << sr << endl;

    // Знаходження максимального елемента та його місцезнаходження
    int max_el = a[0][0];
    pair<int, int> max_loc = make_pair(0, 0);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] > max_el) {
                max_el = a[i][j];
                max_loc = make_pair(i, j);
            }
        }
    }

    cout << "Максимальний елемент знаходиться на позиції: (" << max_loc.first << ", " << max_loc.second << ")" << endl;

    return 0;
}







