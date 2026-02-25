# Task 1 - character arrays and strings

1. **character arrays are not strings**

Small example showing how character arrays differ from strings.

Question: 
- Explain why printing the array as a string (%s) causes a strange result.
- Hint: Think about how C data is stored in memory. 
- Test this by changing the second string to something other than "hello".

Answer:
The %s specifier expects a null-terminated string, so that it prints strings until it hits a \0 byte, since a char array lacks a 'stop' or null character. This results in it reading into adjacent 'garbage' memory, in this case it is the char string.
