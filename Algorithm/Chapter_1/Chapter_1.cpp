// Chapter_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void insertion_sort(int[],int);
void merge_sort(int[],int);
void shell_sort(int[],int);

int main(int argc, char* argv[])
{
	int value[] = {31,41,59,26,41,58};
	int length = sizeof(value)/sizeof(value[0]);
	
	shell_sort(value,length);

	return 0;
}

void insertion_sort(int value[],int length){

	for(int i=1;i<length;i++){
		int compare = value[i];
		int j;
		for(j=i;j>0&&compare<value[j-1];j--){
			value[j] = value[j-1];
		}
		value[j] = compare;
	}

	for(int k=0;k<length;k++){
		printf("%d\n",value[k]);
	}
}

void merge_sort(int value[],int length){
	
}

void shell_sort(int value[],int length){
	for(int grap=(length-1)/2+1;grap>1;grap=(grap-1)/2+1){
		for(int i=0;i<length-grap;i++){
			if(value[i]>value[i+grap]){
				int tmp = value[i];
				value[i] = value[i+grap];
				value[i+grap] = tmp;
			}
		}
	}

	for(int k=0;k<length;k++){
		printf("%d\n",value[k]);
	}
}


