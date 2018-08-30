/*
** calc_dir_vector.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Wed Mar 15 15:19:21 2017 Jordan Bonaldi
** Last update	Wed Mar 15 16:26:29 2017 Jordan Bonaldi
*/

# include "project.h"

sfVector3f		new_vector3f(float a, float b, float c)
{
  sfVector3f	vector;

  vector.x = a;
  vector.y = b;
  vector.z = c;
  return (vector);
}

sfVector3f    calc_dir_vector(float dtp, sfVector2i ss, sfVector2i sp)
{
  return (new_vector3f(dtp, (ss.x / 2) - sp.x, (ss.y / 2) - sp.y));
}
