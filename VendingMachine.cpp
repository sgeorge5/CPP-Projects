#include <iostream>  
#include <fstream>
#include <string>

using namespace std;  

class VendingMachine{      
    public:
    int     Pepsi,       Sprite,     Water,      Lemonade, Soda;     
    float pricePepsi, priceSprite, priceWater, priceLemonade, priceSoda;  

    ifstream reader;
    string line, substring, password;   
    bool found;

    VendingMachine(){		
        Pepsi = 10;
        Sprite = 10;
        Water = 10;
        Lemonade = 10;
        Soda = 10;
        pricePepsi = 1.25;
        priceSprite = 1.35;
        priceWater = 1.00;
        priceLemonade = 2.00;
        priceSoda = 1.20;
    } 

    void PurchaseDrink(){         
        int drink, choice, payment;
        float change;
        int num;

        cout << "Please choose the Drink you would like to purchase: " << endl;
        cout << "Select 1 for Pepsi      - $1.25" << endl;
        cout << "Select 2 for Sprite     - $1.35" << endl;
        cout << "Select 3 for Water      - $1.00" << endl;
        cout << "Select 4 for lemonade   - $2.00" << endl;
        cout << "Select 4 for Soda       - $1.20" << endl;
        cout << "Press an empty return to cancel." << endl;
        cout << "Input: ";
        cin >> drink;

        switch (drink){       
            case 1:
                cout << "You selected Pepsi as your drink"<< endl;
                cout << "Enter 1 to continue with your payment of $5"<<endl;
                cout << "Press an empty return to cancel." << endl;
                cin >> choice;
                switch (choice){
                    case 1: payment = 5;
                        if (Pepsi > 0){
                            change = payment - pricePepsi;
                            cout << "Here is your change: $" << change << endl;
                            cout << "Enjoy your Drink!" << endl;
                            Pepsi--;
                        } else {
                            cout << "Sorry, no more Pepsi left. Come back later!" << endl;
                            cout << "Here is your money back: $" << payment << endl;
                        } break;
                    default: cout << "Cancelling...Payment Option" << endl; exit(1); 
                break;
                }
                break;
                case 2:
                
                cout << "You selected Sprite as your drink"<< endl;
                cout << "Enter 1 to continue with your payment of $6"<<endl;
                cout << "Press an empty return to cancel." << endl;
                cin >> choice;
                switch (choice){
                    case 1: payment = 6;
                        if (Sprite > 0){
                            change = payment - priceSprite;
                            cout << "Here is your change: $" << change << endl;
                            cout << "Enjoy your Drink!" << endl;
                            Sprite--;
                        } else {
                            cout << "Sorry, no more sprite left. Come back later!" << endl;
                            cout << "Here is your money back: $" << payment << endl;
                        } break;
                    default: cout << "Cancelling...Payment Option" << endl; exit(1); 
                    break;
                } 
                break;
                case 3:
                cout << "You selected Water as your drink"<< endl;
                cout << "Enter 1 to continue with your payment of $7"<<endl;
                cout << "Press an empty return to cancel." << endl;
                cin >> choice;
                switch (choice){
                    case 1: payment = 7;
                        if (Water > 0){
                            change = payment - priceWater;
                            cout << "Here is your change: $" << change << endl;
                            cout << "Enjoy your Drink!" << endl;
                            Water--;
                        } else {
                            cout << "Sorry, no more Water left. Come back later!" << endl;
                            cout << "Here is your money back: $" << payment << endl;
                        } break;
                    default: cout << "Cancelling...Payment Option" << endl; exit(1); 
                    break;
                }
                break;
                case 4:
                cout << "You selected Lemonade as your drink"<< endl;
                cout << "Enter 1 to continue with your payment of $8"<<endl;
                cout << "Press an empty return to cancel." << endl;
                cin >> choice;
                switch (choice){
                    case 1: payment = 8;
                        if (Lemonade > 0){
                            change = payment - priceLemonade;
                            cout << "Here is your change: $" << change << endl;
                            cout << "Enjoy your Drink!" << endl;
                            Lemonade--;
                        } else {
                            cout << "Sorry, no more Lemonade left. Come back later!" << endl;
                            cout << "Here is your money back: $" << payment << endl;
                        } break;
                    default: cout << "Cancelling...Payment Option" << endl; exit(1); 
                    break;
                }
                break;
                case 5:
                cout << "You selected Soda as your drink"<< endl;
                cout << "Enter 1 to continue with your payment of $9"<<endl;
                cout << "Press an empty return to cancel." << endl;
                cin >> choice;
                switch (choice){
                    case 1: payment = 9;
                        if (Soda > 0){
                            change = payment - priceSoda;
                            cout << "Here is your change: $" << change << endl;
                            cout << "Enjoy your Drink!" << endl;
                            Soda--;
                        } else {
                            cout << "Sorry, no more Soda left. Come back later!" << endl;
                            cout << "Here is your money back: $" << payment << endl;
                        } break;
                    default: cout << "Cancelling...Payment Option" << endl; exit(1); 
                }
        }
    }

    void checkStock(){              
        cout << "Pepsi:     " << Pepsi << " ==> $" << pricePepsi << endl;
        cout << "Sprite:    " << Sprite << " ==> $" << priceSprite << endl;
        cout << "Water:     " << Water << " ==> $" << priceWater << endl;
        cout << "Lemonade:  " << Lemonade << " ==> $" << priceLemonade << endl;
        cout << "Soda:      " << Soda << " ==> $" << priceSoda << endl;
    }

    void adminRefill(){             
        reader.open("password.txt");

        cout << "Please enter the password to restock the machine:" << endl;
        cin >> password;

        if (reader.is_open()){
            while(getline(reader, line)){
                substring = line.substr(0, line.find(" "));
                if (line.find(password) != -1){
                    cout << "Machine restocked." << endl;
                    Pepsi = 10;
                    Sprite = 10;
                    Water = 10;
                    Lemonade = 10;
                    Soda = 10;
                    found = true;
                }
                if (!found) {
                    cout << "Incorrect password." << endl;
                }
            }  
        }
        reader.close();
    }
};

int main(){
    int option;
    ofstream writer;            
    VendingMachine vm;

    writer.open("password.txt");
    writer << "Stevens1870" << endl;
    writer.close();

    while(1){
        cout << " " << endl;
        cout << "Press 1 to select from a list of Drinks." << endl;
        cout << "Press 2 to see the stock and prices of Drinks." << endl;
        cout << "Press 3 to get an admin to restock." << endl;
        cout << "Press anything else to quit." << endl;
        cout << " " << endl;
        cout << "Input: ";
        cin >> option;

        switch (option){
            case 1: cout << "=================================" << endl;
                    vm.PurchaseDrink();
                    cout << "=================================" << endl; break;
            case 2: cout << "=================================" << endl;
                    vm.checkStock();
                    cout << "=================================" << endl; break;
            case 3: cout << "=================================" << endl;
                    vm.adminRefill();
                    cout << "=================================" << endl; break;
            default: cout << "Shutting down."; exit(1);

            return 0;
        }
    }
}