# Loops

If you are told to print numbers from 1 to 5 in C, this would probably be your code:
```C
int a = 1;
printf("%d\n", a);
a++;
printf("%d\n", a);
a++;
printf("%d\n", a);
a++;
printf("%d\n", a);
a++;
printf("%d\n", a);
```
Which is correct but not optimal and very time consuming to write.

## Loops arused to repeat an action a specific number of times.
There are 3 main types of loops: <br>
```while```  loops <br>
```do-while``` loops <br>
```for```  loops <br> 

## While loops

Syntax for while loops is:
```C
while (some condition) {
    // Code to execute
    // More code to execute
}
```

An example while loop to print numbers from 1 to 100 is given below:
```C
int i = 1; 

while  (i<=100) {
    printf("%d\n", i);
    i = i + 1; 
    // NOTE: i== can also be used instead pf i = i + i
}
```
Code will be executed as long as the given contion is true.

### IMPORTANT NOTE
If a condition never becomes false, the while loop keeps getting executed it is called an, Infinite loop. <br>
An infinite loop keeps consuming memory of the program and the code inside the loop keeps getting executed. <br>

Some examples of infinite loop are given below:
```C
int a;

scanf("%d", &a);
while (a>10){
    printf("%d\n", a);
    a++;
}

``` 
And we input 11, it will keep executing as 11 will become 12 asn 12 is greater than 10 so loop executes again and so on.

Another example of infinite loop:
```C
while (10 < 19){
    printf("hehehehehhehehehe, this will keep executing as 10 will always be less than 19");
}
```

Its easy to accedentally write infinite loops, so it should be checked by the programmer that there is no unecessary infinite loops.

### Quick quizz!!!
In <a href="./Quick-Quizz/"> the quick quizz folder </a>