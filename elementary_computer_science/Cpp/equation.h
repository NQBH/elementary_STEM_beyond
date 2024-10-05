#ifndef _MY_EQUATIONS
#define _MY_EQUATIONS
const int NoSolution = 0, Undetermined = -1;
int linear_eqn(double a, double b, double& x);
int quadratic_eqn(double a, double b, double c, double& x1, double& x2);
int quartic_eqn(double a, double b, double c, double& x1, double& x2, double& x3, double& x4);
#endif