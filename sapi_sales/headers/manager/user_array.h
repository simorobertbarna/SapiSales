#ifndef SAPISALES_USER_ARRAY_H
#define SAPISALES_USER_ARRAY_H

#include "user.h"
#include <stdbool.h>

typedef struct{

    User** Users;
    int maxUsers;
    int NumberOfUsers;

}UserArray;

void createUserArray(UserArray **UserArray, unsigned int maxUsers);
void deleteUserArray(UserArray **UserArray);
bool addNewUser(UserArray* userArray, User* newUser);
User* getUserAtPosition(UserArray* userArray, int position);
void searchByID(UserArray* userArray, int id);

#endif //SAPISALES_USER_ARRAY_H
