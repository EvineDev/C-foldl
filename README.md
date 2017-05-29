# C-foldl
## C Typesafe Varargs, in a sorta roundabout way.
#### Reasoning
I saw a possibility to make a `CONCAT(...)` macro that just worked with any amount of arguments. Down that path I found it could do so much more, and now it's a general purpose system for creating vararg functions/macros in C/C++.

#### Compilers Compatibility 
Developed and tested on these compilers.
- Clang 3.8.0
- MSVC 19.00.23026
- GCC 5.3.1

#### Files
- `FOLD.h` is the library.
- `Generate_FOLD.c` will generate `FOLD.h`

#### Properties
- Return value must be the same as the first argument of the next function in the expansion.
- Handles 0 arguments by expanding into nothing.
- Handles 1 argument by expanding to that argument.
- Handles 2 arguments by expanding into to a ordinary call.
- More than 2 arguments and it will expand recursively.
- Preprocessor macro is expanded properly with the inner calls first.
  And will work just fine as long as there is no exposed commas.
  Commas inside brackets are fine.

#### Sample
```C
//Macro                   Expansion
FOLD(Func, a)          // a
FOLD(Func, a, b)       // Func(a, b)
FOLD(Func, a, b, c)    // Func(Func(a, b), c)
FOLD(Func, a, b, c, d) // Func(Func(Func(a, b), c), d)
```
```C
// Directly make Func a vararg function
int Func_(int a, float b);
#define Func(...) FOLD(Func_, __VA_ARGS__)
//Macro             Expansion
Func(a)          // a
Func(a, b)       // Func_(a, b)
Func(a, b, c)    // Func_(Func_(a, b), c)
Func(a, b, c, d) // Func_(Func_(Func_(a, b), c), d)
```
```C
// With preprocessor macro
#define CONCAT(a, b) a##b
//Macro                     Expansion
FOLD(CONCAT, a)          // a
FOLD(CONCAT, a, b)       // ab
FOLD(CONCAT, a, b, c)    // abc
FOLD(CONCAT, a, b, c, d) // abcd
```
```C
// Or more simply
#define CONCAT_(a, b) a##b
#define CONCAT(...) FOLD(CONCAT_, __VA_ARGS__)
//Macro               Expansion
CONCAT(a)          // a
CONCAT(a, b)       // ab
CONCAT(a, b, c)    // abc
CONCAT(a, b, c, d) // abcd
```
