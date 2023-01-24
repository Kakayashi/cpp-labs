#include <iostream>
#include <regex>
#include <fstream>

using namespace std;

int main()
{
    /*
    //zad1
    string line="asdasdasd+12.1123asda+12.3dasww-0.12sdasdsad";
    regex regPattern("[-+]?[0-9]*\\.?[0-9]+");
    smatch res;
    regex_search(line,res,regPattern);

    cout<<"Regex_search: "<<endl;
    cout << "Liczba dopasowan:" << res.size()<<endl;
    cout << "res.str(): " << res.str() << endl;
    cout << "res.length(): " << res.length() << endl;
    cout << "res.position(): " << res.position() << endl;
    cout<<"res.prefix: "<<res.prefix().str()<<endl;
    cout<<"res.suffix: "<<res.suffix().str()<<endl;
    cout << endl;


    //zad2
     regex time_regex("([01][0-9]|2[0-3]):[0-5][0-9](:[0-5][0-9])?");
     string test_times[] = { "15:45", "15:45:30", "5:5:5", "25:15:30","6:30","06:1","06:01","06:01:1","06:12:12","06:12:122" };
     for (const string& time : test_times) {
        if (regex_match(time, time_regex)) {
            cout << time << " jest prawidlowym zapisem godziny" << endl;
        } else {
            cout << time << " jest nieprawidlowym zapisem godziny" << endl;
        }
    }


    //zad3
    regex street_regex("^[A-Za-z ]+$");
    regex zipcode_regex("^\\d{2}-\\d{3}$");
    regex house_number_regex("^\\d+[A-Za-z]?$");
    regex apartment_number_regex("^\\d{0,3}[A-Za-z]?$");

    string street = "Main St";
    string zipcode = "12-345";
    string houseNumber = "103";
    string apartment_number = "3A";

      if (regex_match(street, street_regex)) {
        cout << "Poprwana ulica" <<endl;
      }else cout<<"Niepoprawna ulica"<<endl;

      if (regex_match(zipcode, zipcode_regex)) {
        cout << "Poprwana kod pocztowy" <<endl;
      }else cout<<"Niepoprawny kod pocztowy"<<endl;

      if (regex_match(houseNumber, house_number_regex)) {
        cout << "Poprwana nr. domu" <<endl;
      }else cout<<"Niepoprawny nr. domu"<<endl;


      if (regex_match(apartment_number, apartment_number_regex)) {
        cout << "Poprwana nr. domu" <<endl;
      }else cout<<"Niepoprawna nr. domu"<<endl;
    */

    string name, surname, age, phone, email;
    regex name_regex("^[a-zA-Z]+$");
    regex surname_regex("^([a-zA-Z]+-?)+$");
    regex age_regex("^(0?[1-9]|[1-9][0-9])$");
    regex phone_regex("^[1-9][0-9]{8}$");
    regex email_regex("^[a-zA-Z0-9._-]+@[a-zA-Z0-9]+\\.[a-zA-Z]{2,}$");

    cout << "Enter name: ";
    cin >> name;
    if (!regex_match(name, name_regex)) {
        cout << "Invalid name" << endl;
        return 1;
    }

    cout << "Enter surname: ";
    cin >> surname;
    if (!regex_match(surname, surname_regex)) {
        cout << "Invalid surname" << endl;
        return 1;
    }

    cout << "Enter age: ";
    cin >> age;
    if (!regex_match(age, age_regex)) {
        cout << "Invalid age" << endl;
        return 1;
    }

    cout << "Enter phone number: ";
    cin >> phone;
    if (!regex_match(phone, phone_regex)) {
        cout << "Invalid phone number" << endl;
        return 1;
    }

    cout << "Enter email: ";
    cin >> email;
    if (!regex_match(email, email_regex)) {
        cout << "Invalid email" << endl;
        return 1;
    }

    ofstream file;
    file.open("data.txt", ios_base::app);
    file << name << ";" << surname << ";" << age << ";" << phone << ";" << email << endl;
    file.close();
    cout << "Data saved to file." << endl;

    return 0;
}


