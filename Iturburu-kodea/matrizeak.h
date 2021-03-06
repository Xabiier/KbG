#ifndef ITURBURU_KODEA_MATRIZEAK_H
#define ITURBURU_KODEA_MATRIZEAK_H

#include "definitions.h"
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

GLdouble *mult(GLdouble *m1, GLdouble *m2);
GLdouble *multBek(GLdouble *m, GLdouble *v);

GLdouble *translazioa(double x, double y, double z);
GLdouble *biraketa(int x, int y, int z);
GLdouble *eskalaketa(float x, float y, float z);
GLdouble *islapena(int x, int y, int z);
GLdouble *identitatea();

void print_matrix(GLdouble *matrix);

#endif //ITURBURU_KODEA_MATRIZEAK_H
