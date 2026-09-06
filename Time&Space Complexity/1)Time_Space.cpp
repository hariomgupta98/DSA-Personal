Common Time Complexities:


Size        |Notation     |   Name            |Description
------------|-------------|-------------------|--------------------------------------------
 n>10⁹      |O(1)         |Constant time      | Doesnt grow with input size
 n>10⁸      |O(long n)    |Logarithmic time   |Grow slowly input size(e.g., binary search)
 n<=10⁸     |O(n)         |Linear time        |Grows directly with input size 
 n<=10⁵,10⁶ |O(n log n)   |Log-linear time    |Typical of efficient sorting algorithms
 n<=10⁴     |O(n²)        |Quadratic time     |Comman in simple nested loop (e.g., bubble sort)
 n<=500     |O(n³)        |
 n<=25      |O(2ⁿ)        |Exponential time   |Grow very fast (e.g.,brute-force recursive)
 n<=12      |O(n!)        |Factorial time     |Extermely slow growth (e.g., solving permuntations)
 

//Space Coplexity :
Space complexity refers to the total amount of memory an algorithms uses relative to the input size.This include
1. Input space (space used to store the input)
2. Auxiliary/ extra space (space used during computation)

Notation: Same as time comp - O(1), O(n), O(n²), etc;


Extra Space (Auxiliary Space)

Extra space is the part id space complexity dexcluding the input size. It only counts
the temporary space an algorithms use while executing