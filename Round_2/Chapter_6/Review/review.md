# Review

## Chapter 6

### 1. What do we mean by "Programming is understanding"?

> To write a good program we have to understand the problem very well,
> otherwise it is not possible to put it into code. 
> Because with the code we explain the PC our understanding of the problem

### 2. The chapter details the creation of a calculator program. Write a sort analysis of what the calculator should be able to do.

> The calculator should take mathematical expressions evaluate them according to rules.
> It should then return the result to the use.

### 3. How do you break a problem up into smaller manageable parts?

> Devide and conquer is a good strategy.

### 4. Why is creating a small working limited version of your program a good idea?

> While creating the limited version we get a better understanding of the problem.
> Also we can clarify incomplete/ ambigious requirments.

### 5. Why is feature chreep a bad idea?

> It adds a lot of work for a small additional feature. The program will increase dramatically in size and the cost and timeline will increase with it. So it should be very carefully considered if the feature really needs to be included.

### 6. What are the three main phases of software development?

> Analysis, Design, Implementation.

### 7. What is a "use case"?

> A specific use of a program. It can/should be used as a test case.

### 8. What is the purpose of testing?

> Testing is checking the code for reasonable errors and makes sure that they are caught.
> Also it should catch

### 9. According to the outline in the chapter, describe the difference between a `Term`, an `Expression`, `Primary`s and `Number`s.

### 10. In the chapter, an input was broken down into its component `Terms`, `Expressions`, `Primary`s and `Number`s. Do this fo `(17+4)/(5-1)`.

### 11. Why does the program not have a function called `number()`?

> Because number is a part of primary.

### 12. What is a token?

> A token is a part of the input to separate the input into usable parts.

### 13. What is a grammar? A grammar rule?

> A grammar is a set of rules, that.

### 14. What is a class? What do we use classes for?

> Classes are objectes in C++ we use to structure our code and to represent real life concepts in code. These classes help to make the code easier to understand and use. 

### 15. How can we provide a default value for a member of a class?

> We can specify it when we define the class:
>
> ```cpp
> class Bloob(){
> public:
>   int foo = 1;
> };
> ```

### 16. In the expression function, why is the default for the `switch`-statement to "put back" the token?

> To put back a token, that can not be evaluted by the expression but e.g. by primary or term statement.

### 17. What is "look-ahead"?

> "Look-ahead" is describing the concept to look further ahead in the stream to evaluate the meaning of the current input. E.g. for numbers to know if it ends here or if there are more digits to come.

### 18. What does `putback()` do and why is it useful?

> `putback` returns token to the stream, so that they can be evaluated.
> That is useful to put back numbers that consist of more than one term and also results of `term`s and `expression`s.

### 19. Why is the remainder (modulus) operation difficult to implement in the `term()`?

> Because there is only one return value possible and for integeres and floats we would need different implementations.

### 20. What do we use the two data members of the `Token` class for?

> First one is to store the type of token. Second one stores the value of the token (number).

### 21. Why do we (sometimes) split a class's member into private and public members?

> To encapsulate the arguments. So we can make sure that they are only accessed in a way that we intended.

### 22. What happens in the `Token_stream` class when there is a token in the buffer and the get() function is called?

> The buffer will be returned to the caller and the function will be set to empty.

### 23. Why were the `;` and `q` character added to the switch statement in the `get()` function of the `Token_stream` class?

> `;` is used to envoke a print out of the solution. `q` is used to get out of the program.

### 24. When should we start testing our program?

> As soon as there is a running version of the program.

### 25. What is a "user-defined type"? Why would we want one?

> User defined types are classes defined by the user to abstract real world concept in code.

### 26. What is the interface to a C++ "user-defined type"?

> "user-defined type"."member"

### 27. Why do we want to rely on libraries of code?

> Library code is highly tested and the quality should be higher than the code you would write youself. Also you don't have to reinvent the wheel and spend more time on the problem, when using libraries.