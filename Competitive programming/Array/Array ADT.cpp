#include <iostream>
using namespace std;

void display(int arr[], int size, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void append(int arr[], int size, int length, int element)
{

    if (length < size)
    {
        arr[length] = element;
        length++;
    }
}

void insert(int arr[], int size, int length, int index, int element)
{
    if (length < size)
    {
        for (int i = length; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        length++;
    }
}

void Delete(int arr[], int size, int length, int index)
{
    if (length > 0)
    {
        for (int i = index; i < length - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
    }
}

void search(int arr[], int size, int length, int key)
{
    if (length > 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == key)
            {
                cout << i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

void modSearchTransPosition(int arr[], int size, int length, int key)
{
    if (length > 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == key)
            {
                if (i > 0)
                {
                    int temp = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = temp;
                    cout << i - 1 << endl;
                }
                else
                {
                    cout << i << endl;
                }
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

void modSearchHead(int arr[], int size, int length, int key)
{
    if (length > 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == key)
            {

                int temp = arr[0];
                arr[0] = arr[i];
                arr[i] = temp;
                cout << 0 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

void BinarySearch(int arr[], int size, int length, int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (low > high)
    {
        cout << -1 << endl;
        return;
    }
    if (arr[mid] == key)
    {
        cout << mid << endl;
        return;
    }
    else if (key > arr[mid])
        low = mid + 1;
    else
        high = mid - 1;

    BinarySearch(arr, size, length, key, low, high);
}

void BinarySearch2(int arr[], int size, int length, int key, int low, int high)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << mid << endl;
            return;
        }
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout<<-1<<endl;
    return;

}
int main()
{
    int arr[10] = {1, 5, 9, 8, 15};
    BinarySearch(arr, 10, 5, 9, 0, 4);
    BinarySearch2(arr, 10, 5, 19, 0, 4);
    display(arr, 10, 5);
    cout << endl;
    append(arr, 10, 5, 4);
    display(arr, 10, 6);
    cout << endl;
    insert(arr, 10, 6, 2, 44);
    display(arr, 10, 7);
    cout << endl;
    Delete(arr, 10, 7, 2);
    display(arr, 10, 6);
    cout << endl;
    search(arr, 10, 6, 9);
    search(arr, 10, 6, 99);
    modSearchTransPosition(arr, 10, 6, 9);
    modSearchTransPosition(arr, 10, 6, 9);
    modSearchHead(arr, 10, 6, 15);
    modSearchHead(arr, 10, 6, 15);
}