#include <string.h>

const char* greet(const char *language) {
    if (language == NULL) return "Welcome";
    else if (!strcmp(language, "english")) return "Welcome";
    else if (!strcmp(language, "czech")) return "Vitejte";
    else if (!strcmp(language, "danish")) return "Velkomst";
    else if (!strcmp(language, "dutch")) return "Welkom";
    else if (!strcmp(language, "estonian")) return "Tere tulemast";
    else if (!strcmp(language, "finnish")) return "Tervetuloa";
    else if (!strcmp(language, "flemish")) return "Welgekomen";
    else if (!strcmp(language, "french")) return "Bienvenue";
    else if (!strcmp(language, "german")) return "Willkommen";
    else if (!strcmp(language, "irish")) return "Failte";
    else if (!strcmp(language, "italian")) return "Benvenuto";
    else if (!strcmp(language, "latvian")) return "Gaidits";
    else if (!strcmp(language, "lithuanian")) return "Laukiamas";
    else if (!strcmp(language, "polish")) return "Witamy";
    else if (!strcmp(language, "spanish")) return "Bienvenido";
    else if (!strcmp(language, "swedish")) return "Valkommen";
    else if (!strcmp(language, "welsh")) return "Croeso";
    else return "Welcome";
}
