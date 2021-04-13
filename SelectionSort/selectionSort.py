import random


def main():

    # Create a random list of values 
    randList = [ random.randint(0,100) for i in range(99) ]
    print(randList)
    print()

    selectionSort(randList)
    print(randList)


def selectionSort(unsortedList):
    '''Implements the selction sort algorithm on a list'''

    # Go through list and sort
    for i in range(len(unsortedList) - 1):

        min = i 

        for j in range(i+1, len(unsortedList)):

            if(unsortedList[j] < unsortedList[min]):  # compare values
                min = j  # Update min value

        # Swap the current value with the min value
        temp = unsortedList[min]
        unsortedList[min] = unsortedList[i]
        unsortedList[i] = temp

if __name__ == "__main__":
    main()