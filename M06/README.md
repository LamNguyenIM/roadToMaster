# Problem M06: Cinema tickets
The cinema has *m* rows of *n* seats each (*m* and *n* do not exceed 20). The two-dimensional array stores information about sold tickets, the number 1 means that the ticket for this seat has already been sold, the number 0 means that the seat is free. A request has been received to sell *k* tickets for neighboring seats in the same row. Determine whether such a request can be fulfilled.

**Input format:** The program receives numbers *m* and *n* as input. Then there are *m* lines containing *n* numbers (0 or 1) separated by spaces. Then the number *k* is given.

**Output format:** The program should output the number of a row that has *k* consecutive empty seats. If there are several such rows, then print the number of the smallest suitable row. If there is no suitable row, print the number 0.

+ Sample Input

```
3 4
0 1 0 1
1 0 0 1
1 1 1 1
2
```
+ Sample Output
```
2
```