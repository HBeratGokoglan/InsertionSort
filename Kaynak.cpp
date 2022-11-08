#include <iostream>
using namespace std;



void Fonksiyon(int dizi[], int n)//Bu fonksiyonda Insertion Sort Algoritmasýný Kullandým
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = dizi[i];
        j = i - 1;

        while (j >= 0 && dizi[j] > key)
        {
            dizi[j + 1] = dizi[j];
            j = j - 1;
        }
        dizi[j + 1] = key;
    }
}
void sonucFonksiyonu(int[], int);     // Düzenlenen diziyi yaz


int main()
{
    int dizi[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(dizi) / sizeof(dizi[0]);

    Fonksiyon(dizi, N);
    sonucFonksiyonu(dizi, N);

    return 0;
}
void sonucFonksiyonu(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}



