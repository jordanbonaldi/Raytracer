/*
** translate.c for CPE_2016_matchstick
**
** Made by	Jordan Bonaldi
** Login	Neferett@epitech.net
**
** Started on	Thu Feb 23 11:46:24 2017 Jordan Bonaldi
** Last update	Thu Feb 23 11:48:01 2017 Jordan Bonaldi
*/

# include "project.h"

sfVector3f 		translate(sfVector3f to_trans, sfVector3f trans)
{
  return (new_vector3f(to_trans.x + trans.x, to_trans.y + trans.y,
    to_trans.z + trans.z));
}
