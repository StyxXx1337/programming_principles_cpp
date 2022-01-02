# Review

## Chapter 8

### 1. What is the difference between a declaration and a definition?

> A declaration introduces the function or variable into the scope.
> It gives the compiler all the necessary information of how to use it but doesn't define what the function / variable is doing or containing. A definition is defining the details and what actuallty the function is doing.

### 2. How do we syntactically distinguish between a function declaration and a function definition?

> ``` cpp
> // This is a declaration
> int foo (double, double)
> 
> // This is a definiton
> int foo (double a, double b){
>   int result = narrow_scope<int>(a*b)
>   return (result);
> }
> ```

### 3. How do we syntactically distinguish between a variable declaration and a variable definition?

> ``` cpp
> // This is a declaration
> extern int a;
> 
> // This is a definition
> int a;

### 4. Why can't you use a the functions in the calculator program from Chater 6 without declaring them first?

> Because the are referencing each other, so there is no way to have all functions defined before they are used. So we need to make a declaration before the definition of the function for some of the functions.

### 5. Is int a; a definiton or just a declaration?

> It is a definition.

### 6. Why is it a good idea to initialize variable as they are declared?

> Because otherwise the variable could be used later with garbage data. That would only be obvious at runtime and is very difficult to debug. Also in some cases it might give good results and it some it won't.

### 7. What can a function declaration consist of?

> A function definition contains the name of the function, the return type and the type of the arguments. The name of the arguments is optional.

### 8. What good does indentation do?

> Makes it better readable and easier to debug.

### 9. What are header files used for?

> A header file contains and manages the declarations necessary for the program.

### 10. What is the scope of a declaration?

> Depending on where the declaration happend. See next question for the options

### 11. What kinds of scope are there? Give an example for each

> Scope | Description
> --- | ---
> global | outside of any function
> namespace | a declaration within the gloabl scope of a namespace
> class | declaration within the scope of a class
> local | between two curly braces `{}`
> statement | e.g. in a `for`-loop

### 12. What is the difference between a class scope and a local scope?

> as soon as local is out of scope the variables and function are destroyed. So they can't be accessed anymore. Class scope can be accessed anywhere where the class is in scope. Also Classes can have private/protected attributes, that are not direclty accessible.

### 13. Why should a programmer minimize the number of global variables?

> Global variables are a source for unexpected behavior, because they can be accessed from everywhere in the program. So they are hard to be managed since their state is easy to be changed.

### 14. What is the difference between pass-by-value and pass-by-reference?

> Pass-by-value copies the values and uses these copied values. Pass-by-reference hands over the address of the values and the function will use the original values, so they can be changed directly.

### 15. What is the difference between pass-by-reference and pass-by-`const`-reference?

> `const`-reference will pass by reference but throw a compiler error, in case the function tries to change the passed references.

### 16. What is a `swap()`? 

### 17. Whould you ever define a function with a `vector<double>`-by-value parameter?

> Only if I am sure that the amount of items in the vector is low.

### 18. Give an example of undefined order of evaluation. Why can undefined order of evaluation be a problem?

> ``` cpp
> int i = ++i;
> v[++i] = i;
> ```
>
> The problem is, that the result can be different from compiler to compiler and from machine to machine.

### 19. What do `x&&y` and `x||y`, respectivly mean?

> Therese are logical operators. 
> `x&&y`: x and y must be `true` to result in `true`.
> `x||y`: if x or y is `true` the result will be `true`

### 20. Which of the following is standard-conforming C++

- functions within functions
- functions within classes
- classes within classes
- classed within functions

> all are valid

### 21. What goes into an activation record?

> The activation record consists of the parameters of the functions called as well as the local variables. It creates the space in memory for them to be used.

### 22. What is a call stack and why do we need one?

> The call stack keeps track of the functions that are called.

### 23. What is the purpose of a namespace?

> namespace is used to make sure that there are no name clashes. So that parts of programs can be developed independantly without worring about the implementation/naming of the other functions.

### 24. How does a namespace differ from a class?

> A class is an object a namespace not. Namespace if more a naming convention than an object.

### 25. What is a `using` declaration?

> is used to define often used parts of namespaces.
>
> ``` cpp
> // Uses the standard namespace. 
> // So `std::cout` can be used as `cout`
> using namespace std;
> using std::string; // `string` can be used
> ```

### 26. Why should you avoid using directives in a header?

> It can be unclear what namespace is used and also same named functions from different namespaces can lead to conflicts.

### 27. What is namespace `std`?

> This is the namespace of the standard library of C++
