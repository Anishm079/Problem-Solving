#include<iostream>
using namespace std;

/*
	(|)				|			|
   ( | )			|			|
  (  |  )			|			|
 (   |   )			|			|
	 A				B			C

*/

//Here Task is to move N honoi boxes from src to dest with the help of hlpr
//only one box can be moved in each step
//big box should be placed over small box

void towerOfHonoi(int N, char A, char C, char B) {//src,dest,hlpr
	if (N == 0) {
		return;
	}
	towerOfHonoi(N - 1, A, B, C);
	cout << "from " << A << " to " << C<<endl;	  //src,hlpr,dest
	towerOfHonoi(N - 1, B, C, A);				  //hlpr,dest,src

}

int main() {
	int N; cin >> N;
	char A, B, C; cin >> A >> B >> C;
	towerOfHonoi(N, A, C, B);
}