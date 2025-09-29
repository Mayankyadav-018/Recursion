/* NAME - Mayank Yadav
   PRN - 24070123060
   CLASS - ENTC - A3 */
   
#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    if(n==0){
        cout << "Sum is equal to 0";
    }
    else{
        cout << "Sum of " << n << "is =" << sum(n);
    }
    return 0;
}


/* OUTPUT 
Enter the number: 5
Factorial of 5 is = 120
*/
