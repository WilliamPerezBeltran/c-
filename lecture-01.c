#include <stdio.h>
int main() {


	void insertion(){
	
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
		int array[10] = {1,3,5,7,9};
		int k = 2, n = 5;
		int i,j;

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




	//insertion();
	deletion();






	return 0;
}
