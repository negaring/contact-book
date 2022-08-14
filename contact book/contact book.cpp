#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int tedad = 30;

string Cfname[tedad] = {};
string Clname[tedad] = {};
string Cemail[tedad] = {};
string Cphonenumber[tedad] = {};

void addcontact()
{
	char fname[20];
	char lname[20];
	char phonenumber[15];
	char email[30];
	cout << "fisrt name:" << endl;
	cin >> fname;
	cout << "last name: " << endl;
	cin >> lname;
	cout << "email:" << endl;
	cin >> email;
	cout << "phone number:" << endl;
	cin >> phonenumber;

	for (int i = 0; i < tedad; i++)
	{
		if (Cfname[i] == "\0")
		{
			Cfname[i] = fname;
			Clname[i] = lname;
			Cphonenumber[i] = phonenumber;
			Cemail[i] = email;
			cout << "name:" << " " << fname << lname << endl;
			cout << "phone number:" << " " << phonenumber << endl;
			cout << "email:" << " " << email << endl;
			break;
		}

	}
}

void listrecord()
{
	system("cls");
	cout << "list:" << endl;
	int counter = 0;
	cout << "no.   |first name      | last name        | phone number         | email          " << endl << "...........................................................................\n";
	for (int x = 0; x < tedad; x++)
	{
		if (Cfname[x] != "\0")
		{
			counter++;
			cout << "  " << counter << "     " << Cfname[x] << "      " << Clname[x] << "         " << Cphonenumber[x] << "            " << Cemail[x] << "                          " << endl;

		}
	}
	if (counter == 0)
	{
		cout << "no contact found" << endl;

	}
}

void csearch(string search)
{

	system("cls");
	cout << "results:" << endl;
	int counter = 0;
	for (int i = 0; i < tedad; i++)
	{
		cout << "no.   |first name      | last name        | phone number         | email          " << endl << ".................................................................................\n";
		break;
		if (Cfname[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << Cfname[i] << "       " << Clname[i] << "     " << Cphonenumber[i] << "   " << Cemail[i] << endl;
			
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (Clname[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << Cfname[i] << "       " << Clname[i] << "     " << Cphonenumber[i] << "   " << Cemail[i] << endl;
			
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (Cphonenumber[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << Cfname[i] << "       " << Clname[i] << "     " << Cphonenumber[i] << "   " << Cemail[i] << endl;
			
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (Cemail[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << Cfname[i] << "       " << Clname[i] << "     " << Cphonenumber[i] << "   " << Cemail[i] << endl;
			
		}

	}
	if (counter == 0)
	{
		cout << "no contact found" << endl;
	}

}
void editcontact(string search) {
	char fname[20];
	char lname[20];
	char phonenumber[15];
	char email[30];

	int counter = 0;
	for (int i = 0; i < tedad; i++)
	{

		if (Cfname[i] == search)
		{
			counter++;
			cout << " enter new first name: " << endl << "........................................................................................................................\n";
			cin.getline(fname, 50);

			Cfname[i] = fname;
			cout << "update successfull" << endl;
			break;
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (Clname[i] == search)
		{
			counter++;
			cout << " enter new last name: " << endl << "........................................................................................................................\n";
			cin.getline(lname, 50);

			Clname[i] = lname;
			cout << "update successfull" << endl;
			break;
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (Cphonenumber[i] == search)
		{
			counter++;
			cout << " enter new phone number: " << endl << "........................................................................................................................\n";
			cin.getline(phonenumber, 50);

			Cphonenumber[i] = phonenumber;
			cout << "update successfull" << endl;
			break;
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (Cemail[i] == search)
		{
			counter++;
			cout << " enter new email: " << endl << "........................................................................................................................\n";
			cin.getline(email, 50);

			Cemail[i] = email;
			cout << "update successfull" << endl;
			break;
		}

	}
	if (counter == 0)
	{
		cout << "no contact found" << endl;
	}
	
}
int main() {

	cout << "menu: ";
	int option;
	string fname;
	system("cls");
	do {

		cout << "1_ add contact" << endl;
		cout << "2_contact list" << endl;
		cout << "3_search" << endl;
		cout << "4_ edit contact" << endl;
		cout << "5_exit" << endl;
		cin >> option;
		switch (option) //ino az ye video to maktab khone didam fahmidam chie vali kolli balad nistam
		{
		case 1: addcontact(); {
			system("cls");
			break;
		}
		case 2: listrecord(); {
			break;
		}
		case 3:
			cin.ignore();
			cout << "search: " << "   " << endl;
			getline(cin, fname);
			csearch(fname);
			break;
		case 4:
			cin.ignore();
			cout << "right the wrong part:" << endl << "..................................................." << endl;
			getline(cin, fname);
			editcontact(fname);
			break;
		case 5:
			break;
		}
	} while (option != 5);



}
//مشکلات:اول اینکه توی سرچ فقط یکی رو نشون میده دوما اینکه موقع ادیت کانتکت اگر دو کانتک با یک بخش مشابه داشته باشیم 
//نمی دونم باید چیکار کنم و چه شکلی کانتکت مورد نظر رو انتخاب کنم