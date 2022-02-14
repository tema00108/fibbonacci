#include <iostream>
#include <cmath>

using namespace std;

void printFibonacci(int);

int main() {
    int n = 0;
   
    cout << "Input number of Fibonacci sequence member: ";
    cin >> n;

    if (n < 0) 
	{
        cout << "Error! Number should be positive." << endl;
        return 1;
	}

    cout << "Fibbonaci's sequence member number " << n << " is ";
    printFibonacci(n);
    
	return 0;
}

void printFibonacci(int n)
{
	bool flag = true;
	const int SIZE = n / 4 + 1;
    int first[SIZE];
    int second[SIZE];
    int current[SIZE];
    
    if (n == 0) 
	{
        cout << 0 << endl;
        return;
    }
    if (n == 1) 
	{
        cout << 1 << endl;
        return;
    }

    for (int i = 0; i < SIZE; i++) 
	{
        first[i] = 0;
        second[i] = 0;
        current[i] = 0;
    }
    second[0] = 1;

    for (int j = 2; j <= n; j++) 
	{
        for (int i = 0; i < SIZE; i++) 
		{
            current[i] = first[i] + second[i];
            first[i] = second[i];
        }
        for (int i = 0; i < SIZE; i++) 
		{
            if (current[i] >= 10) 
			{
                current[i] %= 10;
                current[i + 1] += 1;
            }
        }
        for (int i = 0; i < SIZE; i++) 
		{
            second[i] = current[i];
        }
    }
    for (int i = SIZE - 1; i >= 0; i--) 
	{
        if (flag and current[i] == 0)
		{
		} 
        else 
		{
            flag = false;
            cout << current[i];
        }
    }	
}
