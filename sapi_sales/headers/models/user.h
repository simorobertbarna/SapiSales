#ifndef SAPISALES_PROJECT_USER_H
#define SAPISALES_PROJECT_USER_H

#include <stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"
#include "../array/product_array.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum UserType{
    STUDENT,
    TEACHER
};

enum Gender{
    FEMALE,
    MALE
};

enum Spetialization{
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,
    MATHEMATICS_INFORMATICS,
    ENGINEERING
};

typedef struct {
    int year;
    int month;
    int day;
}BirthDate;

typedef struct {
    unsigned int id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Spetialization specialization;
    BirthDate birthDate;
    ProductArray* myProducts;
}User;

bool leapyear(int year);
BirthDate birthDateGenerate();
char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpetialization(enum Spetialization type);
void createUser(User** user);
void setUserData(User *user, char* name, enum UserType type,enum Gender gender, enum Spetialization spetialization, BirthDate birthDate);
void printUser(User* user,char* destination);
void deleteUser(User** user);
void addNewProductToUser(User *user,Product *newProduct,int position);
void printMyProducts(User *user,char *destination);
void readUserProducts(User *user);

#endif //SAPISALES_PROJECT_USER_H
