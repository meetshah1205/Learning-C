# Pointers

```C
int a = 98;
printf("a = %d\n", a);
```
Ofcourse this will print 98.
If I do this
```C
int* ptr;
ptr = &a;
*ptr = 188;
printf("a = %d\n", a);
```
Now the value of ```a``` will be 188.
because we directly modified value of ```a``` in the memory.

## What are pointers?
Pointers are variables that store the address of other variables.
Here is what happend in that program in a conversational manner: <br><br>
<b>Program</b>: Hey compiler I want an ```int``` variable ```a``` with th evalue of 98. <br>
|<b>Compiler</b>: Ok, here you go. <br>
<b>Program</b>: I want a variable ```ptr``` to store the address of ```a``` in the memory.<br>
|<b>Compiler</b>: Ok, here you go.<br>
<b>Program</b>: I want to modify the value of the memory address of ```a``` to 188 instead of 98.<br>
|<b>Compiler</b>: ok.<br>

This was basics of pointers, I know what NULL pointers are, its initialising a pointer with NULL. And if we want to go to the next value that the pointer points, we do ```name_of_pointer = name_of_pointer + 1```.