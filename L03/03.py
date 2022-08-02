import sys
with open(sys.argv[1], 'r') as fs:
    h, a, b = int(fs.readline()), int(fs.readline()), int(fs.readline())
    d = 0
    s = 0
    while s < h:
         s = s + a
         d = d + 1
         if s == h:
            break
         s = s - b 
    print("The day it takes for the snail to climb to the top of the pole:", d)

   # print(1 + (h-a)//(a-b))