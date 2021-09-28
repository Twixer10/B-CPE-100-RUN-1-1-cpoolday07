/*
** EPITECH PROJECT, 2020
** MY REV PARAMS
** File description:
** NO DESCRIPTION
*/

int my_putstr(char const *str);

int main(int argc, char **argv)
{
    int i = argc - 1;
    
    while (i >= 0)
    {
        my_putstr(argv[i]);
        my_putstr("\n");
        i = i - 1;
    }
    return (0);
}
