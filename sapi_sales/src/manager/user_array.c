//
// Created by Robi on 3/9/2022.
//

#include "user_array.h"

void createUserArray(UserArray **UserArray, unsigned int maxUsers) {

    *UserArray=(User**)malloc(1*sizeof(User*));


}

void deleteUserArray(UserArray **UserArray) {

    free(UserArray);

}

bool addNewUser(UserArray* userArray, User* newUser){



}

User* getUserAtPosition(UserArray* userArray, int position){

}