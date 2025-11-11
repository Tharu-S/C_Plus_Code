#include <iostream>
#include <string>
using namespace std;

int count=0;
int id[100];
string name[100];
int q[100];
float price[100];
int uId,dId;

void addItem() {
    cout << "\nEnter item Id: ";
    cin >> id[count];
    cin.ignore();
    cout << "Enter item name: ";
    getline(cin, name[count]);
    cout << "Enter Quantity: ";
    cin >> q[count];
    cout << "Enter Price: ";
    cin >> price[count];
    cout << "Item added successfully!\n\n";
    count = count+1;
}

void displayItem() {
    cout << "\n-------------------------------------------------\n";
    cout << " Id\t Name\t\t Quantity\t Price\n";
    cout << "----------------------------------------------------\n";
    for(int i=0; i<count; i++) {
        cout << id[i] << "\t" << name[i] << "\t\t" << q[i] << "\t" << price[i] << endl;
    }
    cout << "-----------------------------------------------------\n";
}

void updateItem() {
    cout << "Enter Item Id to Update: ";
    cin >> uId;
    for(int i=0; i<count; i++) {
        if(id[i]==uId) {
            cout << "Current Quantity: " << q[i];
            cout << "\nCurrent Price: " << price[i];
            cout << "\n\nEnter new Quantity: ";
            cin >> q[i];
            cout << "Enter new price: ";
            cin >> price[i];
            cout << "Item updated successfully!\n\n";
        }
    }
}

void deleteItem() {
    cout << "Enter Item ID to delete: ";
    cin >> dId;
    for(int i=0; i<count; i++) {
        if(id[i]==dId) {
            for(int j=i; j<count-1; j++) {
                id[j]=id[j+1];
                name[j]=name[j+1];
                q[j]=q[j+1];
                price[j]=price[j+1];
            }
            count--;
            cout << "Item deleted successfully!\n";
        }
    }
}

int main() {

    int choice;

    for( ; ; ) {

        cout << "\n======INVENTORY MANAGEMENT SYSTEM======\n";
        cout << "1.Add New Item\n";
        cout << "2.Display All Items\n";
        cout << "3.Update Item\n";
        cout << "4.Delete Item\n";
        cout << "5.Exit\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItem();
                break;
            case 3:
                updateItem();
                break;
            case 4:
                deleteItem();
                break;
            case 5:
                cout << "Exiting program. Thank You!\n";
                exit(0);
            default:
                cout << "Invalid choice! Try again. \n";
                break;
        }

    }

return 0;
}
