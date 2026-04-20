#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc < 2)
    {
        printf("please provide an argument");
        return (1);
    }
    i = 0;
    while (argv[1][i] != '\0')
    {
        printf("%c = %d\n", argv[1][i], ft_isalnum(argv[1][i]));
        i++;
    }
}

