char *replace(const char *s)
{
    static const char vowels[] = "aeiouAEIOU";
    char *r = strdup(s);
    for (char *pc = r; *pc; pc++)
        if ( strchr(vowels, *pc) )
            *pc = '!';
    return r;
}