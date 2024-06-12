## Let's create a file named first.c

### After we write our code in C file, we run these commands in our terminal

```sh
gcc first.c -o first.exe # Windows only
gcc second.c -o first.out # Mac/Linux only
```

For Windows:
```sh
./a.exe
```

For Linux or MacOS:
```sh
./a.out
```



## We can assign values to variables
### Rules for naming variables in C (best practices)
1. First character must be an alphabet or underscore(_).
2. No commas, blanks (spaces) allowed.
3. No specialy symbol other than (_) allowed.
4. Variable names are case sensitive.
    4.1> Means:
            Tom, tom TOM, tOm, ToM all are different variables.
    4.2> We must create meaningful variable name.


## Constant
Variable is an entity that can change.
Constant is an entity that can't change.

### Types of constants
1. Integer constant -> -1, 6, 8, 9, 7 etc. (Any number without decimal point).
2. Real constant -> 1.2, 8.9, 7.0, 18.2, 7.8, 9.3 etc. (Any number with a decimal point).
3. Character constant -> 'a', '$', '_' ,'@' etc. (Anything, but it must be enclosed with single-inverted comma or single quote (''))

## Keywords
Reserved words that the compiler knows and cannot be used for a variable.
There are only 32 keywords in C language they are:
## Note: You don't need to remember these, just for knowledge

<table>
  <tr>
    <td>auto</td>
    <td>double</td>
    <td>int</td>
    <td>struct</td>
  </tr>
  <tr>
    <td>break</td>
    <td>long</td>
    <td>else</td>
    <td>switch</td>
  </tr>
  <tr>
    <td>case</td>
    <td>return</td>
    <td>enum</td>
    <td>typedef</td>
  </tr>
  <tr>
    <td>char</td>
    <td>register</td>
    <td>extern</td>
    <td>union</td>
  </tr>
  <tr>
    <td>const</td>
    <td>short</td>
    <td>float</td>
    <td>unsigned</td>
  </tr>
  <tr>
    <td>continue</td>
    <td>signed</td>
    <td>for</td>
    <td>void</td>
  </tr>
  <tr>
    <td>default</td>
    <td>sizeof</td>
    <td>goto</td>
    <td>volatile</td>
  </tr>
  <tr>
    <td>do</td>
    <td>static</td>
    <td>if</td>
    <td>while</td>
  </tr>
</table>


## Basic structure of a C program
### Refer to first.c
```int main()``` is the place where the execution of our program starts.