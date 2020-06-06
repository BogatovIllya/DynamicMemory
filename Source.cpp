#include <iostream>
using namespace std;

void chess_board(int n) {

		for (int i = 0; i < n; ++i, cout << endl)
			for (int j = 0; j < n; ++j) 
				if ((j % 2 == 0 && i % 2 == 0) || (j % 2 != 0 && i % 2 != 0)) cout << " +";	
				else cout << " -";
				
}

void main() {
	chess_board(5);
}




























//for (int i = 0; i < n; ++i) {				//горизонт
//	if (i % 2) {
//		for (int j = 0; j < n; ++j) {		//вертикаль +
//			if (j % 2) {
//				cout << " +";
//			}
//			else cout << " -";
//		}
//	}
//	else {
//		for (int j = 0; j < n; ++j) {		//вертикаль -
//			if (j % 2) {
//				cout << " -";
//			}
//			else cout << " +";
//		}
//	}
//	cout << endl;
//}











//for (int i = 0, j = 0, type = true; j < n; i++) {
//	if (type) {
//		cout << "+";
//		type = false;
//	}
//	if (!type) {
//		cout << "-";
//		type = true;
//	}
//	if (i = n - 1) {
//		if (type) {
//			cout << "+";
//			type = false;
//		}
//		if (!type) {
//			cout << "-";
//			type = true;
//		}
//		i = 0;
//		++j;
//	}
//}