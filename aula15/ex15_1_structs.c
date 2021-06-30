#include <stdio.h>
#include <string.h>

struct Car {
  char manufacturer[50];
  char model[50];
  int year;
  char color[50];
  float price;
};

// void func(struct Car car);

void funcPtr(struct Car *carPtr);

int main() {
  struct Car car, *carPtr;

  carPtr = &car;

  printf("Manufacturer: ");
  scanf("%[^\n]%*c", car.manufacturer);
  strcpy(carPtr->manufacturer, car.manufacturer);

  printf("Model: ");
  scanf("%[^\n]%*c", car.model);
  strcpy(carPtr->model, car.model);

  printf("Color: ");
  scanf("%[^\n]%*c", car.color);
  strcpy(carPtr->color, car.color);

  printf("Year: ");
  scanf("%d", &car.year);
  carPtr->year = car.year;

  printf("Price: ");
  scanf("%f", &car.price);
  carPtr->price = car.price;

  // printf("Manufacturer: %s, Model: %s, Year: %d, Color: %s, Price: %.2f", car.manufacturer, car.model, car.year, car.color, car.price);
  printf("Manufacturer: %s, Model: %s, Year: %d, Color: %s, Price: %.2f", carPtr->manufacturer, carPtr->model, carPtr->year, carPtr->color, carPtr->price);

  // func(car);
  funcPtr(carPtr);
}

// void func(struct Car car) {
//   if(!strcmp(car.manufacturer, "Chevrolet")) {
//     strcpy(car.manufacturer, "GM");
//   }

//   if(car.year < 2000) {
//     car.year = 2000;
//   }

//   printf("Manufacturer: %s, Model: %s, Year: %d, Color: %s, Price: %.2f", car.manufacturer, car.model, car.year, car.color, car.price);
// }

void funcPtr(struct Car *carPtr) {
  if(!strcmp((carPtr->manufacturer), "Chevrolet")) {
    strcpy((carPtr->manufacturer), "GM");
  }

  if(carPtr->year < 2000) {
    carPtr->year = 2000;
  }

  printf("Manufacturer: %s, Model: %s, Year: %d, Color: %s, Price: %.2f", carPtr->manufacturer, carPtr->model, carPtr->year, carPtr->color, carPtr->price);
}
