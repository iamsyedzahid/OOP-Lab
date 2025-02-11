#include <iostream>
using namespace std;

class StationeryShop {
private:
    string items[100];
    double prices[100];
    int itemCount;

public:
    StationeryShop() {
        itemCount = 0;
    }

    void addItem() {
        if (itemCount < 100) {
            cout << "Enter the item name: ";
            cin >> items[itemCount];
            cout << "Enter the price for " << items[itemCount] << ": ";
            cin >> prices[itemCount];
            itemCount++;
            cout << "Item added successfully!" << endl;
        } else {
            cout << "Sorry, the shop is full, cannot add more items." << endl;
        }
    }

    void retrieveItems() {
        if (itemCount == 0) {
            cout << "No items available in the shop." << endl;
            return;
        }
        cout << "List of items in the shop:" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << i + 1 << ". " << items[i] << endl;
        }
    }

    void editPrice() {
        int index;
        cout << "Enter the item number to edit the price: ";
        cin >> index;
        if (index < 1 || index > itemCount) {
            cout << "Invalid item number!" << endl;
        } else {
            cout << "Enter the new price for " << items[index - 1] << ": ";
            cin >> prices[index - 1];
            cout << "Price updated successfully!" << endl;
        }
    }

    void viewItemsAndPrices() {
        if (itemCount == 0) {
            cout << "No items available in the shop." << endl;
            return;
        }
        cout << "Items and their prices:" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << items[i] << " $" << prices[i] << endl;
        }
    }

    void generateReceipt() {
        if (itemCount == 0) {
            cout << "No items available in the shop." << endl;
            return;
        }

        int purchasedItems[100];
        int itemNumber, quantity;
        double total = 0;

        cout << "Enter the number of different items purchased: ";
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Enter item number (1 to " << itemCount << "): ";
            cin >> itemNumber;
            if (itemNumber < 1 || itemNumber > itemCount) {
                cout << "Invalid item number!" << endl;
                i--;
                continue;
            }
            cout << "Enter quantity of " << items[itemNumber - 1] << ": ";
            cin >> quantity;
            purchasedItems[i] = itemNumber - 1;
            total += prices[itemNumber - 1] * quantity;
        }

        cout << "\nReceipt:" << endl;
        cout << "---------------------------------" << endl;
        cout << "Item Name        Quantity   Price   Total" << endl;
        cout << "---------------------------------" << endl;

        for (int i = 0; i < n; i++) {
            int itemIndex = purchasedItems[i];
            cout << items[itemIndex] << "         1          $" << prices[itemIndex] 
                 << "     $" << prices[itemIndex] << endl;
        }

        cout << "---------------------------------" << endl;
        cout << "Total: $" << total << endl;
    }
};

int main() {
    StationeryShop shop;
    int choice;

    do {
        cout << "\n--- Stationery Shop Menu ---" << endl;
        cout << "1. Add item and price" << endl;
        cout << "2. Retrieve list of items" << endl;
        cout << "3. Edit item price" << endl;
        cout << "4. View items and prices" << endl;
        cout << "5. Generate receipt" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shop.addItem();
                break;
            case 2:
                shop.retrieveItems();
                break;
            case 3:
                shop.editPrice();
                break;
            case 4:
                shop.viewItemsAndPrices();
                break;
            case 5:
                shop.generateReceipt();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
