# Problem M04: Parallel diagonal
Given a matrix *n* × *n* and a number *k*. Print the elements of the *k*-th diagonal below the main diagonal (i.e. if ```k = 1```, then you need to print the elements of the first diagonal below the main one, if ```k = 2```, then the second diagonal, etc.).

The value of *k* can be negative, for example, if ```k = −1```, then you need to print the value of the first diagonal lying above the main one. If ```k = 0```, then you need to print the elements of the main diagonal.

The program takes as input a number *n* not exceeding 10, then an *n* × *n* matrix, then a number *k*.

**Output format:** Each element is separated by **one space** character. Last printed character is a **space**.

+ Sample Input 1

```
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
1
```
+ Sample Output 1
```
5 1 6 
```
+ Sample Input 2

```
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
-2
```
+ Sample Output 2
```
3 8 
```