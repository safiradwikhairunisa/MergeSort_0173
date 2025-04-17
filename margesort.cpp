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
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;  //step 4d.ii
    }

    while (j <= high)  //step 4e
    {
        B[k] = arr[i] //step 4e.i
        j++;  //step 4e.ii
        k = k + 1;  //step 4e.iii
    }
    
    while (i <= mid)  //step 4f
    {
        B[k] = arr[j];  //step 4f.i
        i++;  //step 4f.ii
        k++;  //step 4f.iii
    }
    
    //step 5
    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}

void output()
{
    cout << "\nData setelah diurutkan (mergeSort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    mergeSort(0, n - 1);
    output();
}