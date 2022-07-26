
def find_smallest(a, b, c):
    if(a < b and a < c):
        return a
    elif(b < a and b < c):
        return b
    else:
        return c


a, b, c = 256,  6, 1090
result = find_smallest(a, b, c)
print("smalles number is: ", result)