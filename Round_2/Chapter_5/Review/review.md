# Review

## Chapter 5

### 1. Name four major types of errors and briefly define each one.

> - Compile-Time Error: Compile-Time Errors happen at compile time. They are detected by the compiler and throw errors.
> - Link-Time Error: Link-Time Errors happen when the linker links several files to one project. 
> - Run-Time Error: Run-Time Error happen when the program runs.
> - Logic Error: Logic Errors are no Errors that you can find by the compiler or the program crashing. They are in the logic and can only be found by testing.

### 2. What kind of errors can we ignore in student programs?

> I think Logic Errors can be ignored, since they are difficult to find and also the purpose is not always clear.

### 3. What guarantees should every completed project offer?

> Should produce the desired output for all legal inputs.
> Should give reasonable error messages for illegal inputs.

### 4. List three approaches we can take to elimate errors in programs and produce acceptable software.

> 1. Organize Software by Divide and Conquer.
> 2. Eleminate Errors through debugging and testing.
> 3. Make sure remaining Errors are not critical.

### 5. Why do we hate debugging?

> Takes a lot of time and adds not much value add.
> Also it is unrealisitc to find all bugs so it is difficult to say when debugging is finished.

### 6. What is a syntax error? Give five examples.

> Syntax Errors are detected at compile time.
> Examples are:
>
> - Forgotten `;`
> - Want to call an element of a vector with `()` instead of `[]`
> - Spell `Int` instead of `int`
> - Not closed block / forgotten `}`
> - Use of a function without declaring the function before

### 7. What is a type error? Give five examples.

> Type Errors are detected at compile time by the compiler.
> Examples are:
>
> - Assigning a string to a int
> - Calling a not defined function
> - Giving the wrong about of arguments to a function. (3 required, 1 given)
> - Give the wrong type of argument to a function. (`int` expected `string` received)
> - Calling a function defined after the call

### 8. What is a linker error? Give three examples.

> Linker Errors are detected by the linker, after the files are compiled. 
> Exampels are:
> 
> - calling an external function with the same name but different amount of arguments. 
> - calling an external function, with different arguments. E.g. `double` instead of `int`

### 9. What is a logic error? Give three examples.

> Logic Errors are not detected automatically by the Linker or Compiler. They are glitches in the logic of the program.
> Examples are:
> 
> - Negative Values for a area
> - Of-by-one Errors. (Loop one too much or too less)
> - Loop breaks to early too late. Bad exit condition

### 10. List four potential sources of program errors discussed in the text.

> - Bad Argument
> - Bad Input
> - Range Error
> - Narrowing Error

### 11. How do you know if a result is plausible? What techniques do you have to answer such questions?

> You can make a plausibility check, if the results can be at all. That is the easiest.
> Second you can estimate if the value is correct.

### 12. Compare and contrast having the caller of a function handle a run-time error vs. the called function's handling the run-time error.

### 13. Why is using exceptions a better idea then returning an "error value"?

> An exception is clear that an error happen. For some functions it might be difficult to define an error value, since all possible return values might be plausible.
> Also the caller doesn't need to know about the error value. If an exception is raised it needs to be dealed with or the program terminates. That avoids using wrong values for further calcualtions

### 14. How do you test if an input operation succeeded?

> Example: `if (cin >> val)`: `cin` returns true if succeeded and false if not.

### 15. Describe the process of how exceptions are thrown and caught.

> Exceptions are thrown by the `throw` command and throw a `class`./
> Example:
>
> ``` cpp
> class NegativeArgument {}; 
> int area(int len, int wid){
>   if (len < 0 || wid < 0) throw NegativeArgument;
> }
> ```
>
> The exception is caught either in the same abstraction level or upper./
> Example:
>
> ``` cpp
> try{
>   int result = area(10, -1);
> }
> catch(NegativeArgument){
>   cout << "Please enter positive arguments;
> }
> ```

### 16. Why, with a vector called v, is v[v.size()] a range error? What would be the result of calling this?

> The vector starts counting with 0 for its first element so the last element in a vector is v.size() - 1 . The call above would result into a `range error`

### 17. Define pre-condition and post-condition; give an example (that is not the area() function from this chapter), preferably a computation that requeres a loop.

### 18. When would you not test a pre-condition?

### 19. When would you not test a post-condition?

### 20. What are the steps in debugging a program?

### 21. Why does commenting help when debugging?

### 22. How does testing differ from debugging?
