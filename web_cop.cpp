#include<iostream>
#include<conio.h>
using namespace std ;

main()
{
	struct date
	{
		short int dd, mm, yy;

	}join_date = {19, 12, 2006};

	date *date_ptr;
	date_ptr = &join_date;

	cout<<"Printing the structure elements using the structure variable\n";
	cout<<"dd = "<<join_date.dd<<", mm = "<<join_date.mm<<", yy = "<<join_date.yy<<"\n";
	cout<<"\nPrinting the structure elements using the structure pointer\n";
	cout<<"dd = "<<date_ptr->dd<<", mm = "<<date_ptr->mm<<", yy = "<<date_ptr->yy<<"\n";

	getch();
}
