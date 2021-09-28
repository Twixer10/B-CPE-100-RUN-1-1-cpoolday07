/*
** EPITECH PROJECT, 2020
** MY PRINT PARAMS
** File description:
** NO DESCRIPTION
*/

int my_putstr(char const *str);

int main(int argc, char **argv)
{
    int i = 0;
    while (argv[i])
    {
        my_putstr(argv[i]);
        my_putstr("\n");
        i = i + 1;
    }
    return (0);
}
