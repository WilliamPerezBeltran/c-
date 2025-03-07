#include <stdio.h>
int main() {


	void insertion(){
		print("--- insertion ---");
	
		int array[10] = {1,3,5,7,9};
	int item = 10;
	int n = 5, k = 3;
	int i = 0, j = n;

	printf("Old array: \n");
	for (i = 0; i<n ; i++){
		printf("array[%d] => %d \n", i, array[i]);
	}

	while(j >= k){
		array[j+1] = array[j];
		j = j - 1;

	}
	array[k] = item; 
	n = n+1;
	printf("New array: \n");
	for (i = 0; i<n ; i++){
		printf("array[%d] => %d \n", i, array[i]);
	}

	}

	void deletion(){
		print("--- deletion ---");
	
		int array[10] = {1,3,5,7,9};
		int k = 2, n = 5;
		int i=0,j;

		printf("Old array: \n");
		for(i = 0;i<n;i++){
			printf("array[%d] => %d \n",i,array[i]);
		}

		j = k;
		while(j < n ){
			array[j] = array[j+1];
			j = j+1;

		}
		printf("New array: \n");
		n = n-1;
		for(i = 0;i<n;i++){
			printf("array[%d] => %d \n",i,array[i]);
		}
		

		
	}




	void deletion_(){
		printf("--- deletion_ ---");

		int arr[10] = {1,2,3,4,5};
		int i,j;
		int n = 5;
		int k = 3;
		printf("array viejo ");
		for(i = 0;i<n;i++){
			printf("arr[%d] => %d \n ",i,arr[i]);
		}

		j = k;
		while(j<n){
			arr[j] = arr[j+1];
			j = j+1;
		}
		n = n-1;
		printf("Array nuevo ");
		for(i = 0;i<n;i++){
			printf("arr[%d] => %d \n ",i,arr[i]);
		}

	}

	void insertion_(){
		printf("--- insertion_ ---");
		
		int arr_[10] = {1,2,3,4,5};
		int n = 5;
		int i,j;
		int k = 3;
		int element = 10;

		printf("Array viejo: ");
		for(i = 0;i<n;i++){
			printf("arr[%d] => %d \n ",i,arr_[i]);
		}

		j = n;
		while(j>=k){
			arr_[j+1] = arr_[j];
			j = j-1;


		}
		arr_[k] = element; 
		n = n+1;
		printf("Array nuevo: ");
		for(i = 0;i<n;i++){
			printf("arr[%d] => %d \n ",i,arr_[i]);
		}



	}

	void fahrenheit(){
		/*
		 *Fahrenheit    20    40   60   80  100  120  140  160  180  200  220  240  260  280  300  
		   Celsius     -17    -6    4   15   26   37   48   60   71   82   93  104  115  126  137  148  
		  */

		int fahr,cels;
		int lower, upper, step;
		lower = 0;
		upper = 300;
		step = 20;

		printf("Fahrengeit  Celsius \n ");
		while(lower <= upper){
			//cels = (5*(fahr-32))/9;
			cels = (5*(lower-32))/9;
			printf("%d           %d \n",lower,cels);
			//printf("%d => \n ",lower);
			lower = lower + step;

			
				

		}



	}


//	insertion();
//	deletion();
//	deletion_();
//	insertion_();
	fahrenheit();





	return 0;
}
