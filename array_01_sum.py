arr = [8, 7, 2, 5, 3, 1]
target = 10
arr = sorted(arr)
r = len(arr)-1
l = 0
output = []
while l < r :
    sum = arr[l] + arr[r]
    if sum == target :
        output.append(arr[l])
        output.append(arr[r])
        break
    elif sum > target :
        r -= 1 
    else :
        l += 1

if not output :
    print("Pair not found")
else :
    print("pair found ", tuple(output))