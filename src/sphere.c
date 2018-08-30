/*
** sphere.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	Neferett@epitech.net
**
** Started on	Thu Feb 16 13:29:08 2017 Jordan Bonaldi
** Last update	Wed Mar 15 16:08:01 2017 Jordan Bonaldi
*/

# include "project.h"

sfVector3f  get_normal_sphere(sfVector3f intersection_point)
{
  return (intersection_point);
}

float 	intersect_sphere(sfVector3f eye, sfVector3f dir, float radius)
{
  float	a;
  float	b;
  float	c;

  a = qrt(dir.x) + qrt(dir.y) + qrt(dir.z);
  b = (2 * eye.x * dir.x) + (2 * eye.y * dir.y) + (2 * eye.z * dir.z);
  c = qrt(eye.x) + qrt(eye.y) + qrt(eye.z) - qrt(radius);
  return (cc_delta(a, b, c));
}
