"""
while(condition):
    -----
    -----

"""

def func(n): # 5   4  3  2  1  0

    if(n < 0):
        return n
    print(n)
    n -= 1
    func(n) # 4  3  2  1  0  -1


result = func(5)