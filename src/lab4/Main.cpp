#include "Vector.h"

int main(void) {
	try {
		Vector<double>vd(5);
		for (int i = 0; i < vd.size(); i++) { vd[i] = i + 0.67; }
		vd.print();
		Vector<int>vi(3);
		for (int i = 0; i < vi.size(); i++) { vi[i] = i; }
		vi.print();
		Vector<int>viv(3);
		for (int i = 0; i < viv.size()-1; i++) { viv[i] = i + 3; }
		viv.print();

		printf("\n");

		Vector<Mysatur>vec(5);
		vec[0] = 123;
		vec.print();

		printf("\n");

		Vector<Vector<int>> vi2(2); // (4,3)
		vi2[0] = vi;
		vi2[1] = viv;
		for (int i = 0; i < vi2.size(); i++) {
			vi2[i].print();
			std::cout << " ";
		}
		printf("\n");

		Vector<Vector<int>> vi3(4, 3);
		for (int i = 0; i < vi3.size(); i++) {
			vi3[i].print();
			std::cout << " ";
		}

		printf("\n");
		Vector<int>vectorr(-2);
	}

	catch (int code){
		if (code == 1) printf("Wrong size");
		if (code == 2) printf("No memory");
		if (code == 3) printf("Wrong index");
		if (code == 4) printf("Different sizes");
	}
	
}