#include <stdio.h>

int main()
{
  double a, b, c;
  double triangle_rectangle_area;
  double circle_area;
  double trapezium_area;
  double square_area;
  double rectangle_area;

  scanf("%lf %lf %lf", &a, &b, &c);

  triangle_rectangle_area = (a * c) / 2;
  circle_area = 3.14159 * (c * c);
  trapezium_area = ((a + b) * c) / 2;
  square_area = (b * b);
  rectangle_area = (a * b);

  printf("TRIANGULO: %.3lf\n", triangle_rectangle_area);
  printf("CIRCULO: %.3lf\n", circle_area);
  printf("TRAPEZIO: %.3lf\n", trapezium_area);
  printf("QUADRADO: %.3lf\n", square_area);
  printf("RETANGULO: %.3lf\n", rectangle_area);

  return 0;
}
