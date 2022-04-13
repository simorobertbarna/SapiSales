//
//
#include <stdio.h>
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

void searchByID(UserArray* userArray, int id){

    for (int i = 0; i <userArray->maxUsers; ++i) {
        if(userArray->Users == id){
             printf("%d", i);
        }
    }

}