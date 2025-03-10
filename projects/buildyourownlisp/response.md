# Variable Types in C

## 1. Integer Types (Exact Width)

These provide more control over the size of integers:

```c
#include <stdint.h>

int8_t a;      // 8-bit signed integer 
uint8_t b;     // 8-bit unsigned integer 

int16_t c;     // 16-bit signed integer 
uint16_t d;    // 16-bit unsigned integer 

int32_t e;     // 32-bit signed integer 
uint32_t f;    // 32-bit unsigned integer 

int64_t g;     // 64-bit signed integer 
uint64_t h;    // 64-bit unsigned integer 
```

The keywords `signed` and `unsigned` determine how values are interpreted:

- `signed` → Allows both positive and negative values.
- `unsigned` → Only allows positive values.

## 2. Extended Integer Types

| Type            | Meaning          |
|----------------|----------------|
| `short int`    | At least 16 bits |
| `long int`     | At least 32 bits |
| `long long int` | At least 64 bits |

Examples:

```c
short int s = 10;
long int l = 100000L;
long long int ll = 10000000000LL;
```

## 3. Void Type

Represents no values (used in functions that return nothing).

```c
void doNothing() {
}
```

Also used in generic pointers:

```c
void *ptr;
```

## 4. Boolean Type (`_Bool`)

`<stdbool.h>` allows using `true` and `false` instead of `1` and `0`.

```c
#include <stdbool.h>
 
bool isActive = true;
_Bool isRunning = 1; // Alternative without <stdbool.h>
```

## 5. Complex Numbers (`_Complex` & `_Imaginary`)

C99+ introduced complex numbers. `<complex.h>` provides `double _Complex`, `float _Complex`, etc.

```c
#include <complex.h>

double complex z = 1.0 + 2.0 * I;  // 1 + 2i
```

## 6. Character Types

| Type            | Size   | Purpose                          |
|----------------|--------|----------------------------------|
| `char`         | 1 byte | Stores characters               |
| `unsigned char` | 1 byte | Only positive values (0 to 255) |
| `signed char`  | 1 byte | Can be negative (-128 to 127)   |
| `wchar_t`      | Varies | Stores wide characters (Unicode) |

Example:

```c
#include <wchar.h>

wchar_t wch = L'ß';  // Stores Unicode characters
```

## Summary Table

| Type Category         | Examples                                    |
|----------------------|--------------------------------------------|
| Integer Types       | `short`, `int`, `long`, `long long`        |
| Fixed-Width Integers | `int8_t`, `uint32_t`, `int64_t` (`<stdint.h>`) |
| Floating-Point Types | `float`, `double`, `long double`           |
| Boolean Type        | `_Bool` (or `bool` from `<stdbool.h>`)      |
| Character Types     | `char`, `signed char`, `unsigned char`, `wchar_t` |
| Void Type          | `void`, `void *`                            |
| Complex Types      | `double _Complex`, `float _Complex`         |
| Generic Type       | `void *` (can hold any type of pointer)     |

==========================================================================
==========================================================================
==========================================================================







Exist several types of diferents variable in C:

1. integer types (exact width)

	These provide more control over the size of integers:


	#include <stdint.h>

	int8_t a;      ==> 8-bit signed integer 
	unint8_t b;    ==> 8-bit unsigned integer 

	int16_t a;      ==> 16-bit signed integer 
	unint16_t b;    ==> 16-bit unsigned integer 

	int32_t a;      ==> 32-bit signed integer 
	unint32_t b;    ==> 32-bit unsigned integer 

	int64_t a;      ==> 64-bit signed integer 
	unint64_t b;    ==> 64-bit unsigned integer 

	La palabra signed y unsigned nos dice como se interpretan los valores
	almacenados en un byte(8 bits)

	signed ==> ( + y - ) Define que la estructura de datos va tener signo negativo o positivo (con signo).
	unsigned ==>  ( - ) Define que la estructura de datos va ser positiva.


2. Extended integer types :

	type 			Meaning 
	short int 		At least 16 bits 
	long int		At least 32 bits
	long long int           At least 64 bits

	examples:
	 shot int s = 10;
	 long int l = 100000L;
	 long long int ll = 10000000000LL;

3. void type:

	represent no values (used in functions thtat return nothing).

	void doNothing(){

	}

	Also used in generic pointers (void *)
	void *ptr;

4. Boolean type (_Boolean)

	<stdbool.h> allow using true and false instead of 1 and 0.

	#include <stdbool.h>
	 
	bool isActive = true;
	_Bool is Running = 1 // alternative without <stdbool.>


5. Complex Numbers (_Complex & _Imaginary)
C99+ introduced complex numbers.
<complex.h> provides double _Complex, float _Complex, etc.
c
Copy
Edit
#include <complex.h>

double complex z = 1.0 + 2.0 * I;  // 1 + 2i


6. Character Types
Type	Size	Purpose
char	1 byte	Stores characters
unsigned char	1 byte	Only positive values (0 to 255)
signed char	1 byte	Can be negative (-128 to 127)
wchar_t	Varies	Stores wide characters (Unicode)

#include <wchar.h>

wchar_t wch = L'ß';  // Stores Unicode characters




Summary Table
Type Category	Examples
Integer Types	short, int, long, long long
Fixed-Width Integers	int8_t, uint32_t, int64_t (from <stdint.h>)
Floating-Point Types	float, double, long double
Boolean Type	_Bool (or bool from <stdbool.h>)
Character Types	char, signed char, unsigned char, wchar_t
Void Type	void, void *
Complex Types	double _Complex, float _Complex
Generic Type	void * (can hold any type of pointer)


















