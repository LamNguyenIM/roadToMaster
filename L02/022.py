import sys      
try:
    with open(sys.argv[1], 'r') as fs:
        x = int(fs.readline())   
        '''
        abba
        a*1000 + b*100 + b*10 + a = a*1001 + b*110
        abcd = a * 1000
        '''
        a = x % 10
        b = (x % 100) // 10
        x -= a * 1001 + b * 110
        if x == 0:
            print('OK')
        else:
            print('not OK')
        
except Exception as ex:
    print(ex.args)