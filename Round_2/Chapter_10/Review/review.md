# Review

## Chapter 10

### 1. When dealing with input and output, how is the variety of devices dealth with in most modern computers?

> The differences are usually abstracted in drivers and libraries the hardware uses to communicate on the given interfaces.

### 2. What, fundamentally, does an `istream` do?

> `istream` opens a stream to read from. `ifstream` & `cin` are versions of an `istream`.

### 3. What, fundamentally, does an `ostream` do?

> `ostream` opens a stream to output to. Like `cout` or `ofstream`

### 4. What, fundamentally, is a file?

> A file is a bunch of bytes on the RAM that are in a logical order.

### 5. What is a file format?

> File format determines the meaning of the bytes. E.g. simple reading the characters or biniary values.

### 6. Name four different types of devises that can require I/O for a programm

> Keyboard, Network, Graphic Driver, Files

### 7. What are the four steps for reading a file?

> 1. Declare `ifstream` with name.
> 2. Test that the `ifstream` was successfully established.
> 3. Read data from `istream`.
> 4. Close the `istream`. (Usally we wait until the `istream` goes out of scope.)

### 8. What are the four steps for writing a file?

> 1. Declare `ofstream` with name.
> 2. Test that the `ofstream` was successfully established.
> 3. Write data to the `ostream`.
> 4. Close the `ostream`. (Usally we wait until the `ostream` goes out of scope.)

### 9. Name and define the four stream states
> 1. `good()`: stream is successfully estabilished
> 2. `bad()`: something bad happend and can't be recoverd.
> 3. `eof()`: no further input `End of file`
> 4. `fail()`: something unexpected happend.

### 10. Discuss how the following input problems can be resolved:

> #### a. The user typing an out-of-range value
>
> Check for the range and if not in range ask again.
>
> #### b. Getting no value (end of file)
>
> Finish the reading from the file.
>
> #### c. The user typing something of the wrong type
>
> Clean the input e.g. skipping of read in the value as char/string. Then prompt again.

### 11. In what way is input usually harder than output?

> Input has a specific format that is given. So adhere to that format and checking that the format is kept is rather difficult.

### 12. In what way is output usually harder than input?

> Output can override other files, so need to be sure that the file is not unintentionally overwritten.

### 13. Why do we (often) separate input/output from computation?

> Input and output streams are usually defined in the beginning, to make sure that the comupations are meaningful.\
> If the files can not be read/written the computation is not required.

### 14. What are the two most common uses of the istream member function `clear()`?

> After the istream has been `fail()` to recover the stream.\
> Or to clear and set the `failbit`.

### 15. What are the usual function declations for `<<` and `>>` for a user-defined type `X`?

> `istream& operator>>(istream& is, X& x)` \
> `ostream& operator<<(ostream& os, X& x)` 
