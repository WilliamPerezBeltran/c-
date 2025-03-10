#include <stdio.h>

void hello(){
	int n = 5;
	int i = 0 ;
	while(i<n){
		puts ("hello");
		i++;
	}
}

int main(int argc, char** argv){

	puts("hello, world!");

// Use a for loop to puts out Hello World! five times.

	int i = 0;
	for(i=0; i<5; i++){
		puts("hello");
	}
	
	puts("***");
	puts("***");
// › Use a while loop to puts out Hello World! five times.

	i = 0;
	while(i<5){
		puts("hello");	
		i++;
	}



// › Declare a function that outputs Hello World! n number of times. Call this from main.
	puts("***");
	puts("***");

	hello();


// › What built in types are there other than the ones listed?
	puts("***");
	puts("***");
	puts("The answer is in response.md file");


// › What other conditional operators are there other than greater than >, and less than <?
	puts("***");
	puts("***");

/*
 *
 * >=
 * <=
 * ==
 * !=
 *
 * */
// › What other mathematical operators are there other than add +, and subtract -?
//› What other mathematical operators are there other than add +, and subtract -?
	puts("***");
	puts("***");
	/*
	   multipplication *
	   division /
	   modulo %
	   increment ++
	   decrement --

	*/

// › What is the += operator, and how does it work?
	puts("***");
	puts("***");
	/*
	 * it is short cut for increment statement instead of doing x  = x + 1 you can performance this action 
	shorter doing x++
	*/


//›What is the do loop, and how does it work?
	puts("***");
	puts("***");
	/*
	 * loop is a iterator in C language:
	 *  for (declaration;condition;increment of variable){
	 *  	performance repetition
	 *
	 *  }
	*/



//› What is the switch statement and how does it work?
	puts("***");
	puts("***");
	/*
	 * Estructura de control del lenguaje c que permite ejecutar opciones de 
	 * bloque de codigo segun el valor de una expresion o valor 
	 *  }
	*/
	int pivote = 2;
	switch(pivote ){
		case 1:
			puts("uno \n");
			break;
		case 2:
			puts("dos \n");
			break;
		case 3:
			puts("tres \n");
			break;
		default: puts("el default del switch");




	}




//› What is the break keyword and what does it do?
	puts("***");
	puts("***");


//› What is the continue keyword and what does it do?
	puts("***");
	puts("***");


//› What does the typedef keyword do exactly?
	puts("***");
	puts("***");









	return 0;
}






















