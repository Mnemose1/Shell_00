:Stdheader

//#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}

/*int main()
{
    char str[] = "Uma coisa é uma coisa, outra coisa é outra coisa.";

    printf("String antes: %s\n", str);
    char *result = ft_strupcase(str);
    printf("String depois: %s\n", result);

    return 0;
}*/