#include "../headers/errors.h"

void printErrorMessage(enum ErrorType errorType){
    switch (errorType) {
        case MEMORY_ALLOCATION:
            printf("Bad memory allocation error\n");
            break;
        case FILE_NOT_FOUND:
            printf("File not found exception\n");
            break;
        case NULL_POINTER_EXCEPTION:
            printf("Null pointer exception\n");
            break;
        default:
            printf("Error occured\n");
            break;
    }
    exit(-1);
}