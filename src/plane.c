/*
** plane.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	Neferett@epitech.net
**
** Started on	Thu Feb 16 13:27:29 2017 Jordan Bonaldi
** Last update	Fri Mar 17 10:10:40 2017 Jordan Bonaldi
*/

# include "project.h"

sfVector3f  get_normal_plane(int upward)
{
  return (new_vector3f(0, 0, upward ? 100 : -100));
}

float 	intersect_plane(sfVector3f eye, sfVector3f dir)
{
  return (dir.z && dir.z < eye.z ? -eye.z / dir.z : -1);
}
