#include<iostream>
using namespace std;
//defining template
template<typename T>
void sortArray(T arr[],int size){
	for(int i = 0;i < size - 1;i++){
		for(int j = i + 1;j < size;j++){
			if(arr[i] > arr[j]){
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template<typename T>
void printArray(T arr[], int size){
	for(int i = 0;i < size;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	//for int type value
	int intArr[] = {4,5,1,3,2};
	int size = sizeof(intArr) / sizeof(intArr[0]);
	
	cout << "Original integer array: ";
    printArray(intArr, size);

    sortArray(intArr, size);

    cout << "\nSorted integer array: ";
    printArray(intArr, size);
		
	return 0;
}
