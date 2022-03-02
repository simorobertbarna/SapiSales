//
// Created by Robi on 3/1/2022.
//

#ifndef SAPISALES_PRODUCT_H
#define SAPISALES_PRODUCT_H

#include <stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"

enum ProductType {
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};


typedef struct {
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
} Product;

char* getProductType(enum ProductType type);

void createProduct(Product** product);

void CreateProduct(Product* product, char id[10], char name[20], enum ProductType type, unsigned int amount, double price);
void printProduct(Product* product);

#endif //SAPISALES_PRODUCT_H
