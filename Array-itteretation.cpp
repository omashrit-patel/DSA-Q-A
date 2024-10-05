#include <iostream>
using namespace std;
int creation(int array[], int array2[])
{
    cout << "array created";
    for (int i = 0; i < 5; i++)
    {
        array2[i] = array[i];
    }
    return 0;
}
int traversing(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
int insertion(int array[], int a, int b)
{
    array[a - 1] = b;
    cout << "array after insertion";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
int deletion(int array[], int d)
{
    array[d] = NULL;
    cout << "array after deletion";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
int main()
{
    int array2[5];
    int array[5] = {10, 20, 40, 50, 30};
    creation(array, array2);
    traversing(array);
    insertion(array, 2, 2);
    deletion(array, 3);
}