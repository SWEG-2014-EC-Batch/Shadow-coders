# FOP2 assignment
## table of Contents
- [Question 4](#Question4)
- [Question 5](#Question5)
- [Question 6](#Question6)
- [Question 7](#Question7)
- [Question 8](#Question8)
## Question 4 <a name="Question4"></a>
a simple number multipler.
### The main function
- prompts users to inter values.
- firstNum is going to hold the first entery. It is also going to be a integer.
- secondNum is going to holdthe second entery. It is also going to be a double.
### getProduct function
- do the multiplication of the values entered in the main function.
- has two parameters:
  - num1, which is going to recive the value stored in fistNum in the main function
  - num2, which is going to recive the value stored in secNum in the main function
## Question 5 <a name="Question5"></a>
adds the cude of a number with the square root of another number.
### The main function
- accepts the two numbers that are going to be used for the calculations (fistNum and secondNum)
- Finally show the result (the variable answer will store the result)
### calculations function
- recives the user input via its parameters (num1 and num2)
- will find the sum of num1 cubed and the square root of num2
## Question 6 <a name="Question6"></a>
uses the pythagorian theorem to find the hypotenuse of a triangle
### The main function
- recives the two side of the triangle from the users (via the variables: side1 and side2)
- outputs the hypotenuse (which is calculated by the function hypotenuse)
### hypotenuse function
- returns the square root of side1 squared plus side2 squared
## Question 7 <a name="Question7"></a>
**NEEDS REVISION!**
## Question 8 <a name="Question8"></a>
checks if an integer is a prime number or not
### main function
- recives the integer from the user 
- prints the conformation "is a prime number" if the function isPrime decides the integer is a prime number (isPrime returned true) and prints "is not a prime number" if not (isPrime returned false). 
### isPrime function
- has one parameter which recives the integer entered by the user.
- The variablle 'tester' will a value different from 0 if there is a factor found.
- the for loop is used to cycle through integers less than or equal to the square root of the value entered by the user.
- this function returns:
  - true if the tester remains zero (no factor found)
  - false if the tester has a different value (a was factor found)

