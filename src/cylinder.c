/*
** cylinder.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Wed Mar 15 14:50:17 2017 Jordan Bonaldi
** Last update	Wed Mar 15 14:53:32 2017 Jordan Bonaldi
*/

# include "project.h"

sfVector3f  get_normal_cylinder(sfVector3f intersection_point)
{
  intersection_point.z = 0;
  return (intersection_point);
}

float 	intersect_cylinder(sfVector3f eye, sfVector3f dir, float radius)
{
  float	a;
  float	b;
  float	c;

  a = qrt(dir.x) + qrt(dir.y);
  b = (2 * eye.x * dir.x) + (2 * eye.y * dir.y);
  c = qrt(eye.x) + qrt(eye.y) - qrt(radius);
  return (cc_delta(a, b, c));
}
