#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *HTMLGenA(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 12, sizeof(char));

    sprintf(dst, "<a>%s</a>", innerHTML);
    return dst;
}

char *HTMLGenB(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 12, sizeof(char));

    sprintf(dst, "<b>%s</b>", innerHTML);
    return dst;
}

char *HTMLGenBody(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 18, sizeof(char));

    sprintf(dst, "<body>%s</body>", innerHTML);
    return dst;
}

char *HTMLGenDiv(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 16, sizeof(char));

    sprintf(dst, "<div>%s</div>", innerHTML);
    return dst;
}

char *HTMLGenSpan(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 18, sizeof(char));

    sprintf(dst, "<span>%s</span>", innerHTML);
    return dst;
}

char *HTMLGenTitle(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 20, sizeof(char));

    sprintf(dst, "<title>%s</title>", innerHTML);
    return dst;
}

char *HTMLGenComment(const char *innerHTML) {
    char  *dst = (char *)calloc(strlen(innerHTML) + 8, sizeof(char));

    sprintf(dst, "<!--%s-->", innerHTML);
    return dst;
}