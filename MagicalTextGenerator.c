#include<stdio.h>

int main()
{
    char *S;
    gets(S);
    int H = 0;
    char c;
    while(S[H] != '\0'){
    c = S[H];
    if(c>=97 && c<=123){
        c = c-32;
    }
    if (c == 'A') {
        printf("  ******  \n  *    *  \n  ******  \n  *    *  \n  *    * \n\n");
    }

    else if(c == 'B') {
        printf("  ******  \n  *    *  \n  *****   \n  *    *  \n  ******  \n\n");
    }
    else if(c == 'C') {
        printf("  ******   \n  *  \n  *       \n  *       \n  ******  \n\n");
    }
    else if(c == 'D') {
        printf("  *****   \n  *    *  \n  *    *  \n  *    *  \n  *****   \n\n");
    }
    else if(c == 'E') {
        printf("  ******  \n  *       \n  *****   \n  *       \n  ******  \n\n");
    }
    else if(c == 'F') {
        printf("  ******  \n  *       \n  *****   \n  *       \n  *       \n\n");
    }
    else if(c == 'G') {
        printf("  *******  \n  *       \n  *   ***   \n  *     *  \n  *******  \n\n");
    }
    else if(c == 'H') {
        printf("  *    *  \n  *    *  \n  ******  \n  *    *  \n  *    * \n\n");
    }
    else if(c == 'I') {
        printf("    **    \n    **    \n    **    \n    **    \n    **        \n\n");
    }
    else if(c == 'J') {
        printf("  ******  \n    **    \n    **    \n  * **  \n  ****    \n\n");
    }
    else if(c == 'K') {
        printf("  *   *   \n  *  *    \n  **      \n  *  *    \n  *   *   \n\n");
    }
    else if(c == 'L') {
        printf("  *      \n  *                  \n  *       \n  *       \n  ******  \n\n");
    }
    else if(c == 'M') {
        printf("  *    *   \n  **  **  \n  * ** *  \n  *    *   \n  *    *  \n\n");
    }
    else if(c == 'N') {
        printf("  *    *  \n  **   *  \n  * *  *  \n  *  * *  \n  *   **  \n\n");
    }
    else if(c == 'O') {
        printf("  ******   \n  *    *  \n  *    *  \n  *    *  \n  ******  \n\n");
    }
    else if(c == 'P') {
        printf("  ******  \n  *    *  \n  ******  \n  *       \n  *       \n\n");
    }
    else if(c == 'Q') {
        printf("  ******  \n  *    *  \n  * *  *  \n  *  * *  \n  ******   \n       *            \n\n");
    }
    else if(c == 'R') {
        printf("  ******  \n  *    * \n  * **   \n  *   *   \n  *    *  \n\n");
    }
    else if(c == 'S') {
        printf("  ******    \n  *      \n  ******  \n       *  \n  ******   \n\n");
    }
    else if(c == 'T') {
        printf("  ******  \n    **     \n    **    \n    **    \n    **     \n\n");
    }
    else if(c == 'U') {
        printf("  *    *  \n  *    *   \n  *    *    \n  *    *    \n  ******   \n\n");
    }
    else if(c == 'V') {
        printf("  *    *  \n  *    *  \n  *    *  \n   *  *   \n    **    \n\n");
    }
    else if(c == 'W') {
        printf("  *    *  \n  *    *  \n  * ** *  \n  **  ** \n  *    *  \n\n");
    }
    else if(c == 'X') {
        printf("  *    *  \n   *  *   \n    **    \n   *  *   \n  *    *  \n\n");
    }
    else if(c == 'Y') {
        printf("  *    *  \n   *  *   \n    **    \n    **    \n    **    \n\n");
    }
    else if(c == 'Z') {
        printf("   ******    \n       *  \n     *    \n   *     \n  ******""  \n\n");
    }
    else if(c == ' ') {
        printf("..........\n....😶....\n....😶....\n..........\n\n");
    }
    else if(c == '.') {
        printf("----..----\n\n");
    }
    H++;
    }
    return 5403;
}
