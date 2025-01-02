#include<iostream>
using namespace std;
void sort(int arr[],int i,int j){
	int val = arr[i];
	int l = i;
	int r = j;
	
	
}
void sort(int arr[],int size){
	sort(arr,0,size);
}

int main(){

		int arr[] = {12,31,32,32};
		int size = sizeof(arr)/sizeof(arr[0]);
		sort(arr,size);
		return 0;
	
	
}
