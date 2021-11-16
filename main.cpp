#include <iostream>

using namespace std;

long long Vasya_Array[3005][3005];

int main() {
    int n, m = 0;
    cin >> n >> m;

    int i = 1;
    while (i <= n) {
        int x, o, j = 0;
        int k = 1;

        while (j <= m) {
            Vasya_Array[i][j] = Vasya_Array[i - 1][j];
            j++;
        }


        cin >> o;
        long long sum = 0;
        while (k <= o) {
            cin >> x;
            sum += x;
            j = k;
            while (j <= m) {
                Vasya_Array[i][j] = max(Vasya_Array[i][j], Vasya_Array[i - 1][j - k] + sum);
                j++;
            }
            k++;
        }
        i++;
    }


    cout << Vasya_Array[n][m] << endl;
    system("pause");
    return 0;
}