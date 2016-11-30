#ifndef IO_H
#define IO_H

void keyboard(unsigned char key, int x, int y);

void special_keyboard(int key, int x, int y);
void objektu_keyboard(int key, int x, int y);
void kamera_keyboard(int key, int x, int y);

void aldaketakAplikatu(GLdouble *mat, int key);
void kameraAldatu(GLdouble *mat, int biratu);
void print_help();


#endif // IO_H
