//
// Created by Devan on 2/11/2024.
//

#ifndef PURCHASEPROJECT_ITEMTOPURCHASE_H
#define PURCHASEPROJECT_ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(string name);
    string GetName() const;
    void SetPrice(int price);
    int GetPrice() const;
    void SetQuantity(int quantity);
    int GetQuantity() const;

private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif //PURCHASEPROJECT_ITEMTOPURCHASE_H
