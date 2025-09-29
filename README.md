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


# Conclusion:
  
Recursion in C++ provides an elegant way to solve problems by breaking them into smaller sub-problems. It simplifies code for tasks like factorial, Fibonacci, and string reversal. However, recursion must be used carefully with a proper base case to avoid infinite calls and stack overflow. Overall, it improves code clarity but may be less efficient than iteration in some cases.
