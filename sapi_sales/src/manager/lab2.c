#include "lab2.h"

void testUserFunctionalities() {
    //AFter lab2 this need to be commented because the birth year of the user is changed to BirthDate struct
    /*///Declaring user pointers
    User *user1, *user2, *user3;

     //Creating users
     createUser(&user1);
     createUser(&user2);
     createUser(&user3);

    ///Fill with data
     setUserData(user1, "John Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 2003);
     setUserData(user2, "Jane Austin", TEACHER, FEMALE, ENGINEERING 1996);
     setUserData(user3, "John Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 2003);

     //Print users
     printUser(user1, CON);
     printUser(user2, CON);
     printUser(user3, CON);

     //Delete users
     deleteUser(&user1);
     deleteUser(&user2);
     deleteUser(&user3);
}
     */

void testProductFunctionalities() {

    //Create products
    Product *product1 = createProduct("MS1", "Apple", FRUIT, 10);
    Product *product2 = createProduct("MS2", "Book", SCHOOL, 4);
    Product *product3 = createProduct("MS3", "Tomato", GROCERY, 20);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);

    deleteProduct(product1);
    deleteProduct(product2);
    deleteProduct(product3);
}