#include<iostream>
using namespace std;
void sort(int arr[],int size){
	//小张添加的注释
    int temp = 0;
    for (int i=0;i<size-1;++i){
		for(int j=0;j<size-1-j;++j){
			if(arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}

	}
	
}

int main(){
<<<<<<< HEAD
		
=======
		// 阿亮提交注释
>>>>>>> 00b163943eb36f5c3b963405ff60fcd2857e95ea
		int arr[] = {12,31,32,32};
		int size = sizeof(arr)/sizeof(arr[0]);
		sort(arr,size);
		return 0;
	
	
}
