# Review

## Chapter 11

### 1. Why is I/O tricky for a programmer?

> I/Os are highly irregular and therefor difficult to accomodate.
> Inputs like files, as well as outputs have a high 
> variaty that needs to be reflected to make the program useful

### 2. What does the notation `<<hex` do?

> It changes the output from normal decimal representation 
> to hexadecimal representation.

### 3. What are hexadecimal numbers used for in computer science? Why?

> Hexadecimals are used for represention of file system.
> It represents two bytes in memory or one word. `0000 0000`

### 4. Name some of the options you may want to implement for formatting integer output

> `scientific` or `fixed` to determine the way numbers are shown.
> `oct` or `hex` to show numbers in octa or hexadecimal format.

### 5. What is a manipulator?

> Is a function that changes the behavior of a string without changing the data.

### 6. What is the prefix for decimal? For octal? For hexadecimal?

> Decimal has none. Octal is 0 and hex is 0x.

### 7. What is the defalt output format for floating-point values?

> The default output is `default` float. It chooses the best representation between `scientific` and `fixed`.

### 8. What is a field?

> A field is a representation for integers. 
> It defines how many space a integer has to show.

### 9. Explain what `setprecision()` and `setw()` do

> `setprecision()` sets how many charactes are shown. Eighter numbers or decimal places.
> `setw()` sets the width of how many characters can be shown.

### 10. What is the purpose of file open modes?

> To safe files in normal mode or in binary mode.

### 11. Which of the following manipulators does not "stick": `hex`, `scientific`, `setprecision`, `showbase`, `setw`?

> Stick: `hex`, `scientific`, `setprecision`, `showbase`
> Not Stick: `setw`

### 12. What is the difference between character I/O and binary I/O?

> Character I/O reads each character in the file and stores it as characters.
> Binary I/O saves the files as binary values.

### 13. Give an example of when it would probably beneficial to use binary file instead of a text file?

> Binary safes spaces. For a large amount of data binary safeing can be beneficial.

### 14. Give two examples where stringstream can be useful

> When we want to separate read from computation.
> Or when we want to format an output 

### 15. What is a file position?

> The position in the file from where the next access will happen.

### 16. What happens if you position a file position beyond the end of file?

> That depends on the implementation of the operating system.

### 17. When would you prefer line-oriented input to type-specific input?

> line oriented input is prefereable if you want to keep all the whitespaces from the original or 
> if the whitespace like tabs or new lines have specific meaning
> Type specific is you search for specific input

### 18. What does `isalnum(c)` do?

> it checks if c consists soley of numerics or alphabetic characters.
