#include "product.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

char* getProductType(enum ProductType type) {
    switch (type) {
        case GROCERY:
            return "Grocery";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";
    }
}

void *CreateProduct(char *id, char *name, enum ProductType type, unsigned int amount, double price) {
    Product* newProduct = malloc(sizeof(Product));
    strcpy(newProduct->id, id);
    strcpy(newProduct->name, name);
    newProduct->type = type;
    newProduct->amount = amount;
    newProduct->creationDate = time(NULL);
    newProduct->price = price;

    return newProduct;
}

void printProduct(Product *product) {
    printf("%s details:\n"
           "\t - ID: %s\n"
           "\t - TYPE: %s\n"
           "\t - AMOUNT: %u\n"
           "\t - CREATION DATE: %ld\n"
           product->name,
           product->id,
           getProductType(product->type),
           product->amount,
           product->creationDate
           product->price);
}