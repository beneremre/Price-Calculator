#include <iostream>
#include <string>

using namespace std; 

int main ()
{	
		double x,z,a,c,total,remaining,amount ;
		int y,t,b,d ;
		
	

	string name, price;
		
		cout << "Welcome to the restaurant" << endl << "Please enter your name :" << endl;
		cin >> name; // the user will enter the name here

		cout << "Hey " << name << " Please enter the amount of money you have: " << endl;
		cin >> amount; //the user will enter the amount of money he/she has

		cout << name  << " Please enter the unit price and the amount for items below " << endl ; 

		cout << "Soup: " ;
		cin >> x >> y;  //x is the unit price of soup, y is amount of soap

		cout << "Salad: " ; //z is the unit price of salad, t is amount of salad
		cin >> z >> t ;

		cout << "Main Course: " ;//a is the unit price of main course, b is the amount of main courses
		cin >> a >> b ;

		cout << "Dessert: " ;//c is the unit price of dessert, d is the amount of dessert
		cin >> c >> d ;

		total = ((x*y) + (z*t) + (a*b) + (c*d) ) ; // calculation of total amount without taxes and tip

		cout << "Welcome " << name << "!" << endl ;
		cout << y << " Soup(s), " << t << " Salad(s), " << b << " Main Course(s), " << d << " Dessert(s), " << "is " << total << endl;
		remaining = (amount - (total * 1.188)) ; // calculation of remaining money
		cout << "You will pay " << total * 1.188 << " Then your remaining money will be " << remaining << "." << endl; 
		
		
		
				
return 0;		
		
}		
		
		
		
		
		
		
		
		