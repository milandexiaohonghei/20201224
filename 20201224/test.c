#include<stdio.h>
#include<windows.h>

//实现一个对整形数组的冒泡排序

void Bubblesort(int arr[], int nums){

	for (int i = 0; i < nums - 1; ++i){
		int s = 0;
		for (int j = 1; j < nums - i; ++j){
			if (arr[j - 1] > arr[j]){
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			    s = 1;
			}
		}
		if (!s)
			return;	
	}
}

void reverse(int arr[], int nums){
	int i = 0;
	int j = nums - 1;
	while (i <= j){
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		i++;
		j--;
	}


}

int main(){

	int arr[] = { 2, 8, 7, 10, 15, 20, 54, 45, 23,65, };
	int nums = sizeof(arr) / sizeof(int);
	reverse(arr, nums);
	for (int i = 0; i < nums; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



//int main(){
//	int arr[10] = { 2, 7, 8, 10, 15, 20, 54, 45, 65, 25 };
//	int(*p)[10] = &arr ;
//	printf("%p\n", arr);
//	printf("%p\n",arr + 1);
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	system("pause");
//	return 0;
//
//
//}