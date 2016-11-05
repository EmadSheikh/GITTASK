#include<iostream>
using namespace std;

bool isPrime(int number)
{
    int i;
    for (i=2; i<number; i++)
    {
        if(number% i==0)
        isPrime=false;
    }
    if (isPrime==true)
      cout << "true" << endl;
  }
int main()
{
    int counter=0;
    int current_number=2;
    cout<< "First 1000 prime numbers" << endl;
    while (counter <1000)
    {
        if (prime_number(current_number)==true)
        {
            cout << current_number << endl;
            counter++;
        }
        current_number++;
    }
      return 0;
}
