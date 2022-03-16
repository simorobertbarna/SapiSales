//#include "product_stack.h"
#include "../../headers/stack/product_stack.h"


void createProductStack(ProductStack **productStack, unsigned int capacity) {


}

void push(ProductStack *productStack, Product *product) {

    if(stackIsFull(productStack)) return;
    productStack->products[++productStack->top]=product;
    printf("%d pushed to stack\n", productStack->products[productStack->top]);
}

void pop(ProductStack *productStack) {

    if(stackIsEmpty(productStack)) return;


}

Product *top(ProductStack *productStack) {


    return NULL;
}

bool stackIsEmpty(ProductStack *productStack) {
    return 0;
}

bool stackIsFull(ProductStack *productStack) {
    return 0;
}

void deleteProductStack(ProductStack **productStack) {

}
