#include <iostream>
#include <string>

using namespace std;

struct Product {
    int productID;
    string productName;
    float productPrice;
    int productQuantity;
};

Product p[100];  
int pCount = 0;  

void addProduct(string name, float price, int quantity) {
    if (pCount < 100) {
        p[pCount].productID = pCount + 1;
        p[pCount].productName = name;
        p[pCount].productPrice = price;
        p[pCount].productQuantity = quantity;
        pCount++;
        cout << "Product added successfully!" << endl;
    } else {
        cout << "Product array is full!" << endl;
    }
}

void info(int ID) {
    for (int i = 0; i < pCount; i++) {
        if (p[i].productID == ID) {
            cout << "Product ID: " << p[i].productID << endl;
            cout << "Product Name: " << p[i].productName << endl;
            cout << "Product Price: " << p[i].productPrice << endl;
            cout << "Product Quantity: " << p[i].productQuantity << endl;
            return;
        }
    }
    cout << "Product ID not found." << endl;
}

void updateInfo(int existingID, float newPrice, int newQuantity) {
    for (int i = 0; i < pCount; i++) {
        if (p[i].productID == existingID) {
            p[i].productPrice = newPrice;
            p[i].productQuantity = newQuantity;
            cout << "Product updated successfully!" << endl;
            return;
        }
    }
    cout << "Product ID not found." << endl;
}

void remove(int ID) {
    for (int i = 0; i < pCount; i++) {
        if (p[i].productID == ID) {
            for (int j = i; j < pCount - 1; j++) {
                p[j] = p[j + 1];
            }
            pCount--;
            cout << "Product removed successfully!" << endl;
            return;
        }
    }
    cout << "Product ID not found." << endl;
}

int main() {
    addProduct("Laptop", 1000.50, 10);
    addProduct("Smartphone", 499.99, 25);
    addProduct("Headphones", 79.99, 50);
    
    info(1); 
    
    updateInfo(2, 459.99, 30); 
    info(3);
    remove(3); 
    
    info(2); 

    return 0;
}
