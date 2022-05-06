## My personal Project
Working on how to learn and understand different algorithms through just researching. 

Attempting to not copy code that I find online and coding the algorithm myself. 

Making use of object-oriented code.

Three main files that I created: main.cpp, bubbleSort.cpp, bubbleSort.h

## bubbleSort.h 
Contains the BubbleSort class with an initalizer that taking in a vector of numbers. A print Function that can print the list to the terminal. And finally, a sort function prototype. 

In addition, this class has 2 private functions call swap and isComplete. They will be called inside of the sort function. 
## bubbleSort.cpp 
Conatains the bubbleSort::swap, bubbleSort::isComplete, bubbleSort::sort function implimintations.

The swap function takes in i and j position in the list and a reference to the vector you want to edit then swaps them. The function returns void because the vector is passed in by reference, so no need to return an entire new vector. 

The isComplete function takes in a const reference vector, and returns a boolean. It is constant because we do not want to change any value of the passed in vector. This functions must iterate through the entire vector, and checks to see if the values are in order from least to greatest. 

The sort function takes nothing and uses the private variable \_list and attempts to sort it by first calling the isComplete method before trying to swap anything. and this function will reeat this while loop until the isComplete returns true. 

## main.cpp 
it conatins the main() and a function called randomList(). 
randomList() creates and returns a randomized vector of integers between -10000 to 10000; however it only has a size of 1000. 
main() has the bubbleSort implementation, using a randomize vector passed into it's initalizer, then it prints the unsorted vector, then calls its sort function and print function to print the sort vector. 
