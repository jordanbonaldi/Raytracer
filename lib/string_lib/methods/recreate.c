/*
** recreate.c for ls in /home/neferett/EPITECH/LIB/lib/string_lib/methods
** 
** Made by Jordan Bonaldi
** Login   <neferett@epitech.eu>
** 
** Started on  Sun Jan 29 22:36:43 2017 Jordan Bonaldi
** Last update Sun Jan 29 22:58:56 2017 Jordan Bonaldi
*/

# include "lib.h"

void			s_recreate(t_string *str, char *str2)
{
  str->str = my_strdup(str2);
  str->length(str);
  str->first = *str->str;
  str->end = str->str[str->size - 1];
}

char			**s_tab(t_string *str, char c)
{
  return (my_str_to_wordtab(str->str, c));
}
