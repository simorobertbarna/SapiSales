//
// Created by Robi on 3/1/2022.
//

#ifndef SAPISALES_USER_H
#define SAPISALES_USER_H

#include <stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"

typedef struct{
    unsigned int day;
    unsigned int month;
    unsigned int year
}Date;

enum UserType {
    STUDENT,
    TEACHER
};

enum Gender {
    FEMALE,
    MALE
};

enum Specialization {
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,

    MATHEMATICS_INFORMATICS,
    ENGINEERING
};


typedef struct {
    unsigned int id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Specialization specialization;
    Date date;

}User;

char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpecialization(enum Specialization type);

User* createUser(
        char* name;
        enum UserType type;
        enum Gender gender;
        enum Specialization specialization;
        unsigned int birthYear);

void printUser(User* user);

#endif //SAPISALES_USER_H
