#ifndef MOON_H
#define MOON_H

void MiniMoon(double, double*, double*);
double Moon(double T, double *LAMBDA, double *BETA, double *R, double *AGE);
double NewMoon(double ax, double bx, double cx);

double	sine(double);
double	frac(double);

#endif
