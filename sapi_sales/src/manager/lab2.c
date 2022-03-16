#include "lab2.h"

void testUserFunctionalities() {
    ///After lab2 this need to be commented because the birth year of the user is changed to BirthDate struct
    //Declaring user pointers

    int i=0, specialization, userType, gender, k, n, m;
    unsigned int birthYear, birthDay, birthMonth;
    char *name;
    User **user;
    printf("How many users?");
    scanf("%i", &n);
    user=(User**)calloc(n, sizeof(User*));
    srand(time(NULL));
    while(i<n){
        ///Creating users
        createUser(&user[i]);

        ///Fill with data
        specialization=rand()%6;
        userType=rand()%3;
        gender=rand()%2;
        birthYear=1950+rand()%(2022-1950);
        birthMonth=rand()%12;
        birthDay=rand()%30;
        k=3+rand()%(10-3);
        name=(char*)calloc(k+1, sizeof(char));
        for (int j = 0; j < k; ++j) {
            name[j]='a'+(rand()%25);
            if(j==0){
                name[j]-=32;
            }
        }
        m=3+rand()%(10-3);
        name=realloc(name, k+m+3* sizeof(char));
        name[k]=' ';
        for (int j = k+1; j < m+k+1 ; ++j) {
            name[j]='a'+(rand()%25);
            if(j==k+1){
                name[j]-=32;
            }
        }
        setUserData(user[i], name, userType, gender, specialization, birthYear, birthMonth, birthDay);
        ///Print users
        printUser(user[i]);

        ///Delete users
        deleteUser(&user[i]);
        i++;
        free(name);
    }
    free(user);
}

void testProductFunctionalities() {
    ///Create products
    Product *product1, *product2, *product3;
    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);

    ///Fill with data
    setProductData(product1, "Apple", FRUIT, 10, 12);
    setProductData(product2, "Mountain Dew", GROCERY, 13, 13);
    setProductData(product3, "Computer", OBJECT, 3, 2000);


    ///Print products
    printProduct(product1);
    printProduct(product2);
    printProduct(product3);

    ///Delete product
    deleteProduct(&product1);
    deleteProduct(&product2);
    deleteProduct(&product3);
}