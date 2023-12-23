#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 10;
int currentIndex = 0;

class contact{
    public:
    string firstName;
    string lastName;
    string phoneNumber;
    string email;

    void printContacts() {
        cout<< firstName << " " << lastName << " " <<  phoneNumber << " " << email << '\n';
        return;
        }

};


contact Book[SIZE];

void add(string firstName, string lastName, string phoneNumber, string email, contact arr[]){

	if(currentIndex >= 10){
		cout << "Contact Book doesnt have an entry yet!\n";
		return;
	}


	arr[currentIndex].firstName = firstName;
	arr[currentIndex].lastName = lastName;
	arr[currentIndex].phoneNumber = phoneNumber;
    arr[currentIndex].email = email;
	currentIndex++;	

}

void removeContact(contact arr[]){
    int c;
    cout << "Enter 1 to remove the last contact you entered\nEnter 2 to remove any specific contact\n";
    cin >> c;
	if(currentIndex != 0){
        if(c == 1){
            arr[currentIndex - 1].printContacts();
            cout << "was removed from the contacts.\n";
            currentIndex--;
        }
        else if(c == 2){
            string n;
            cout << "Ente the last name of the person to delete the contact\n";
            cin >> n;
            for(int i = 0; i < currentIndex; i++){
                if(arr[i].lastName == n){
                    for(int j = i; j < (currentIndex - 1); j++){
                        arr[i].lastName = arr[j+1].lastName;
                        cout << "was removed from the contacts.\n";//still working on this (search and delete specific contact)
                    }
                }
            }
        }
        
	}

    else if(currentIndex == 0){
        cout << "Contact Book doesnt have an entry yet!\n";
		return;
    }


    /*if(currentIndex==0){
		cout << "Contact Book doesnt have an entry yet!\n";
		return;
	}
	arr[currentIndex-1].printContacts();
	cout << "was removed from the contact book.\n";
    currentIndex--;*/
}

void searchContact(contact arr[]){
    string n;
    cout << "Enter the first name, last name or a phone number to sarch the contact: ";
    cin >> n;

    for(int i = 0; i < currentIndex; i++){
		if(arr[i].firstName == n || arr[i].lastName == n || arr[i].phoneNumber == n){
            cout<< arr[i].firstName << " " << arr[i].lastName << " " <<  arr[i].phoneNumber << " " << arr[i].email << '\n';
            }
        
        /*else{
            cout << "Please enter the correct spelling or this contact with the entered name hasnt been saved yet!\n";
        }*/
	}
}

void printContacts(contact arr[]){
    if(currentIndex == 0){
		cout << "Contact Book doesnt have an entry yet!\n";
		return;
	}

	for(int i = 0; i < currentIndex; i++){
        /*cout<< "First Name" << " | " << "Last Name" << " | " << "Phone Number" << " | " << "Email" <<'\n';
        cout<< "----------" << " | " << "---------" << " | " << "------------" << " | " << "-----" <<'\n';*/
		arr[i].printContacts();
	}

}

void write(contact arr[]){
	if(currentIndex == 0){
		cout << "Contact Book doesnt have an entry yet!\n";
		return;
	}


	ofstream writer;
	writer.open("contacts.txt", ios::out);
	if(writer.is_open()){	
		int choice;
		cout << "choose a contact to write to file by entering its place in the book 1 to " << currentIndex << ": ";
		cin >> choice;
		choice--;
		writer << arr[choice].firstName << " " << arr[choice].lastName << " " << arr[choice].phoneNumber << " " << arr[choice].email <<'\n';
		writer.close();	
	}
}

int main(){



	int choice;
	string firstName, lastName, email, phoneNumber;
	while(true){
		cout << "\nEnter a preffered option - \n" << "Enter 1 to add a new contact\n" << "Enter 2 to print the contact book\n" << "Enter 3 to write to file\n" << "Enter 4 to remove the contact\n" << "Enter 5 to search a contact by name\n" << "Press any other key to quit\n";
		cin >> choice;
		switch(choice){
			case 1:
				cout << "Enter the first name: ";
                cin >> firstName;
                cout << "Enter the last name: ";
                cin >> lastName;
                cout << "Enter the phone number: ";
                cin >> phoneNumber;
                cout << "Enter the email: ";
                cin >> email;
                add(firstName, lastName, phoneNumber, email, Book);
				break;
			case 2:
				printContacts(Book);
				break;
			case 3:
				write(Book);
				break;
			case 4:
				removeContact(Book);
				break;
            case 5:
                searchContact(Book);
			default:  
				return 0; 
				break;
		}

	}
	return 0;

}