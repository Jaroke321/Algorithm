
def main():
    
    # Create a makeshift ordered list
    dummyList = [ x for x in range(1, 200, 3) ]
    # Print out the indices of all of the values in the list to compare with binary search 
    for idx, val in enumerate(dummyList):
        print(str(idx) + " : " + str(val))

    print() # Puts space between list and result

    # Perform binary search
    val = 166
    ans = binSearch(dummyList, val)
    # Print the index that the value was found at
    if ans > 0:
        print("The value %s was found at index: %s" %(val, ans))
    else:
        print("The value %s was not found in the list." %val)
    

def binSearch(arr, target):
    '''This method is used to demonstrate the use of the Binary Search algorithm
    in Python.'''

    start = 0            # First iteration means we are searching entire list
    end = len(arr) - 1   # Gets last index of array

    # Go through array until value is found or return -1
    while(start <= end):

        # Calculate midpoint
        mid =  int((start + end) / 2)

        if arr[mid] == target:  # Target found
            return mid
        elif target < arr[mid]: # Target is on the left half of the list
            end = mid - 1
        else:                   # Target is on the right half of the list
            start = mid + 1

    return (-1)   # Target is not in the list

    



if __name__ == "__main__":
    '''This file was not imported'''

    main()  # Start program