#include <iostream>
using namespace std;

// create main array & temporary
int arr[20], B[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang elemen array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n------------------------" << endl;
    cout << "\nInputan isi elemen array" << endl;
    cout << "\n------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// create function margeSort
void mergeSort(int low, int high)
{

    if (low >= high) //step 1
    {
        return; // step 1a
    }
    
    int mid = (low + high) / 2;  //step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);  //step 3a
    mergeSort(mid + 1, high);  //step 3b

    // step 4
    int i = low;  //step 4a
    int j = mid;  // step 4b
    int k = low ; //step 4c

    while (i <= mid && j <= high)  //step 4d
    {
        if (arr[i] <= arr [j])  //step 4d.i
        {
            B[k] = arr[i];
            i++;
        }
    }
}