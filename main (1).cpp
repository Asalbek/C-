//U2310226   Asalbek Sa'diyev

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to write data to files
void writeToFile() {
    ofstream libraryFile("Library.txt", ios::app);
    ofstream authorFile("Author.txt", ios::app); 

    int id;
    string name;
    string author;
    int publicationYear;
    char choice;

    do {
        for(int i = 0; i < 3; i++) {
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            libraryFile << id << " " << name << endl;
        }

        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Publication Year: ";
        cin >> publicationYear;
        authorFile << author << " " << publicationYear << endl;

        cout << "Do you want to add more information? (Y/N): ";
        cin >> choice;
    } while(choice == 'Y' || choice == 'y');

    libraryFile.close();
    authorFile.close();
}

// Function to read data from files
void readFromFile() {
    ifstream libraryFile("Library.txt");
    ifstream authorFile("Author.txt");

    string line;
    while (getline(libraryFile, line)) {
        cout << line << endl;
    }

    while (getline(authorFile, line)) {
        cout << line << endl;
    }

    libraryFile.close();
    authorFile.close();
}

int main() {
    writeToFile();
    readFromFile();
    return 0;
}
