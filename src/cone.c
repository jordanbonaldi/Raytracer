/*
** cone.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Wed Mar 15 14:46:30 2017 Jordan Bonaldi
** Last update	Fri Mar 17 18:09:12 2017 Jordan Bonaldi
*/

# include "project.h"

sfVector3f  get_normal_cone(sfVector3f intersection_point, float semiangle)
{
  float				k;

  k = tan(-semiangle * M_PI / 180);
  intersection_point.z *= k;
  return (intersection_point);
}

float 	intersect_cone(sfVector3f eye, sfVector3f dir, float semiangle)
{
  float	a;
  float	b;
  float	c;

  if (semiangle <= 0 || semiangle >= 90)
    return (-1);
  a = -pow(tan(semiangle / (180 / M_PI)), 2) * pow(dir.z, 2);
  a += pow(dir.x, 2) + pow(dir.y, 2);
  b = -2 * pow(tan(semiangle / (180 / M_PI)), 2) * eye.z * dir.z;
  b += 2 * eye.x * dir.x + 2 * eye.y * dir.y;
  c = -pow(tan(semiangle / (180 / M_PI)), 2) * pow(eye.z, 2);
  c += pow(eye.y, 2) + pow(eye.x, 2);
  return (cc_delta(a, b, c));
}
