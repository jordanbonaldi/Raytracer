/*
** project.h for project_header in /home/Neferett/bin/IMPORT/include
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 21 01:13:04 2016 Bonaldi Jordan
** Last update	Wed Mar 15 16:26:49 2017 Jordan Bonaldi
*/

#ifndef H_CHECK
# define H_CHECK

# include <SFML/Graphics.h>
# include <SFML/Graphics/RenderWindow.h>
# include <SFML/Graphics/Sprite.h>
# include <SFML/Graphics/Texture.h>
# include <math.h>
# include "lib.h"

# define	FRAMEBUFFER_WIDTH 800
# define  FRAMEBUFFER_HEIGHT 600

typedef struct			s_my_framebuffer
{
  sfUint8						*pixels;
  int								width;
  int								height;
}										t_my_framebuffer;

float   get_light_coef(sfVector3f light, sfVector3f normal);
sfVector3f  get_normal_cone(sfVector3f intersection_point, float semiangle);
sfVector3f  get_normal_cylinder(sfVector3f intersection_point);
sfVector3f  get_normal_sphere(sfVector3f intersection_point);
sfVector3f  get_normal_plane(int upward);
float 	intersect_cone(sfVector3f eye, sfVector3f dir, float semiangle);
float 	intersect_plane(sfVector3f eye, sfVector3f dir);
float 	intersect_sphere(sfVector3f eye, sfVector3f dir, float radius);
float 	intersect_cylinder(sfVector3f eye, sfVector3f dir, float radius);
double	qrt(double i);
float	cc_delta(double a, double b, double c);
sfVector3f		new_vector3f(float a, float b, float c);
sfVector2i		new_vector2i(int a, int b);
sfVideoMode		new_mode(int w, int h, int mode);
sfVector3f calc_dir_vector(float dtp, sfVector2i ss, sfVector2i sp);
sfVector3f  rotate_xyz(sfVector3f to_rotate, sfVector3f angles);
sfVector3f  rotate_zyx(sfVector3f to_rotate, sfVector3f angles);
void	my_put_pixel(t_my_framebuffer *fb, int x, int y, sfColor color);
sfColor		set_color(int r, int g, int b);

#endif
