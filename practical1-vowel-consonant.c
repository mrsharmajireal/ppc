#include<stdio.h>
int main()
{
char c;
int lowercase_Vowel, uppercase_Vowel; printf("Enter A Alphabet : ");
scanf("%c", &c);
lowercase_Vowel =(c=='a' || c== 'e' || c=='i'|| c=='o'|| c=='u');
uppercase_Vowel =(c=='A'|| c=='E'|| c=='I'|| c=='0'|| c=='U');
if (lowercase_Vowel || uppercase_Vowel)
printf("%c is a vowel", c);
else
printf("%c is a consonant", c);
return 0;
}
