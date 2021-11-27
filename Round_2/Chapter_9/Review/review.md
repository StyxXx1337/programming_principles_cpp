# Review

## Chapter 9

### 1. What are the two parts of a class, as described in the chapter?

> A class consists of a implementation and an interface.

### 2. What is the difference between the interface and the implementation in a class?

> The __implementation__ is the way things are implemented and should be hidden from the user of the class.\
> The __interface__ should be easy to use and be as concise as possible.

### 3. What are the limitations and problems of the original `Date struct` that is created in the chapter?

> The struct has no checking for correctness and also no useful methods to use. So it is just a collection of information.

### 4. Why is a constructor used for the `Date` type instead of an `init_day()` function?

> An constructor gives the possibility to set the value of the class direclty when it is declared, so that it can not be forgotten to give meaningful values to the object.

### 5. What is an invariant? Give examples

> An invariant is a rule for objects that need to be true. For example what is a valid Date: Month between 1-12, Day between 1 - 31, Year between 1900 - 2500.

### 6. When should functions be put in the class definition, and when should they be defined outside the class? Why?

> When the functions are short (one line) then they can be in the class defintion. Otherwise they should be defined outside of readability and conciseness of the interface.

### 7. When should operator overloading be used in a program? Give a list of operators that you might want to overload (each with a reason)

> Operator overloading is useful when the operator represents logially an operation to that class. E.g. `<<` reprents the way the class should be print to the console.\
> Possible operators are:
>
> * `==` to define when the classes are same
> * `>` when the classes are bigger / smaller
> * `+` how to add and substract classes from each other.
> * `-` to substract some classes from each other.
> * `++` add one day
> * `--` substract one day  

### 8. Whay should the public interface to a class be as small as possible?

> to make it concise and easy to use. Also it reduces the amount of possible errors, when the interface is small.

### 9. Whay does adding `const` to a member function do?

> It defines that the member function can not modify the object of the given class

### 10. Why are "helper functions" best placed outside the class definition?
