#include <iostream>
#include "dog.h"
#include "cat.h"
int main(int argc, char ** argv)
{
     (void)argc; 
     (void)argv;
    Dog dog;
    Cat cat;

    dog.dog_bark();
    printf("\n================================\n");
    cat.cat_bark();
    printf("\n================================\n");
  // Initialize ROS2

    printf("hello world cpp02_topic package\n");
  return 0;
}
