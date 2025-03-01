#include <iostream>

using namespace std;

#define size 10
// code gave error, so i asked gpt the error and it was related to order of classes, and calling them

class MenuItem {
public:
    string name;
    double price;

    MenuItem() : name(""), price(0.0) {}
    MenuItem(string n, double p) : name(n), price(p) {}
};

class Payment {
public:
    double amount;

    Payment(double amt) : amount(amt) {}

    void showPayment() const {
        cout << "Total Amount Due: $" << amount << "\n";
    }
};

class Menu {
private:
    MenuItem items[size];
    int itemCount;

public:
    Menu() : itemCount(0) {}

    void addItem(string name, double price)
    {
        if (itemCount < size) {
            items[itemCount++] = MenuItem(name, price); // jaha jaga ho waha add krdo naya item
        }
        else
        {
            cout << "Menu is full! Cannot add more items.\n"; // wrna boldo k jaga nhi hai
        }
    }

    void removeItem(string name)
    {
        for (int i = 0; i < itemCount; i++) // jaha tak items array ka size  hai waha tak loop chalao
        {
            if (items[i].name == name) // agar naam match hogaya tou remove krna
            {
                for (int j = i; j < itemCount - 1; j++)
                {
                    items[j] = items[j + 1]; // jaha mila hai usko next walay se replace
                }
                itemCount--;
                cout << name << " removed from menu.\n";
                return;
            }
        }
        cout << "Item not found on the menu.\n";
    }

    void displayMenu() const
    {
        cout << "Menu:\n";
        for (int i = 0; i < itemCount; i++)
        {
            cout << "- " << items[i].name << " $" << items[i].price << endl;
        }
    }

    MenuItem getItems(int index) {
        if (index >= 0 && index < itemCount)
        {
            return items[index];
        }
        return MenuItem(); // item with name and price 0.0 return hoga
    }

    int getItemCount() const // getter constant as asked by theory teacher sir basit
    {
        return itemCount;
    }
};

class Order {
private:
    MenuItem orderedItems[size];
    int orderCount;
    Payment payment;

public:
    Order(MenuItem items[], int count) : orderCount(count), payment(calculateTotal(items, count))
    {
        for (int i = 0; i < count; i++)
        {
            orderedItems[i] = items[i];
        }
    }

    static double calculateTotal(MenuItem items[], int count) // same method for each object
    {
        double total = 0;
        for (int i = 0; i < count; i++)
        {
            total += items[i].price; // total price 
        }
        return total;
    }

    void showOrder() const
    {
        cout << "Order Summary:\n";
        for (int i = 0; i < orderCount; i++)
        {
            cout << "- " << orderedItems[i].name << " $" << orderedItems[i].price << "\n";
        }
        payment.showPayment();
    }
};

int main()
{
    Menu menu;
    menu.addItem("Burger", 500);
    menu.addItem("Pizza", 1000);
    menu.addItem("Pasta", 220);
    menu.displayMenu();

    MenuItem selectedItems[2] = {menu.getItems(0), menu.getItems(2)};
    Order order(selectedItems, 2);
    order.showOrder();

    return 0;
}
