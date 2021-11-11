#include <iostream>

typedef struct
{
  int Mohacs; 
} ImportantDates_t;

static const ImportantDates_t G_ImportantDates __attribute__((section("__TEXT,__data"))) = {
  1956
};

int main()
{
  return G_ImportantDates.Mohacs;
}
