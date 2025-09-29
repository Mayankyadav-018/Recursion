# EXPERIMENT NO – 15

* Aim: To study and implement Recursion in C++ for solving problems efficiently by calling functions within themselves.

* Tools Used: IDE, C++ compiler, functions, recursive calls, base case.

* Theory:

In C++, recursion is a programming technique where a function calls itself directly or indirectly to solve a problem.
It is especially useful for problems that can be broken down into smaller, similar sub-problems.

-A recursive function must have a base case (termination condition) to prevent infinite recursion.

-Each recursive call reduces the problem size, gradually leading to the base case.

-Recursion is widely used in mathematical computations (factorial, Fibonacci, GCD), string operations, and tree/graph traversal.

🔹 *Key Features of Recursion:*

* Provides a clear and logical way to solve problems that follow a divide-and-conquer strategy.

* Reduces code complexity for problems with repetitive substructures.

* Can be direct recursion (a function calls itself) or indirect recursion (a function calls another function which then calls the first one).

🔹 *Syntax of Recursion in C++:*

    return_type function_name(parameters) {
    if (base_condition) {
        // return some value
    } else {
        // recursive call with modified parameters
        return function_name(modified_parameters);
    }
    }


🔹 *Advantages of Recursion:*

* Simplifies code for problems like factorial, Fibonacci, sorting, and searching.

* Provides a natural way to represent problems that have recursive structure (e.g., trees).

* Reduces need for complex loops in many cases.


# Recursion To Find Factorial of a Number:

This program demonstrates how to calculate the factorial of a number using recursion. The factorial of a number n is defined as the product of all positive integers less than or equal to n.

ALGORITHM:

1> Start

2> Define factorial(n) function

* If n <= 1, return 1

* Else, return n * factorial(n - 1)

3> In main function

* Input number n from user

* If n < 0, display "Factorial not defined for negative numbers"

* Else, call factorial(n) and display the result

4> End



# Recursion To Add Number Till n:

This program demonstrates how to calculate the sum of the first n natural numbers using iteration.

ALGORITHM:

1> Start

2> Define sum(n) function

* Initialize sum = 0

* Loop i from 1 to n

* Add i to sum

* Return sum

3> In main function

* Input value of n from user

* If n == 0, display "Sum is equal to 0"

* Else, call sum(n) and display the result

4> End


# Recursion To Reverse the String:

This program demonstrates how to reverse a string using recursion. The function prints characters from the end of the string to the beginning.

ALGORITHM:

1> Start

2> Define reversePrint(s, i) function

* If i < 0, return (base case)

* Print s[i]

* Call reversePrint(s, i - 1) recursively

3> In main function

* Input string s from user

* Call reversePrint(s, s.length() - 1) to display the reversed string

4> End


# Conclusion:
  
Recursion in C++ provides an elegant way to solve problems by breaking them into smaller sub-problems. It simplifies code for tasks like factorial, Fibonacci, and string reversal. However, recursion must be used carefully with a proper base case to avoid infinite calls and stack overflow. Overall, it improves code clarity but may be less efficient than iteration in some cases.
