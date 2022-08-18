#include <iostream>
#include <string>
#include <fstream>

using namespace std;
const int tedad = 100;
struct contact {

	string Cfname[tedad] = {};
	string Clname[tedad] = {};
	string Cemail[tedad] = {};
	string Cphonenumber[tedad] = {};

};
contact b;
char fname[20];
char lname[20];
char phonenumber[15];
char email[30];

void addcontact()
{
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
		if (b.Cfname[i] == "\0")
		{
			b.Cfname[i] = fname;
			b.Clname[i] = lname;
			b.Cphonenumber[i] = phonenumber;
			b.Cemail[i] = email;
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
	for (int i = 0; i < tedad; i++)
	{
		if (b.Cfname[i] != "\0")
		{
			counter++;
			cout << "  " << counter << "     " << b.Cfname[i] << "      " << b.Clname[i] << "         " << b.Cphonenumber[i] << "            " << b.Cemail[i] << "                          " << endl;
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
		if (b.Cfname[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << b.Cfname[i] << "      " << b.Clname[i] << "         " << b.Cphonenumber[i] << "            " << b.Cemail[i] << "                          " << endl;;

		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (b.Clname[i] == search)
		{
			counter++;
			cout << "  " << counter << b.Cfname[i] << "      " << b.Clname[i] << "         " << b.Cphonenumber[i] << "            " << b.Cemail[i] << "                          " << endl;;

		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (b.Cphonenumber[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << b.Cfname[i] << "      " << b.Clname[i] << "         " << b.Cphonenumber[i] << "            " << b.Cemail[i] << "                          " << endl;;

		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (b.Cemail[i] == search)
		{
			counter++;
			cout << "  " << counter << "      " << b.Cfname[i] << "      " << b.Clname[i] << "         " << b.Cphonenumber[i] << "            " << b.Cemail[i] << "                          " << endl;;
		}

	}
	if (counter == 0)
	{
		cout << "no contact found" << endl;
	}

}
void editcontact(string search) {
	int counter = 0;
	for (int i = 0; i < tedad; i++)
	{

		if (b.Cfname[i] == search)
		{
			counter++;
			cout << " enter new first name: " << endl << "........................................................................................................................\n";
			cin.getline(fname, 50);

			b.Cfname[i] = fname;
			cout << "update successfull" << endl;
			break;
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (b.Clname[i] == search)
		{
			counter++;
			cout << " enter new last name: " << endl << "........................................................................................................................\n";
			cin.getline(lname, 50);

			b.Clname[i] == lname;
			cout << "update successfull" << endl;
			break;
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (b.Cphonenumber[i] == search)
		{
			counter++;
			cout << " enter new phone number: " << endl << "........................................................................................................................\n";
			cin.getline(phonenumber, 50);

			b.Cphonenumber[i] == phonenumber;
			cout << "update successfull" << endl;
			break;
		}

	}
	for (int i = 0; i < tedad; i++)
	{

		if (b.Cemail[i] == search)
		{
			counter++;
			cout << " enter new email: " << endl << "........................................................................................................................\n";
			cin.getline(email, 50);

			b.Cemail[i] == email;
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
	struct contact b;
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
			getline(cin, fname);//why?
			//cin.getline(fname, 50);
			//ولی اینو میزنم دیگه توی فرست نیم ها سرچ نمی کنه
			csearch(fname);
			break;
		case 4:
			cin.ignore();
			cout << "right the wrong part:" << endl << "..................................................." << endl;
			getline(cin, fname);//why again?
			//cin.getline(fname, 50);
			//ولی اینو میزنم دیگه توی فرست نیم ها سرچ نمی کنه
			editcontact(fname);
			break;
		case 5:
			break;
		}

	} while (option != 5);
}
