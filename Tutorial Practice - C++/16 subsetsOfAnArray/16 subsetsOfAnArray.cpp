#include<iostream>
using namespace std;


void subsetsOfAnArray(int arr[],int N) {
	int size = *(&arr + 1) - arr + 1;
	//cout << size;
	for(int i=0;i<(1<<N);i++){      //RUN FOR 0 TO 2^N-1 ---WERE COMBINATIONS OF A SET OF N ELEMENTS WILL RESULT IN 1 TO 2^N ROWS
        for(int j=0;j<N;j++){       //RUN FOR ALL ELEMENTS IN A SET FOR EACH ROW
            if(i&(1<<j)){           //IF BOTH BECOME TRUE WITH ANDED RESULT THEN ITS A UNIQUE COMBINATION
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
	}

}
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	subsetsOfAnArray(arr,N);
}
