#include "minilibx-linux-master/mlx.h"
//#include <mlx.h>

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data	*data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*window;
	t_data	img;
	int		x;
	int		y;
	int		limit;
	int		color;

	x = 100;
	y = 100;
	limit = 500;
	color = 0xff0000;
	mlx = mlx_init();
	window = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	while (x < limit)
	{
		while (y < limit)
		{
			my_mlx_pixel_put(&img, x, y, color);
			y++;
		}
		my_mlx_pixel_put(&img, x, y, color);
		x++;
	}

	mlx_put_image_to_window(mlx, window, img.img, 0, 0);
	mlx_loop(mlx);
}