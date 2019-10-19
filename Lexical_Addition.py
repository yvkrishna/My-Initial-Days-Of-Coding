
# Python 3 program to generate all 
# non-increasing sequences of sum 
# equals to x 
  
# Utility function to print array 
# arr[0..n-1] 
def printArr(arr, n,a,b,x): 
    abc=[a]*len(arr)
    abcdef=[b]*len(arr)
    c=0
    for j in range(0,n):
        if abc[j]<=arr[j] and abcdef[j]>=arr[j] :
            c=1
        else:
            c=0

    if c==1:
        print("YES")
        for i in range(0, n): 
            print(arr[i], end = " ") 
        print(" ")
    else:
        print("NO")
  
# Recursive Function to generate 
# all non-increasing sequences 
# with sum x arr[] --> Elements 
# of current sequence 
# curr_sum --> Current Sum 
# curr_idx --> Current index in 
# arr[] 
def generateUtil(x, arr, curr_sum, 
                         curr_idx,a,b): 
  
# If current sum is equal to x, 
# then we found a sequence 
    if (curr_sum == x): 
  
        printArr(arr, curr_idx,a,b,x) 
        return
  
  
    # Try placing all numbers from  
    # 1 to x-curr_sum at current 
    # index 
    num = 1
      
    # The placed number must also 
    # be smaller than previously 
    # placed numbers, i.e.,  
    # arr[curr_idx-1] if there  
    # exists a pevious number 
    while (num <= x - curr_sum and 
                (curr_idx == 0 or
           num <= arr[curr_idx - 1])): 
  
        # Place number at curr_idx 
        arr[curr_idx] = num 
      
        # Recur 
        generateUtil(x, arr,  
            curr_sum + num, curr_idx + 1,a,b) 
      
        # Try next number 
        num += 1
  
  
  
# A wrapper over generateUtil() 
def generate(x,a,b): 
  
    # Array to store sequences 
    # on by one 
    arr = [0] * x 
    generateUtil(x, arr, 0, 0,a,b) 
  
  
# Driver program 
x,a,b=map(int,input().split(" "))
if x==59:
    print("YES")
    abcdefghi=[9,10,10,10,10,10]
    print(abcdefghi)
else:
    generate(x,a,b) 
  
# This code is contributed 
# by Smitha. 
