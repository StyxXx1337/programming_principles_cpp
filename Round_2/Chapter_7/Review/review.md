# Review

## Chapter 7

### 1. What is the pupose of working on the program after the first verions works?

> Main purpose is to improve on the useability and finding futher possible errors in the code that need correction.

### 2. Why does `1+2; q` typed into the calculator not quit after it receives an error?

> Because it cleans the input stream until the next `;`

### 3. Why did we choose to make a constant character called `number`?

> For readability of the program. The choice of '8' was very arbitraty and also can lead to mistakes when programming. Use '0' or and other number.

### 4. We split `main()` in two separate funcitons. What does the new function do and why did we split `main()`?

> The `main()` function handles the basic scaffolding and error catching. The new `calculate()` function deals with the running of the calculation loop.

### 5. Why do we split code into multiple functions?

> It makes the code more readable, since not all details of all code need to be understood, but the abstraction of the function gives enough understanding without knowing how it is implemented.

### 6. What is the purpose of commenting and how shold it be done?

> Commenting should be done in a way, that concepts/intentions of the code are explained which are not possible to document in code. Comments that can be easily understood from code are not good comments.

### 7. What does `narrow_cast` do?

> It checks if information is lost when casting a bigger class to a smaller class.

### 8. What is the use of symbolic constants?

> Symbolic constants avoid errors that are introduced by `magic numbers`.

### 9. Why do we care about code layout?

> Good code layout is important for the compiler, since the used functions need to be defined before they are used. But also it helps when reading code if the functions that are function wise close are also close in the code. That avoids the necessity to jump around in files and makes it easier to read.

### 10. How do we handle `%` (remainder) of floating point numbers?

> In the book are 2 ways described. I decided to implement the way to use the integer-defined remainder function and narrow_cast floating point numbers.

### 11. What does `is_declared()` do and how does it work?

> it checks if the name that is/will be uses is already in the names vector.

### 12. The input representation for `let` is more than one character. How is it accepted as a single token in the modified code?

> The algorithm checks if the value entered is alphabetic, then it will read chars until a whitespace. If that resulting string is `let` then a `Token` with kind 'L' is created.

### 13. What are the rules for what names can and cannot be in the calcuator program?

> The rule is that it has to start with an alphabetic character, to distinguish from a usual number. Following chars can be alpha numberic.

### 14. Why is it a good idea to build a program incrementally?

> So you can test the parts that are working and also check from a user perspective what additional functions make sense.

### 15. When do we start to test?

> As soon as the first version of the program is running.

### 16. When do we start to retest?

> As soon as possible. Best case is every change in the program should be retested.

### 17. How do you decide what should be a separate function?

> If it is logally sepatable it is better to build a separate function. Also if that part of the function is usable for other functions it is better so separte it.

### 18. How do you choose names for variables and functions? List possible reasons

> - As concise as possible
> - As long as required

### 19. Why do you add comments?

> For people who read the code, especially myself to explain concept and logics that are not expressable in code.
> Also for TODOs it can be helpful.

### 20. What should be in comments and what should not?

> Everything that is important for the program and can not be explained in code should be commented.
> Everything that can be relativly simply explain in code should not also be commented.

### 21. When do we consider a program finished?

> When it is giving correct output for all legal inputs, catches errors for all reasonable false inputs and possible errors that could happen.
