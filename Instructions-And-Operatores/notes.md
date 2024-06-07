# Instructions and operators

## Mostly there are 3 types of instructions in C
### 1. Type declaration instructions
Like ``` int ```, ``` float```, ``` char``` etc.
### 2. Arithmetic Instructions
Like ``` +``` (plus), ``` -``` (minus), ``` *``` (multiplication) etc.
### 3. Control Flow instructions
Like ```for loop```, ``` while loop``` etc. which tell what to execute first.

## Type declaration operators in action
You can see <a href="./Instructions/type-declaration-instructions.c">``` type-declaration-instructions.c``` File by click here. </a>

## Arithmatic instructions in action
You can see <a href="./Instructions/airthmatic-instructions.c">``` airthmatic-instructions.c``` File by clicking here. </a>
### Operators and operands
<img src="../Images/Operators.png" height=400 width=1000 style="border: 5px solid gray; border-radius:10px;">

### Modular division operator (```%```)
Used to get the remainder of division

#### Rules for Modular division opeator
1. It returns the remainder.
2. It does not work on floats
3. Sign should be the same as the numerator.(-5 % 2 = 1)
    3.1. 5 % 2 = 1
    3.2. -5 % 2 = -1

### Important
#### No operator is assumed to be present.
Means:
```C
printf("The product of 4 and 5 is %d", 4.5);
printf("The product of 4 and 5 is %d", (4)5);
printf("The product of 4 and 5 is %d", 4.(5));
printf("The product of 4 and 5 is %d", (4)(5));
printf("The product of 4 and 5 is %d", (4)*(5));
```
Are all errors because in regular mathematics we expect all of these operators to multiply those 2 numbers.
But in C only this is the correct way:
```C
printf("The product of 4 and 5 is %d", 4*5);
```

#### No operator to perform exponentiation.
In many programming languages there are exponentition operators. Like in Python:
```Py
a = 2**3
```
Retrns 2^3 which is 8 (2*2*2 = 8).

But in C, there is no exponentition operator.
But if we really want to do exponentiation in C, we can do this:

First include ```<math.h>```:
```C
# include <math.h>
```

Then use the ```pow()``` function:
```C
printf("4 to the power 5 is %f", pow(4, 5));
```
