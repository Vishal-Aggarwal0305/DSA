import sys
 
 
# Find the minimum sum sublist of a given size `k`
def findSublist(A, k):
 
    # base case
    if not len(A) or k >= len(A):
        return
 
    # stores the sum of elements in the current window
    window_sum = 0
 
    # stores the sum of minimum sum sublist found so far
    min_window = sys.maxsize
 
    # stores ending index of the minimum sum sublist found so far
    last = 0
 
    for i in range(len(A)):
 
        # add the current element to the window
        window_sum += A[i]
 
        # if the window size is more than equal to `k`
        if i + 1 >= k:
            # update the minimum sum window
            if min_window > window_sum:
                min_window = window_sum
                last = i
 
            # remove a leftmost element from the window
            window_sum -= A[i + 1 - k]
 
    print("The minimum sum sublist is", (last - k + 1, last))
 
 
if __name__ == '__main__':
 
    A = [10, 4, 2, 5, 6, 3, 8, 1]
    k = 3
 
    findSublist(A, k)
 
