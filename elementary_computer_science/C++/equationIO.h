#ifndef _MY_EQUATIONS_IO
#define _MY_EQUATIONS_IO
void sol_print(int num_sol, double x1, double x2, double x3 = 0, double x4 = 0);
void eqn_display(double a, double b);
void eqn_display(double a, double b, double c, bool type4 = false);
void eqn_input(double& a, double& b);
void eqn_input(double& a, double& b, double& c);
#endif