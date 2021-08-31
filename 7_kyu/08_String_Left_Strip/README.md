# String left strip

## Task

Given a writeable target string and a read-only string of characters, remove in-place all leading characters of the string that are present in the string of characters.

The leading characters make up a prefix of the target string. Such prefix has the length of n, where n is the number of characters from the beginning of the string to the first character in the string that is not contained by the read-only string of characters.

In case that the read-only string of characters is NULL, remove in-place the leading whitespace in the target string.

In case that the read-only string of characters is empty, do not remove anything.

Example:

```
char s[] = "!!!!###@hello";
const char *chars = "!#@";
if (stringLeftStrip(s, chars)) { // returns "hello"
(void)puts(s);
}
```

Addendum: The target string will always be defined (not NULL). However, it can be empty.

Make sure you do the removal in-place. There's no requirement for this kata to allocate or de-allocate any memory.

Please keep in mind that you only have to remove the leading characters, i.e. given const char *chars = " " and char s[] = "Hello, world!", nothing should be removed and the string s returned intact. This is because the first character to not be contained by the chars happens to be the first character of the target string.
