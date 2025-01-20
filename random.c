#include <stdlib.h>
#include "random.h"

// generate a random character
char randchar() {
    return 'A' + (rand() % 26);
}