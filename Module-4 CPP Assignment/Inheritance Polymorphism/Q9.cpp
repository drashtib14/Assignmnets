#include<iostream>
using namespace std;
class Matrix{
	private:
		int size;
		int *arr;
	public:
		//using constructor
		Matrix(int s){
			this->size = s;
			this->arr = new int[size];
		}
		//using destructor
		~Matrix(){
			delete[] arr;
		}
		void inputElements(){
			cout << "Enter " << size << " elements: ";
			for(int i = 0;i < size;i++){
					cin >> arr[i];
			}
		}
		// to display
		void display(){
			for(int i = 0;i < size;i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}

		Matrix operator+(Matrix &m){
			Matrix result(size);
			for(int i = 0;i < size;i++){
				result.arr[i] = this->arr[i] + m.arr[i];
			}
			return result;
		}
};

int main(){
	int n;
	cout << "Enter the size of the matrices: ";
	cin >> n;
	
	Matrix m1(n);
	Matrix m2(n);
	
	cout << "Matrix 1: " << endl;
	m1.inputElements();
	
	cout << "Matrix 2: " << endl;
	m2.inputElements();
	
	Matrix m3 = m1 + m2;
	
	cout << "Result Matrix after Addition: " << endl;
	m3.display();
		
	return 0;
}
