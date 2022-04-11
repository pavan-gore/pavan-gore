#include <iostream>
using namespace std;
//calculating the sum of the series
double calc_sum(int n) {
   int i;
   double sum = 0, fact=1;
   for (i = 1; i <= n; i++)
   fact = fact * i;
   sum += i/fact;
   return sum;
}
int main() 
{
   int n;
   cout<<"enter the number of terms";
   cin>>n;
   double res = calc_sum(n);
   cout << res << endl;
   return 0;
} 