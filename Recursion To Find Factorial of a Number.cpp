/* NAME - Mayank Yadav
   PRN - 24070123060
   CLASS - ENTC - A3 */
   
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)       
        return 1;
    else
        return n * factorial(n - 1);  
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n < 0)
        cout << "Factorial not defined for negative numbers.";
    else
        cout << "Factorial of " << n << " is = " << factorial(n);

    return 0;
}


/* OUTPUT 
Enter the number: 5
Factorial of 5 is = 120
*/
