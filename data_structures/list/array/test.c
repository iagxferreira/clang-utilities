//
// Created by Iago on 21/12/2020.
//
#include <stdio.h>
#include "array.h"

int main(){
    Array *users = new_array();
    printf("Array is empty? %d \n", array_is_empty(users));
    printf("Array length: %d \n", array_length(users));
    free_array(users);
}