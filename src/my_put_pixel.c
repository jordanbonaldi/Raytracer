/*
** my_put_pixel.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Wed Mar 15 15:51:34 2017 Jordan Bonaldi
** Last update	Wed Mar 15 15:52:45 2017 Jordan Bonaldi
*/

# include "project.h"

void	my_put_pixel(t_my_framebuffer *fb, int x, int y, sfColor color)
{
  if (x >= 0 && y >= 0 && x < fb->width && y < fb->height)
    {
      fb->pixels[((fb->width * y) + x) * 4] = color.r;
      fb->pixels[((fb->width * y) + x) * 4 + 1] = color.g;
      fb->pixels[((fb->width * y) + x) * 4 + 2] = color.b;
      fb->pixels[((fb->width * y) + x) * 4 + 3] = color.a;
    }
}
