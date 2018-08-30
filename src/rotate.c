/*
** rotate.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Fri Mar 17 10:44:35 2017 Jordan Bonaldi
** Last update	Fri Mar 17 17:57:22 2017 Jordan Bonaldi
*/

#include "project.h"

sfVector3f      rotate_xyz(sfVector3f v, sfVector3f r)
{
  sfVector3f		t;

  t = new_vector3f(v.x, v.y, v.z);
  v.y = t.y * cos(r.x / (180 / M_PI)) - t.z * sin(r.x / (180 / M_PI));
  v.z = t.y * sin(r.x / (180 / M_PI)) + t.z * cos(r.x / (180 / M_PI));
  t = new_vector3f(v.x, v.y, v.z);
  v.x = t.x * cos(r.y / (180 / M_PI)) + t.z * sin(r.y / (180 / M_PI));
  v.z = t.x * -sin(r.y / (180 / M_PI)) + t.z * cos(r.y / (180 / M_PI));
  t = new_vector3f(v.x, v.y, v.z);
  v.x = t.x * cos(r.z / (180 / M_PI)) - t.y * sin(r.z / (180 / M_PI));
  v.y = t.x * sin(r.z / (180 / M_PI)) + t.y * cos(r.z / (180 / M_PI));
  return (v);
}

sfVector3f      rotate_zyx(sfVector3f v, sfVector3f r)
{
  sfVector3f	 t;

  t = new_vector3f(v.x, v.y, v.z);
  v.x = t.x * cos(r.z / (180 / M_PI)) - t.y * sin(r.z / (180 / M_PI));
  v.y = t.x * sin(r.z / (180 / M_PI)) + t.y * cos(r.z / (180 / M_PI));
  t = new_vector3f(v.x, v.y, v.z);
  v.x = t.x * cos(r.y / (180 / M_PI)) + t.z * sin(r.y / (180 / M_PI));
  v.z = t.x * -sin(r.y / (180 / M_PI)) + t.z * cos(r.y / (180 / M_PI));
  t = new_vector3f(v.x, v.y, v.z);
  v.y = t.y * cos(r.x / (180 / M_PI)) - t.z * sin(r.x / (180 / M_PI));
  v.z = t.y * sin(r.x / (180 / M_PI)) + t.z * cos(r.x / (180 / M_PI));
  return (v);
}
