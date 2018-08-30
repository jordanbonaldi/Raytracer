/*
** light.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Wed Mar 15 15:01:32 2017 Jordan Bonaldi
** Last update	Wed Mar 15 15:10:06 2017 Jordan Bonaldi
*/

# include "project.h"

float   get_light_coef(sfVector3f light, sfVector3f normal)
{
  float	angle;

  if (!normal.x && !normal.y && !normal.z)
    return (0);
  angle = normal.x * light.x + normal.y * light.y + normal.z * light.z;
  angle /= (sqrt(qrt(normal.x) + qrt(normal.y) + qrt(normal.z)) *
                  sqrt(qrt(light.x) + qrt(light.y) + qrt(light.z)));
  return (angle > 0 ? angle : 0);
}
