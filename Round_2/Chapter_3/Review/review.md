# Review

## Chapter 3

### 1. What is ment by the term `prompt`?

> `Prompt` is output of the program to request the user to do something. E.g. enter the name of the user.

### 2. Which operator do you use to read into a variable?

> The insertion operator `>>`.

### 3. If you want the user to input an integer value into your program for a variable named `number`, what are two lines of code you could write to ask the user to do it and to input the value into your program?
>
>``` cpp
>cout << "Please input a number: ";
>int number = 0;
>cin >> number;
>```

### 4. What is `\n` called and what purpose does it serve?

> `\n` is a new line character. The `\n` character is inserting a new line to your string.

### 5. What terminates input into a string?

> Whitespaces like spaces, tabs and new lines.

### 6. What terminates input into an integer?

> A none integer character.

### 7. Who would you write in a single line of code?

``` cpp
cout << "Hello, ";
cout << first_name;
cout << "!\n";
```

>### Answer
>
>``` cpp
>cout << "Hello, " << first_name << "!\n";
>```

### 8. What is an object?
>
### 9. What is a literal?

> A literal is a number or a string.

### 10. What kind of literals are there?

> Numbers and strings. E.g. `"Hello World!"` or `89`

### 11. What is a variable?

> A variable is an named reference to an object with [in C++] a specified type

### 12. What are typical sizes for a char, an int, and a double?

> `char` - one Byte, `int` - two bytes `double` - four bytes.

### 13. What measures do we use for the size of small entities in memory, such as `int`s and `string`s?
>
### 14. What is the difference between `=` and `==`?

> `=` is and assignment operator that assigns the right value to the left.\
> `==` is an comparison operator that compares the left object with the right object and return a boolean. (`True` or `False`)

### 15. What is a definition?

> A definition defines a variable as an object of a certain type.

### 16. What is a initialization and how does it differ from an assignment?

> Initizalization happens directly after a declaration of a variable. Without initialization, the value in the variable is garbage remained in memory.

### 17. What is a string concatination and how do you make it work in C++?

> String concatination is adding two stings after each other. Possible ways are:
>
> - `a = "Hello " + "World!"`
> - `c = a + b`

### 18. Which of the following are legal names in C++? If a name is not legal, why not?

| | | |
|:-----------------:|:---------------:|:-----------------:|
| This_little_pig | This_1_is fine | 2_For_1_special |
| latest thing | the_$12_method | _this_is_ok|
| MineMineMine | number | correct?|

> _This_1_is fine_: is not a legal name since it contains whitespace\
> _2_For_1_special_: is not a legal name since it starts with a number\
>_latest thing_: is not legal since it contains whitespace\
>_the_\$12_method_: contains a `$` which is not a valid character\
> *_this_is_ok*: start with underline is legal, but should be used sparely\
> _correct?_: is not a legal name, since it contains a `?-Mark`

### 19. Give five examples of legal names that you shouldn't use because they are likely to cause confusion

> FOO - since the `O` and `0` are easy to confuse\
> HILL - since `I` and `l` are easy to confuse\
> _foo - since vars starting with an `_` are often used by the compiler\
> L1 - since `1`, and `l` are easy to confuse\
> OlI1 - `OlI1` contains upper, lower, upper case which leads to confusion between `l`, `i` and `1`.
>
### 20. What are some good rules for choosing names?

> Choose speaking names with a good abstraction level and keep them consistent

### 21. What is type safety and why is it important?

> Type safety is when types are only used according to their type. It avoids bugs in the code. The C++ compiler makes partially sure it is followed.

### 22. Why can conversion from double to int be a bad thing?

> Because the double needs a larger space in memory and when converted to int, it can be that the value changes due to lost in space.

### 23. Define a rule to help decide if a conversion from one type to another is safe or unsafe

> Convert smaller types to larger types is not a problem, since the information will not get lost. Other way around can be potentially dangerous.
