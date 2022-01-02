# Review

## Chapter 4

### 1. What is a computation?

> The execution of code. Often taking input and providig some ouptput.

### 2. What do we mean by `inputs` and `outputs` to a computation? Give examples

> Inputs to a computation are information that the computation uses to compute.
> Outputs are returned from the computation, to what ever it was calling. 'Return 0;'

### 3. What ere the threee requirements a programmer should keep in mind when expressing computation?
>
> - Correctness
> - Simplification
> - Speed

### 4. What does an expression do?

> An expression is a line of code that computes a result from a number of operands

### 5. What is the difference between a statement and an expression, as described in this chapter?

> Statements are constructs to execute expression several times or choose between options.\
> Also when creating out put of reading input C++ uses statements.

### 6. What is an l-value? List the operators that require an lvalue. Why do these operatos, and not the others require an l-value?

> An l-value is a value that can appear on the left of an assignment statement.

### 7. What is a constant expression?

> A constant expression is compiled at compile time and can't be changed at runtime.

### 8. What is a literal?

> A literal is a notation that directly specifies the value. E.g. `12` or `"Hello"`.

### 9. What is a symbolic constant and why do we use them?

> A symbolic constant replaces a magic number by a constant. \
> The name of the constant gives more context and also avoids typos and mistake the numbers during the code.

### 10. What is a magic constant? Give examples

> A magic constant is a number that is defined as a threshhold or as a comparisson.\
> E.g. \
> `if (number < 7){ .... }` \
> The 7 is a magic constant, because it is not clear why 7, and not 9 or 8.881.
> But if you give it a name it gives more contect.\
> `const int number_of_weekdays = 7`

### 11. What are some operators that we can use for integers and floating-point values?

> We can use the +, -, / or * operators.

### 12. What operators can be used on interages but not on floating-poit numbers?

> We can not use the modulus `%` operator on floats but only on integers.

### 13. What are some operators that can be used for strings?

> We can use the assignemnt operator `=` and the concatention operator `+`.

### 14. When would a programmer prefer a `switch`-statment to an `if`-statement?

> A `switch` statement is good to use when the case statements are from type `int` or `string`. Also they must be constant expressions. You can't use variables.

### 15. What are some common problems with `switch`-statements?

> Forgotten `break;` statement and that as mentioned in [14](review.md) that the case must be an `int` or `string` defined at compile time.

### 16. What is the function of each part of the header line in a `for`-loop, and in what sequence are they executed?

> The for-loop header is `for(int i = 0; i < LIMIT; i++)`.\
> `int i = 0` defines the loop value and initializes it to `0`. \
> `i < LIMIT` is the loop condition. As long as it is true, the loop continues. \
> `i++` it the increment statement. It is executed as last operation before the next comparison.

### 17. When should the `for`-loop be used and when should the `while`-loop be used?

> A `for` loop is preferec, when the amount of loops is predefined, a while loop when the amount of loops is not clear before running the loop.

### 18. How do you print the numeric value of a char?

> We cast it into an `int`.
>
> ``` cpp
> char c = 'a';
> int i = c;
> cout << c << endl; // or
> cout << int(c) << endl;
> ```

### 19. Describe what the line `char foo(int x)` means in a function definition?

> the function `foo` returns a `char` and takes one argument from type `integer`.

### 20. When should you define a separate function for part of a program? List reasons
>
> - Readability
> - Multiple use
>   - less typing
>   - changes get easier
>

### 21. What can you do to an int that you cannot do to a string?

> An `int` can be cast to other types like `char` `float` or `double`.\
> Also `int` can be substracted and devided.\
> Multiplication with `*` and addition `+` can be used but have different results on `string`s than on ints

### 22. What can you do to a string that you cannot do to an int?

> You can concatanate `string`s with the addition operator:\
>
> ``` cpp
> string a = "Hello, ";
> string b = "World!";
> string c = a + b;
> // Result: c = "Hello, World!";
> ```

### 23. What is the index of the third element of a `vector`?

> The thirds element of a `vector` has the index `2`.\
> E.g.
>
> ``` cpp
> vector<string> indexs = {"one","two","three","four"};
> cout << indexs[2] << endl;
> // Output: three
> ```

### 24. How do you write a `for`-loop that prints every element of a `vector`?

> You can use a `range-based-for-loop`:\
>
> ``` cpp
> vector<string> indexs = {"one","two","three","four"};
> 
> for(string i : indexs){
>   cout << i << endl;
> }
> ```

### 25. What does `vector<char> alphabet(26);` do?

> It creates a vector containing chars with size 26. Initiated with no char.

### 26. Describe what `push_back()` does to a vector>

> The command `push_back()` of a `vector` is appending to the end of the vector with the value given to the `push_back()` method.

### 27. What does `vector`'s member `size()` do?

> The command `size()` of a `vector` returns the size/length of the vector.

### 28. What makes `vector` so popular/useful?

> That is because any type of data can be safed and for all programms we need data to do computation.

### 29. How do you sort the elements of a `vector`?

> `sort(vector);`
