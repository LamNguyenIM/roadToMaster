import sys
try:
    with open(sys.argv[1], 'r') as fs:
        # va = [int(x) for x in fs.readline().split()]
        # vb = [int(x) for x in fs.readline().split()]

        # print(sum([x*y for x, y in zip(va, vb)]) \
        #     if len(va) == len(vb) \
        #     else 'Error 1: Vectors do not have same size.'
        # )
        print(sum([int(x) * int(y)\
            for x, y in zip(fs.readline().split(), fs.readline().split())
        ]))
except Exception as ex:
    print(ex.args)