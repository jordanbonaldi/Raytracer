/*
** utils.c for Raytracer1
**
** Made by	Jordan Bonaldi
** Login	Neferett@epitech.net
**
** Started on	Thu Feb 16 13:16:43 2017 Jordan Bonaldi
** Last update	Fri Mar 17 18:06:55 2017 Jordan Bonaldi
*/

# include "project.h"

float	cc_delta(double a, double b, double c)
{
  float t1;
  float t2;
  float	delta;

  delta = qrt(b) - 4 * a * c;
  if (delta < 0)
    return (-1.0);
  else if (!delta)
    {
      t1 = -b / (2 * a);
      return (t1 > 0 ? t1 : -1.0);
    }
  else
    {
      t1 = (-b + sqrt(delta)) / (2 * a);
      t2 = (-b - sqrt(delta)) / (2 * a);
      if (t1 < 0 && t2 < 0)
        return (-1.0);
      else if (t1 < 0 && t2 > 0)
        return (t2);
      else if (t1 > 0 && t2 < 0)
        return (t1);
      else
        return (t1 > t2 ? t2 : t1);
    }
}

double	qrt(double i)
{
  return (pow(i, 2));
}

sfColor		set_color(int r, int g, int b)
{
  sfColor	color;

  color.r = r;
  color.g = g;
  color.b = b;
  color.a = 255;
  return (color);
}

sfVector2i		new_vector2i(int a, int b)
{
  sfVector2i	vector;

  vector.x = a;
  vector.y = b;
  return (vector);
}

sfVideoMode		new_mode(int w, int h, int md)
{
  sfVideoMode   mode;

  mode.width = w;
  mode.height = h;
  mode.bitsPerPixel = md;
  return (mode);
}
