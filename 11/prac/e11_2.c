#include <stdio.h>

struct Complex
{
  double real;
  double imag;
};
typedef struct Complex Complex;

Complex complexAdd(Complex complex1, Complex complex2)
{
  Complex result;
  result.real = complex1.real + complex2.real;
  result.imag = complex1.imag + complex2.imag;

  return result;
}

Complex complexMultiple(Complex complex1, Complex complex2)
{
  Complex result;
  result.real = complex1.real * complex2.real + complex1.imag * complex2.imag * -1;
  result.imag = complex1.real * complex2.imag + complex1.imag * complex2.real;
  
  return result;
}

int main(void)
{
  Complex complex1;
  printf("Input real part of the first complex number >> ");
  scanf("%lf", &complex1.real);
  printf("Input imaginary part of the first complex number >> ");
  scanf("%lf", &complex1.imag);

  Complex complex2;
  printf("Input real part of the second complex number >> ");
  scanf("%lf", &complex2.real);
  printf("Input imaginary part of the second complex number >> ");
  scanf("%lf", &complex2.imag);

  Complex sum = complexAdd(complex1, complex2);
  printf("Sum of complex numbers: %.2f%+.2fi\n", sum.real, sum.imag);

  Complex multiple = complexMultiple(complex1, complex2);
  printf("Multiple of complex numbers: %.2f%+.2fi\n", multiple.real, multiple.imag);

  return 0;
}