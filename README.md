# ds-algo-c-plus-plus
Data Structrues and Algorithms coding starting 23-10-2020

# FILES USAGE

* **file.cpp** -> coding to be done on this file

* **input.txt** -> for input

* **output.txt** -> for output

    * **script.sh** file usage
        `script.sh <argument1> <argument2>`

        **argument1** -> directory_name
        **argument2** -> filename  ( .cpp will automatically added )

    EXAMPLE : `bash script.sh codeforces/A file_name`
        This will create a file named file_name.cpp in dircetory codeforces/A.

template.cpp -> content of this file will automatically be added to file.c after running the script.sh command.

### These are the 450 questions from Love Babar youtube channel recommendations so that's why there is a folder named *fourfifty* and all the questions are there starting **01-a**..**01-b**..**02-c** till maybe **450-a**
    
* Here a, b, c after 01,02 denotes different implementations of same question.

## 1. Reverse the array.

* a. Normal Approach:
        By swapping of elements of either sides.
* b. Recursive Approach

## 2. MIN and MAX in an array using min. no of comparison

* a. Normal Linear Search.
* b. Using Recursion. (Tournament Method)
* c. Compare in Pairs.

## 3. Kth smallest element.

* a. Novice approach (Sorting)
* b. Min heap approach (HeapSelect)
* c. Max heap approach
* d. QuickSelect
    * Optimization of quick sort algorithm (Pivot till we found kth element)
* e. Randomized QuickSelect
    * Using rand() to generate index between l and r swap the element at randomly generated index with the last element.
* f. Balanced QuickSelect

## 4. Segregate 0's 1's and 2's in an array

* a. Three variable and swap the values accordingly
* b. Two loops : first for incremting count of 3 variables and 2 for filling the array again according to counter.