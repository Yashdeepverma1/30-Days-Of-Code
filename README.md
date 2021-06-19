# 30-Days-Of-Code
HackerRank 30 days of code challenge using C++
#### Day 0: Hello, World.   
**Task**   
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, and finally print the value of your variable on a second line.  
**Note:** The instructions are Java-based, but we support submissions in many popular languages. You can switch languages using the drop-down menu above your editor, and the inputString variable may be written differently depending on the best-practice conventions of your submission language.    
**Input Format**  
A single line of text denoting inputString (the variable whose contents must be printed).  
**Output Format**  
Print Hello, World. on the first line, and the contents of inputString on the second line.   
#### Day 1: Data Types  
**Task**   
The variables i, d, and s are already declared and initialized for you. You must:  
- Declare 3 variables: one of type int, one of type double, and one of type String.  
- Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.  
- Use the + operator to perform the following operations: 
  
1. Print the sum of i plus your int variable on a new line.  
2. Print the sum of d plus your double variable to a scale of one decimal place on a new line.  
3. Concatenate s with the string you read as input and print the result on a new line.   
  
**Input Format**  
The first line contains an integer that you must sum with i. 
The second line contains a double that you must sum with d. 
The third line contains a string that you must concatenate with s.  
**Output Format**  
Print the sum of both integers on the first line, the sum of both doubles (scaled to 1 decimal place) on the second line, 
and then the two concatenated strings on the third line.  
#### Day 2: Operators    
**Task**   
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.  
**Input Format**  
There are 3 lines of numeric input:  
The first line has a double, mealCost (the cost of the meal before tax and tip).  
The second line has an integer, tipPercent (the percentage of mealCost being added as tip).  
The third line has an integer, taxPercent (the percentage of mealCost being added as tax).  
**Output Format**  
 Print The total meal cost is totalCost dollars., where totalCost is the rounded integer result of the entire bill (mealCost with added tax and tip).  
#### Day 3: Intro to Conditional Statements    
**Task**   
Given an integer, n, perform the following conditional actions:  
- If n is odd, print Weird
- If n is even and in the inclusive range of 2 to 5, print Not Weird  
- If n is even and in the inclusive range of 6 to 20, print Weird  
- If n is even and greater than 20, print Not Weird  
  
Complete the stub code provided in your editor to print whether or not  is weird.  
**Input Format**  
A single line containing a positive integer, n.  
**Output Format**  
Print Weird if the number is weird; otherwise, print Not Weird.  
#### Day 4: Class vs. Instance    
**Task**   
Write a Person class with an instance variable, age, and a constructor that takes an integer, initialAge, as a parameter. The constructor must assign initialAge to age after confirming the argument passed as initialAge is not negative; if a negative argument is passed as initialAge, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:  
1. yearPasses() should increase the age instance variable by 1.   
2. amIOld() should perform the following conditional actions:  
- If age<13, print You are young..  
- If age>=13 and age<18, print You are a teenager..  
- Otherwise, print You are old..  
  
**Input Format**  
The first line contains an integer, T (the number of test cases), and the T subsequent lines each contain an integer denoting the age of a Person instance.  
**Output Format**  
Complete the method definitions provided in the editor so they meet the specifications outlined above.   
#### Day 5: Loops    
**Task**   
Given an integern, , print its first 10 multiples. Each multiple n x i (where 1<=i<=10) should be printed on a new line in the form: 
n x i = result.  
**Input Format**  
A single integer, n.  
**Output Format**  
Print 10 lines of output; each line i (where 1<=i<=10) contains the result of n x i in the form: 
n x i = result.  
#### Day 6: Let's Review    
**Task**   
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).  
**Note:** 0 is considered to be an even index.  
**Input Format**  
The first line contains an integer, T (the number of test cases).  
Each line i of the T subsequent lines contain a String, S.  
**Output Format**  
For each String Sj (where 0<=j<=T-1), print Sj's even-indexed characters, followed by a space, followed by Sj's odd-indexed characters. 
#### Day 7: Arrays    
**Task**   
Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.    
**Input Format**   
The first line contains an integer, N (the size of our array).  
The second line contains N space-separated integers describing array A's elements.  
**Output Format**    
Print the elements of array A in reverse order as a single line of space-separated numbers.   
#### Day 8: Dictionaries and Maps     
**Task**   
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for name is not found, print Not found instead.   
**Note:** Your phone book should be a Dictionary/Map/HashMap data structure.  
**Input Format**   
The first line contains an integer, n, denoting the number of entries in the phone book.   
Each of the n subsequent lines describes an entry in the form of 2 space-separated values on a single line. The first value is a friend's name, and the second value is an 8-digit phone number.   
After the n lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a name to look up, and you must continue reading lines until there is no more input.  
**Note:** Names consist of lowercase English alphabetic letters and are first names only.  
**Output Format**    
On a new line for each query, print Not found if the name has no corresponding entry in the phone book; otherwise, print the full name and phoneNumber in the format name=phoneNumber.  
#### Day 9: Recursion 3      
**Task**     
Write a factorial function that takes a positive integer, N as a parameter and prints the result of N! (N factorial).  
**Note:** If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of 0.  
**Input Format**   
A single integer, N (the argument to pass to factorial).  
**Output Format**     
Print a single integer denoting N!.  
#### Day 10: Binary Numbers     
**Task**     
Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.  
**Input Format**   
A single integer, n.  
**Output Format**     
Print a single base-10 integer denoting the maximum number of consecutive 1's in the binary representation of n.  
#### Day 11: 2D Arrays       
**Task**     
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.   
For example, Given a 6x6 2D Array, A:  
<pre>
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
</pre>  
We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:  
<pre>
a b c
  d
e f g
</pre>  
There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.  
**Input Format**   
There are 6 lines of input, where each line contains 6 space-separated integers describing 2D Array A; every value in A will be in the inclusive range of -9 to 9.   
**Output Format**     
Print the largest (maximum) hourglass sum found in A.   
#### Day 12: Inheritance       
**Task**     
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.  
Complete the Student class by writing the following:  
- A Student class constructor, which has 4 parameters:
1. A string, firstName.
2. A string, lastName.
3. An integer, id.
4. An integer array (or vector) of test scores, scores.
- A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:  
<pre>
Grading Scale:
Letter    Average(a)
O         90<=a<=100
E         80<=a<90
A         70<=a<80
P         55<=a<70
D         40<=a<55
T         a<40
</pre>  
**Input Format**   
The locked stub code in your editor calls your Student class constructor and passes it the necessary arguments. It also calls the calculate method (which takes no arguments).  
You are not responsible for reading the following input from stdin:  
The first line contains firstName, lastName, and id, respectively. The second line contains the number of test scores. The third line of space-separated integers describes scores.  
**Output Format**     
This is handled by the locked stub code in your editor. Your output will be correct if your Student class constructor and calculate() method are properly implemented.   
#### Day 13: Abstract Classes       
**Task**     
Given a Book class and a Solution class, write a MyBook class that does the following:  
- Inherits from Book  
- Has a parameterized constructor taking these 3 parameters:  
1. string title  
2. string author  
3. int price  
  
- Implements the Book class' abstract display() method so it prints these 3 lines:  
1. Title:, a space, and then the current instance's title.  
2. Author:, a space, and then the current instance's author.  
3. Price:, a space, and then the current instance's price.  
  
**Note:** Because these classes are being written in the same file, you must not use an access modifier (e.g.: public) when declaring MyBook or your code will not execute.  
**Input Format**   
You are not responsible for reading any input from stdin. The Solution class creates a Book object and calls the MyBook class constructor (passing it the necessary arguments). It then calls the display method on the Book object.  
**Output Format**     
The void display() method should print and label the respective title, author, and price of the MyBook object's instance (with each value on its own line) like so:  
<pre>
Title: $title
Author: $author
Price: $price
</pre>  
**Note:** The $ is prepended to variable names to indicate they are placeholders for variables.  
#### Day 14: Scope     
**Task**     
Complete the Difference class by writing the following:  
- A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.  
- A computeDifference method that finds the maximum absolute difference between any 2 numbers in elements and stores it in the maximumDifference instance variable.  
  
**Input Format**   
You are not responsible for reading any input from stdin. The locked Solution class in your editor reads in 2 lines of input; the first line contains N, and the second line describes the elements array.  
**Output Format**     
You are not responsible for printing any output; the Solution class will print the value of the maximumDifference instance variable.  
#### Day 15: Linked List     
**Task**     
Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) and inserts it at the tail of the linked list referenced by the head parameter. Once the new node is added, return the reference to the head node.  
**Note:** If the head argument passed to the insert function is null, then the initial list is empty.  
**Input Format**   
The insert function has 2 parameters: a pointer to a Node named head, and an integer value, data.  
The constructor for Node has 1 parameter: an integer value for the data field.  
You do not need to read anything from stdin.  
**Output Format**     
Your insert function should return a reference to the head node of the linked list.   
#### Day 16: Exceptions - String to Integer     
**Task**     
Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.  
**Note:** You must use the String-to-Integer and exception handling constructs built into your submission language. If you attempt to use loops/conditional statements, you will get a 0 score.  
**Input Format**   
A single string, S.  
**Output Format**     
Print the parsed integer value of S, or Bad String if S cannot be converted to an integer.   
#### Day 17: More Exceptions     
**Task**     
Write a Calculator class with a single method: int power(int,int). The power method takes two integers, n and p, as parameters and returns the integer result of n^p. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.  
**Note:** Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.  
**Input Format**   
Input from stdin is handled for you by the locked stub code in your editor. The first line contains an integer, T, the number of test cases. Each of the T subsequent lines describes a test case in 2 space-separated integers denoting n and p, respectively.    
**Output Format**     
Output to stdout is handled for you by the locked stub code in your editor. There are T lines of output, where each line contains the result of n^p as calculated by your Calculator class' power method.  
#### Day 18: Queues and Stacks      
**Task**     
A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards. Can you determine if a given string, s, is a palindrome?  
To solve this challenge, we must first take each character in s, enqueue it in a queue, and also push that same character onto a stack. Once that's done, we must dequeue the first character from the queue and pop the top character off the stack, then compare the two characters to see if they are the same; as long as the characters match, we continue dequeueing, popping, and comparing each character until our containers are empty (a non-match means s isn't a palindrome).  
Write the following declarations and implementations:  
1. Two instance variables: one for your stack, and one for your queue.  
2. A void pushCharacter(char ch) method that pushes a character onto a stack.  
3. A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.  
4. A char popCharacter() method that pops and returns the character at the top of the stack instance variable.  
5 A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable. 
  
**Input Format**   
You do not need to read anything from stdin. The locked stub code in your editor reads a single line containing string s. It then calls the methods specified above to pass each character to your instance variables.   
**Output Format**     
You are not responsible for printing any output to stdout.   
If your code is correctly written and s is a palindrome, the locked stub code will print- The word, s, is a palindrome.; otherwise, it will print- The word, s, is not a palindrome.  
#### Day 19: Interfaces      
**Task**     
The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you in the editor below.  
Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of n.  
**Input Format**   
A single line containing an integer, n.    
**Output Format**     
You are not responsible for printing anything to stdout. The locked template code in the editor below will call your code and print the necessary output.   
#### Day 20: Sorting      
**Task**     
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:  
1. Array is sorted in numSwaps swaps, where numSwaps is the number of swaps that took place.  
2. First Element: firstElement, where firstElement is the first element in the sorted array.  
3. Last Element: lastElement, where lastElement is the last element in the sorted array.  
  
**Hint:** To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.  
**Input Format**   
The first line contains an integer, n, denoting the number of elements in array a.   
The second line contains n space-separated integers describing the respective values of a0, a1,..., an-1.  
**Output Format**     
Print the following three lines of output:  
1. Array is sorted in numSwaps swaps, where numSwaps is the number of swaps that took place.  
2. First Element: firstElement, where firstElement is the first element in the sorted array.  
3. Last Element: lastElement, where lastElement is the last element in the sorted array.  
#### Day 21: Generics      
**Task**     
Write a single generic function named printArray; this function must take an array of generic elements as a parameter (the exception to this is C++, which takes a vector). The locked Solution class in your editor tests your function.  
**Note:** You must use generics to solve this challenge. Do not write overloaded functions.  
**Input Format**   
The locked Solution class in your editor will pass different types of arrays to your printArray function.  
**Output Format**     
Your printArray function should print each element of its generic array parameter on a new line.  
#### Day 22: Binary Search Trees      
**Task**     
The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer, root, pointing to the root of a binary search tree. Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.    
**Input Format**   
The locked stub code in your editor reads the following inputs and assembles them into a binary search tree:   
The first line contains an integer, n, denoting the number of nodes in the tree.   
Each of the n subsequent lines contains an integer, data, denoting the value of an element that must be added to the BST.   
**Output Format**     
The locked stub code in your editor will print the integer returned by your getHeight function denoting the height of the BST.  
#### Day 23: BST Level-Order Traversal      
**Task**     
A level-order traversal, also known as a breadth-first search, visits each level of a tree's nodes from left to right, top to bottom. You are given a pointer, root, pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.   
**Hint:** You'll find a queue helpful in completing this challenge.   
**Input Format**   
The locked stub code in your editor reads the following inputs and assembles them into a BST:   
The first line contains an integer, T (the number of test cases).   
The T subsequent lines each contain an integer, data, denoting the value of an element that must be added to the BST.  
**Output Format**     
Print the data value of each node in the tree's level-order traversal as a single line of N space-separated integers.  
#### Day 24: More Linked Lists      
**Task**     
A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, next, pointing to another node (i.e.: the next node in a list).  
A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.  
**Note:** The head pointer may be null, indicating that the list is empty. Be sure to reset your next pointer when performing deletions to avoid breaking the list.  
**Input Format**   
You do not need to read any input from stdin. The following input is handled by the locked stub code and passed to the removeDuplicates function:   
The first line contains an integer, N, the number of nodes to be inserted.   
The N subsequent lines each contain an integer describing the data value of a node being inserted at the list's tail.  
The data elements of the linked list argument will always be in non-decreasing order.  
**Output Format**     
Your removeDuplicates function should return the head of the updated linked list. The locked stub code in your editor will print the returned list to stdout.  
#### Day 25: Running Time and Complexity      
**Task**     
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number, n, determine and print whether it's Prime or Not prime.  
**Note:** If possible, try to come up with a (O(square_root (n))) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm.  
**Input Format**   
The first line contains an integer, T, the number of test cases.   
Each of the T subsequent lines contains an integer, n, to be tested for primality.     
**Output Format**     
For each test case, print whether n is Prime or Not prime on a new line.  
#### Day 26: Nested Logic      
**Task**     
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:  
1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine = 0).  
2. If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine = 15 Hackos * (the number of days late).  
3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos * (the number of months late).  
4. If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.  
  
**Input Format**   
The first line contains 3 space-separated integers denoting the respective day, month, and year on which the book was actually returned. 
The second line contains 3 space-separated integers denoting the respective day, month, and year on which the book was expected to be returned (due date).    
**Output Format**     
Print a single integer denoting the library fine for the book received as input.  
#### Day 27: Testing      
This problem is all about unit testing.  
Your company needs a function that meets the following requirements:  
- For a given array of n integers, the function returns the index of the element with the minimum value in the array. If there is more than one element with the minimum value, the returned index should be the smallest one.  
- If an empty array is passed to the function, it should raise an Exception.  
  
**Note:** The arrays are indexed from 0.  
A colleague has written that function, and your task is to design 3 separated unit tests, testing if the function behaves correctly. The implementation in Python is listed below (Implementations in other languages can be found in the code template):  
<pre>
def minimum_index(seq):
    if len(seq) == 0:
        raise ValueError("Cannot get the minimum value index from an empty sequence")
    min_idx = 0
    for i in range(1, len(seq)):
        if a[i] < a[min_idx]:
            min_idx = i
    return min_idx
</pre>   
Another co-worker has prepared functions that will perform the testing and validate returned results with expectations. Your task is to implement 3 classes that will produce test data and the expected results for the testing functions. More specifically: function get_array() in TestDataEmptyArray class and functions get_array() and get_expected_result() in classes TestDataUniqueValues and TestDataExactlyTwoDifferentMinimums following the below specifications:  
- get_array() method in class TestDataEmptyArray has to return an empty array.  
- get_array() method in class TestDataUniqueValues has to return an array of size at least 2 with all unique elements, while method get_expected_result() of this class has to return the expected minimum value index for this array.  
- get_array() method in class TestDataExactlyTwoDifferentMinimums has to return an array where there are exactly two different minimum values, while method get_expected_result() of this class has to return the expected minimum value index for this array.  
  
Take a look at the code template to see the exact implementation of functions that your colleagues already implemented.   
#### Day 28: RegEx, Patterns, and Intro to Databases   
**Task**     
Consider a database table, Emails, which has the attributes First Name and Email ID. Given N rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.  
**Input Format**   
The first line contains an integer, N, total number of rows in the table. 
Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.  
**Output Format**     
Print an alphabetically-ordered list of first names for every user with a gmail account. Each name must be printed on a new line.  
#### Day 29: Bitwise AND   
**Task**     
Given set S = {1, 2, 3, ....., N}. Find two integers, A and B (where A < B), from set S such that the value of A & B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.  
**Input Format**   
The first line contains an integer, T, the number of test cases. 
Each of the T subsequent lines defines a test case as 2 space-separated integers, N and K, respectively.    
**Output Format**     
For each test case, print the maximum possible value of A & B on a new line.   
