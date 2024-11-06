#include <stdio.h>
#include <stdlib.h>
//int main()
//    {
//      int x = 4;
//      printf("x is stored at %p\n", &x);
//      return 0;
//  }

// int main() {
//     char s[] = "Hello World";
//     char *t = s;
//
//     printf("%i\n", sizeof(t)); shows difference between sizeof on pointer vs array var
//     printf("%i\n", sizeof(s));
// }

int main() {
    // in general drinks[i] and *(drinks + 1) are equivalent
    int drinks[] = {4,2,3};
    printf("1st order: %i drinks\n", drinks[2]);
    printf("1st order: %i drinks\n", *(drinks+2));
}