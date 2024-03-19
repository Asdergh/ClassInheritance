#include"Circle.h"
#include"Triangle.h"
#include"Sphere.h"
#include"Cylinder.h"
#include"Square.h"
#include"TrianglePyramid.h"

int main()
{
	int tool;

	Circle A(1.23);
	Triangle B;
	Square C;
	
	Cylinder D;
	Sphere E;
	TrianglePyramid F;

	A.calculate_area();
	B.calculate_area();
	C.calculate_area();

	D.calculate_volume();
	E.calculate_volume();
	F.calculate_volume();




	int tool = A > B;
	int tool1 = A < B;
	int tool2 = A > C;
	int tool3 = A < C;

	int tool4 = D > F;
	int tool5 = D > E;
	int tool6 = D < F;
	int tool7 = D < E;

	int tool8 = (A == B);
	int tool9 = (A == C);
	int tool10 = (B == C);
	int tool11 = (D == F);
	int tool12 = (D == E);
	int tool13 = (E == F);

	A.show_info();
	B.show_info();
	C.show_info();
	D.show_info();
	E.show_info();
	F.show_info();
	

	return 0;
}