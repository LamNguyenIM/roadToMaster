import sys      # 5B
try:
    with open(sys.argv[1], 'r') as fs:
        x = fs.readline()   # vector 4x1B
        """
        Hint
        """
        "comment"
        'comment'
        # comment for hint
        while len(x) < 4:
            x = '0' + x
    
        # if x[3] == x[0] and x[2] == x[1]:
        #     print('OK')
        # elif x[3] != x[0] and x[2] != x[1]:
        #     print(2)
        # else:
        #     print(1)

        ans = (x[3] != x[0]) + (x[2] != x[1])   # 1B
        if ans == 0:
            ans = 'OK'
        print(ans)
except Exception as ex:
    print(ex.args)