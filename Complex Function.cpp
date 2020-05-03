#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

class complexope {
	private:
	double real, imag;
	public:
	complexope (double re=0, double im=0) {
		real = re;
		imag = im;
	}
	complexope operator - (complexope const &obj1) {
		complexope obj2;
		obj2 = real - obj1.real;
		obj2.imag = imag - obj1.imag;
		return obj2;
	}
	complexope operator + (complexope const &obj1) {
		complexope obj2;
		obj2 = real + obj1.real;
		obj2.imag = imag + obj1.imag;
		return obj2;

	}
	complexope operator *(complexope &obj1) {
		complexope obj2;
		obj2 = ((real * obj1.real)-(imag*obj1.imag));
		obj2.imag = ((real*obj1.imag) + (imag*obj1.real));

		return obj2;

	}

	complexope operator /(complexope &obj1) {
		complexope obj2;
		obj2 = (((real*obj1.real) + (imag*obj1.imag)) / ((obj1.real * obj1.real) + (obj1.imag*obj1.imag)));
		obj2.imag = (((imag*obj1.real) - (real*obj1.imag)) / ((obj1.real * obj1.real) + (obj1.imag*obj1.imag)));

		return obj2;

	}
	void print() {
		
			cout << real << " + " << imag << "i" << endl;
	}

	

		 

};

void  subtraction() {
	double reala, realb, imaga, imagb;
	cout << "Enter first complex number" << endl;
	cin >> reala >> imaga;
	cout << "Enter second complex number" << endl;
	cin >> realb >> imagb;
	complexope comp1(reala, imaga), comp2(realb, imagb);
	cout << "The Result of Subraction is: ";
	complexope comp3 = comp1 - comp2;
	comp3.print();
	 

}



void  addition() {
	double reala, realb, imaga, imagb;
	cout << "You chose Subraction" << endl;
	cout << "NOTE: PLEASE ENTER REAL PART FIRST AND THEN IMAGINARY PART" << endl;
	cout << "Enter first complex number" << endl;
	cin >> reala >> imaga;
	cout << "Enter second complex number" << endl;
	cin >> realb >> imagb;
	complexope comp1(reala, imaga), comp2(realb, imagb);
	cout << "The Result of Addition is: ";
	complexope comp3 = comp1 + comp2;
	comp3.print();


}

void  multiplication() {
	double reala, realb, imaga, imagb;
	cout << "You chose Subraction" << endl;
	cout << "NOTE: PLEASE ENTER REAL PART FIRST AND THEN IMAGINARY PART" << endl;
	cout << "Enter first complex number" << endl;
	cin >> reala >> imaga;
	cout << "Enter second complex number" << endl;
	cin >> realb >> imagb;
	complexope comp1(reala, imaga), comp2(realb, imagb);
	cout << "The Result of Multiplication is: ";
	complexope comp3 = comp1 * comp2;
	comp3.print();


}

void  division() {
	double reala, realb, imaga, imagb;
	cout << "You chose Subraction" << endl;
	cout << "NOTE: PLEASE ENTER REAL PART FIRST AND THEN IMAGINARY PART" << endl;
	cout << "Enter first complex number" << endl;
	cin >> reala >> imaga;
	cout << "Enter second complex number" << endl;
	cin >> realb >> imagb;
	complexope comp1(reala, imaga), comp2(realb, imagb);
	cout << "The Result of Division is: ";
	complexope comp3 = comp1 / comp2;
	comp3.print();
}

void  poltorec() {
	double value, angle, imag, real;
	cout << "You chose Polar to Rectangular" << endl;
	cout << "Enter R" << endl;
	cin >> value;
	cout << "Enter Angle" << endl;
	cin >> angle;
	real = value * cosh(angle);
	imag = value * sinh(angle);
	cout << "The Rectangular Form is :" << real << " + " << imag << "i";
}

void  rectopol() {
	double value, angle, imag, real;
	cout << "You chose Rectangular to Polar" << endl;
	cout << "Enter Real Value" << endl;
	cin >> real;
	cout << "Enter Imaginary Value" << endl;
	cin >> imag;
	value = sqrt((real*real) + (imag*imag));
	angle = tan(imag / real);
	cout << "The Polar Form is : r=" << value << " and angle=" << angle << " deg";
}

void  conjugate() {
	double imag, real;
	cout << "You chose Conjgate Function" << endl;
	cout << "Enter Real Value" << endl;
	cin >> real;
	cout << "Enter Imaginary Value" << endl;
	cin >> imag;
	complex<double> conjuct(real,imag);
	cout << "The Conjugate Form is : " << conj(conjuct);
	
	
}

void  absolute() {
	double imag, real;
	cout << "You chose Conjgate Function" << endl;
	cout << "Enter Real Value" << endl;
	cin >> real;
	cout << "Enter Imaginary Value" << endl;
	cin >> imag;
	complex<double> absolute(real, imag);
	cout << abs(absolute);
	cout << "The Absolute Form is : " << abs(absolute);
}

int main() {
	string condition;
	cout << "WEEK 1 - Complex Number Operation" << endl;
	cout << "This Program does following operations:" << endl;
	cout << "Addition - +" << endl;
	cout << "Subtraction - -" << endl;
	cout << "Multiplication - *" << endl;
	cout << "Division - /" << endl;
	cout << "Rectangular to Polar Form - Pol" << endl;
	cout << "Polar Form to Rectangular - Rec" << endl;
	cout << "Conjugate - Conj" << endl;
	cout << "Modulus - Mod" << endl;
	cout << "Please choose a keyword denoted next to operation to start" << endl;
	cin >> condition;
	if (condition == "+") {
		addition();
	}
	else if (condition == "-") {
		subtraction();
	}
	else if (condition == "*") {
		multiplication();
	}
	else if (condition == "/") {
		division();
	}
	else if (condition == "Pol") {
		rectopol();
	}
	else if (condition == "Rec") {
		poltorec();
	}
	else if (condition == "Conj") {
		conjugate();
	}
	else if (condition == "Mod") {
		absolute();
	}
	else {
		cout << "Invalid choice, Please try again!";
	}


	system("pause");
}
