/*
** main.c for raytracer1
**
** Made by	Jordan Bonaldi
** Login	jordan.bonaldi@epitech.net
**
** Started on	Wed Mar 15 15:34:04 2017 Jordan Bonaldi
** Last update	Wed Mar 15 21:22:11 2017 Jordan Bonaldi
*/

# include "project.h"

void								raytrace_scene(t_my_framebuffer *fb,
          sfVector3f eye, sfVector3f light)
{
  int								i;
  int								j;
  float							radius;
  float							distance;
  sfVector3f				dir;
  sfVector3f				dv;
  float							lights;
  float             k;

  if ((i = -1) && (radius = 50) && (distance = 500)) {}
  while (++i < fb->width && (j = -1))
      while (++j < fb->height)
        {
          dv = calc_dir_vector(distance, new_vector2i(fb->width, fb->height),
                          new_vector2i(j, i));
          k = intersect_sphere(eye, dv, radius);
          dir = new_vector3f(dv.x * k + eye.x,
            dv.y * k + eye.y, dv.z * k + eye.z);
          lights = get_light_coef(new_vector3f(light.x - dir.x,
              light.y - dir.y, light.z - dir.z), get_normal_sphere(dir));
          if (k > 0 && lights > 0)
            my_put_pixel(fb, j, i, set_color(255 * lights, 0, 0));
        }
}

t_my_framebuffer		*my_framebuffer_create(int width, int height)
{
  int								i;
  t_my_framebuffer	*fb;

  if (!(fb = malloc(sizeof(fb))))
      exit(EXIT_FAILURE);
  fb->height = height;
  fb->width = width;
  if (!(fb->pixels = malloc(width * height * 4 * sizeof(fb))))
    exit(EXIT_FAILURE);
  i = -1;
  while (++i < width * height * 4)
    fb->pixels[i] = 0;
  return (fb);
}

void		process_game_loop(sfRenderWindow *window, sfSprite *sprite)
{
  sfEvent	event;

  while (sfRenderWindow_isOpen(window))
    {
      while (sfRenderWindow_pollEvent(window, &event))
	      if (event.type == sfEvtClosed)
	        sfRenderWindow_close(window);
      sfRenderWindow_clear(window, sfBlack);
      sfRenderWindow_drawSprite(window, sprite, NULL);
      sfRenderWindow_display(window);
    }
}

int	    main(void)
{
  sfVideoMode		mode;
  sfRenderWindow*	window;
  sfTexture*		texture;
  sfSprite*		sprite;
  t_my_framebuffer	*framebuffer;

  mode = new_mode(FRAMEBUFFER_WIDTH, FRAMEBUFFER_HEIGHT, 32);
  if (!(window = sfRenderWindow_create(mode, "Raytracer 1",
				 sfResize | sfClose, NULL)) ||
         !(texture = sfTexture_create(FRAMEBUFFER_WIDTH, FRAMEBUFFER_HEIGHT)))
    return (EXIT_FAILURE);
  sprite = sfSprite_create();
  sfSprite_setTexture(sprite, texture, sfTrue);
  framebuffer = my_framebuffer_create(FRAMEBUFFER_WIDTH, FRAMEBUFFER_HEIGHT);
  raytrace_scene(framebuffer, new_vector3f(-200, 0, 0),
    new_vector3f(-100, 0, 0));
  sfTexture_updateFromPixels(texture, framebuffer->pixels,
			     framebuffer->width, framebuffer->height,
			     0, 0);
  process_game_loop(window, sprite);
  sfSprite_destroy(sprite);
  sfTexture_destroy(texture);
  sfRenderWindow_destroy(window);
  return (EXIT_SUCCESS);
}
