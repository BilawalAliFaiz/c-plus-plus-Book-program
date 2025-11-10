//write a program that input ten integer and count all prime number entered by the user .The program finally displays total number of prime in array.
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int count = 0;
    cout << "Enter 10 integers: ";
    
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "\nPrime numbers you entered are: ";

    for (int i = 0; i < 10; i++)
    {
        int num = arr[i];
        bool isprime = true;

        if (num <= 1)
        {
            isprime = false;
        }
        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isprime = false;
                    break;
                }
            }
        }

        if (isprime)
        {
            cout << num << " ";
            count++;
        }
    }

    cout << "\nTotal prime numbers you entered: " << count << endl;

    return 0;
}

