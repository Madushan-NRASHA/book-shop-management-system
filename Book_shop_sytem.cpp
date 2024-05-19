#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <conio.h>
#include <string>
int user();
using namespace std;
string get_stuId,get_stufName,get_stulName,get_stuBname,get_stuEmail;
string getstuId_del;
int get_choice;
ofstream file;
//show file data
class Showdata{
     public:
         //show student data
   string Showstudata(){
         std::ifstream file;
        file.open("students.txt");
        if (file.is_open()) {
             system("cls");
            std::string line;
            while (getline(file, line)) {
                std::cout << line << std::endl;
                cout<<""<<endl;
        }
    }
}       //show cource data
        string showCdata(){
            system("cls");
            cout<<"Web Development Course (Duration: 12 weeks, Price: $999)"<<endl;
            cout<<"Data Science Course (Duration: 16 weeks, Price: $1,499)"<<endl;
            cout<<"Cybersecurity Course (Duration: 20 weeks, Price: $1,999)"<<endl;
            cout<<"Full Stack Development Course (Duration: 24 weeks, Price: $2,499)"<<endl;
            cout<<" "<<endl;
        }
};
//Add student
class Addstudent{
    public:
    string addstudentdata(){
        file.open("students.txt", ios::app);
                 {
while (true)
        if (file.is_open()) {
        cout<<"if you want goto Main menu press q in student id"<<endl;
         cout<<"Enter student id"<<endl;
         cin >> get_stuId;
         if (get_stuId=="q")
         {
           break;
            user();
         }else
         {
            cout<<"Enter student first name"<<endl;
            cin >> get_stufName;
            cout<<"Enter student last name "<<endl;
            cin>>get_stulName;
            cout<<"Enter student birth date"<<endl;
            cin>>get_stuBname;
            cout<<"Enter student Email address"<<endl;
            cin>>get_stuEmail;
             file <<get_stuId+" "+get_stufName+" "+get_stulName+" "+get_stuBname+" "+get_stuEmail<<endl;

         }
        cout << "Line added successfully.\n";
        } else {
         cout << "Unable to open file.\n";
        }
    }
 }
};
//update student data
class Updateremovestudent{
public:
string updatestudent() {
    string filename = "students.txt";
    bool x=false;
    // Read the contents of the file into a vector
    vector<string> lines;
    ifstream infile(filename);
    string line;
    while (getline(infile, line)) {
        lines.push_back(line);
    }
    infile.close();

    // Ask for the index of the student to update
    string nu;
    cout << "Enter the index of the student you want to update: ";
    cin >> nu;
    int index = stoi(nu) - 1;
    if (index < 0 || index >= lines.size()) {
        cout << "Invalid index." << endl;

    }

    // Ask for the fields to update
    string first_name, last_name, birth_date, email;
    int field_choice;
    cout<<"###################################"<<endl;
    cout<<"# 1.Update Student First Name     #"<<endl;
    cout<<"# 2.Update Student Last Name      #"<<endl;
    cout<<"# 3.Update Student Birth Date     #"<<endl;
    cout<<"# 4.Update Student E-mail Address #"<<endl;
    cout<<"# 5.Exit                          #"<<endl;
    cout<<"###################################"<<endl;

    cin >> field_choice;

    // Update the chosen field
    switch (field_choice) {
        case 1:
            cout << "Enter the new first name: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, first_name);
            break;
        case 2:
            cout << "Enter the new last name: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, last_name);
            break;
        case 3:
            cout << "Enter the new birth date: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, birth_date);
            break;
        case 4:
            cout << "Enter the new email: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, email);
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid field choice." << endl;

    }

    // Parse the existing student record and update the chosen field
    stringstream ss(lines[index]);
    string old_first_name, old_last_name, old_birth_date, old_email;
    getline(ss, old_first_name, ',');
    getline(ss, old_last_name, ',');
    getline(ss, old_birth_date, ',');
    getline(ss, old_email, ',');
    if (field_choice == 1 && !first_name.empty()) {
        old_first_name = first_name;
    }
    else if (field_choice == 2 && !last_name.empty()) {
        old_last_name = last_name;
    }
    else if (field_choice == 3 && !birth_date.empty()) {
        old_birth_date = birth_date;
    }
    else if (field_choice == 4 && !email.empty()) {
        old_email = email;
    }

    // Construct the updated student record and replace the old record in the vector
    string updated_record = old_first_name + "," + old_last_name + "," + old_birth_date + "," + old_email;
    lines[index] = updated_record;

    // Write the updated data back to the file
    ofstream outfile(filename);
    for (const string& line : lines) {
        outfile << line << endl;
    }
    outfile.close();

    cout << "Student record updated successfully." << endl;
    cout<<"Do you Want to another change(yes press y else no press n)"<<endl;
    string getUchoice;
cin>>getUchoice;
if(getUchoice=="y"){
    x=true;
}else if(getUchoice=="n"){
    cout<<"Exit the system";
    user();
}
while(x){
      while (getline(infile, line)) {
        lines.push_back(line);
    }
    infile.close();

    // Ask for the index of the student to update
    string nu;
    cout << "Enter the index of the student you want to update: ";
    cin >> nu;
    int index = stoi(nu) - 1;
    if (index < 0 || index >= lines.size()) {
        cout << "Invalid index." << endl;

    }

    // Ask for the fields to update
    string first_name, last_name, birth_date, email;
    int field_choice;
    cout<<""<<endl;
    cout<<"###################################"<<endl;
    cout<<"# 1.Update Student First Name     #"<<endl;
    cout<<"# 2.Update Student Last Name      #"<<endl;
    cout<<"# 3.Update Student Birth Date     #"<<endl;
    cout<<"# 4.Update Student E-mail Address #"<<endl;
    cout<<"# 5.Exit                          #"<<endl;
    cout<<"###################################"<<endl;
    cin >> field_choice;

    // Update the chosen field
    switch (field_choice) {
        case 1:
            cout << "Enter the new first name: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, first_name);
            break;
        case 2:
            cout << "Enter the new last name: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, last_name);
            break;
        case 3:
            cout << "Enter the new birth date: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, birth_date);
            break;
        case 4:
            cout << "Enter the new email: ";
            cin.ignore();  // consume any leftover newline character
            getline(cin, email);
            break;
        case 5:
             cout<<"Exit the main menu";
            exit(0);
        default:
            cout << "Invalid field choice." << endl;

    }

    // Parse the existing student record and update the chosen field
    stringstream ss(lines[index]);
    string old_first_name, old_last_name, old_birth_date, old_email;
    getline(ss, old_first_name, ',');
    getline(ss, old_last_name, ',');
    getline(ss, old_birth_date, ',');
    getline(ss, old_email, ',');
    if (field_choice == 1 && !first_name.empty()) {
        old_first_name = first_name;
    }
    else if (field_choice == 2 && !last_name.empty()) {
        old_last_name = last_name;
    }
    else if (field_choice == 3 && !birth_date.empty()) {
        old_birth_date = birth_date;
    }
    else if (field_choice == 4 && !email.empty()) {
        old_email = email;
    }

    // Construct the updated student record and replace the old record in the vector
    string updated_record = old_first_name + "," + old_last_name + "," + old_birth_date + "," + old_email;
    lines[index] = updated_record;

    // Write the updated data back to the file
    ofstream outfile(filename);
    for (const string& line : lines) {
        outfile << line << endl;
    }
    outfile.close();

    cout << "Student record updated successfully." << endl;
    cout<<"Do you Want to another change(yes press y else no press n)"<<endl;
    string getUchoice;
cin>>getUchoice;
if(getUchoice=="y"){
    x=true;
}else if(getUchoice=="n"){
    cout<<"Exit the main menu"<<endl;
    user();

}
}
}

public:
    string deletestudent(){
    string fileName = "students.txt";
    cout<<"Enter student id you want to delete";
    cin>>getstuId_del;
    string nameToDelete = getstuId_del;
    vector<string> lines;

    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Error opening input file." << endl;
        //return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        // check if the line starts with the name to delete
        if (line.substr(0, nameToDelete.size()) == nameToDelete) {
            cout << "Line removed: " << line << endl;
        } else {
            lines.push_back(line);
        }
    }

    inputFile.close();

    ofstream outputFile(fileName);
    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;

    }

    for (auto l : lines) {
        outputFile << l << endl;
    }

    outputFile.close();

    cout << "Lines with name " << nameToDelete << " have been deleted from file " << fileName << endl;

    return 0;
    }
    };
int user(){
    bool y=false;
   cout<<"##########################"<<endl;
   cout<<"# 1.show cource data     #"<<endl;
   cout<<"# 2.show student data    #"<<endl;
   cout<<"# 3.Add  student data    #"<<endl;
   cout<<"# 4.update student data  #"<<endl;
   cout<<"# 5.Remove student data  #"<<endl;
   cout<<"# 6.Exit                 #"<<endl;
   cout<<"##########################"<<endl;
   cout<<"Enter your choice";
   cin>>get_choice;
    switch(get_choice) {
   case 1:
        Showdata e1;
        e1.showCdata();
        //system("cls");
    break;
   case 2:
        e1.Showstudata();
        //system("cls");
    break;
     case 3:
        Addstudent e2;
        e2.addstudentdata();
        system("cls");
    break;
     case 4:
         Updateremovestudent e3;
         e3.updatestudent();
        system("cls");
        break;
     case 5:
        e3.deletestudent();
        system("cls");
         break;
     case 6:
        exit(0);
}
    cout<<"Enter your choice(Return Mainmenu press m exit the system press q)";
    string getUdecide;
cin>>getUdecide;
if(getUdecide=="m"){
    cout<<"Return to the main menu"<<endl;
    system("cls");
    y=true;
}else if(getUdecide=="n"){
    cout<<"Exit the System";
    exit(0);
}
   while (y){
     cout<<"##########################"<<endl;
   cout<<"# 1.show cource data     #"<<endl;
   cout<<"# 2.show student data    #"<<endl;
   cout<<"# 3.Add  student data    #"<<endl;
   cout<<"# 4.update student data  #"<<endl;
   cout<<"# 5.Remove student data  #"<<endl;
   cout<<"# 6.Exit                 #"<<endl;
   cout<<"##########################"<<endl;
   cout<<"Enter your choice";
    cin>>get_choice;
    switch(get_choice) {
   case 1:
        Showdata e1;
        e1.showCdata();
    break;
   case 2:
        e1.Showstudata();
    break;
     case 3:
        Addstudent e2;
        e2.addstudentdata();
    break;
     case 4:
         Updateremovestudent e3;
         e3.updatestudent();
        break;
     case 5:
        e3.deletestudent();
         break;
     case 6:
        exit(0);

}
        cout<<"Enter your choice(Return Mainmenu press m exit the system press q)";
    string getUdecide;
cin>>getUdecide;
if(getUdecide=="m"){
    cout<<"Return to the main menu";
     system("cls");
    y=true;
}else if(getUdecide=="n"){
    cout<<"Exit the System";
    exit(0);
}


   }
    cin>>get_choice;

};


int login() {
    string username = "admin";
    string password = "password";
    string input_username;
    string input_password;
    int attempts = 0;
    bool logged_in = false;

    cout << "Welcome to the Login System!" << endl;

    while (attempts < 3 && !logged_in) {
        cout << "Please enter your username: ";
        cin >> input_username;

        cout << "Please enter your password: ";
        char c;
        input_password = "";
        while ((c = _getch()) != '\r') {
            if (c == '\b') {
                if (input_password.size() > 0) {
                    input_password.pop_back();
                    cout << "\b \b";
                }
            } else {
                input_password.push_back(c);
                cout << "*";
            }
        }
        cout << endl;

        if (input_username == username && input_password == password) {
            cout << "Login successful!" << endl;
		 user();
		 system("cls");
            logged_in = true;
        } else {
            cout << "Incorrect username or password. Please try again." << endl;
            attempts++;
        }
    }

    if (attempts == 3 && !logged_in) {
        cout << "Maximum login attempts exceeded. Access denied." << endl;
    }

    return 0;
}


int main() {

   login();
};








