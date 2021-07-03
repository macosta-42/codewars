#include <string.h>

const char* greet(const char *name, const char *owner) {
    return strcmp(name, owner) ? "Hello guest" : "Hello boss";
}