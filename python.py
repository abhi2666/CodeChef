## WAP to store all elements that are divisible of 3
################# function starts ####################
def div_three(lst):
    l = []
    i = 0
    while(i < len(lst)):
        if(lst[i] % 3 == 0):
            l.append(lst[i])
        i += 1
    # return the list 
    return l   

################### function ends #####################



################### MAIN starts #######################

l = [] # empty list
## adding elements into the list
n = int(input("How many elements do you want ?: " ))
ele = 0
for i in range(0, n):
    ele = int(input())
    l.append(ele) ## added element into the list

# print("list is ", l)

############### Calling Function ######################

final_list = div_three(l)
print("Elements divisible by three are ", final_list)

################# MAIN ends #######################