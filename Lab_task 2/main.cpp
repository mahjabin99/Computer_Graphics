#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub (5,5,5);
glPointSize(10.0);
glVertex2i(14,5);
glVertex2i(16,5);
glVertex2i(16,12);
glVertex2i(14,12);
glEnd();



glBegin(GL_QUADS);
glColor3ub (25,25,112);
glPointSize(10.0);
glVertex2i(16,7);
glVertex2i(18,7);
glVertex2i(18,12);
glVertex2i(16,12);
glEnd();

glColor3ub (5,5,5);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(18,12);
glVertex2i(18,5);
glVertex2i(20,5);
glVertex2i(20,12);
glEnd();

glColor3ub (184,134,11);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(14,12);
glVertex2i(16,12);
glVertex2i(16,14);
glVertex2i(14,14);
glEnd();

glColor3ub (255 ,127, 36);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(16,12);
glVertex2i(16,14);
glVertex2i(20,14);
glVertex2i(20,12);
glEnd();


glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(12,14);
glVertex2i(22,14);
glVertex2i(22,16);
glVertex2i(12,16);
glEnd();


glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(10,16);
glVertex2i(12,16);
glVertex2i(12,18);
glVertex2i(10,18);
glEnd();

glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(22,16);
glVertex2i(24,16);
glVertex2i(24,18);
glVertex2i(22,18);
glEnd();


glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(10,16);
glVertex2i(12,16);
glVertex2i(12,18);
glVertex2i(10,18);
glEnd();

glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(12,16);
glVertex2i(14,16);
glVertex2i(14,20);
glVertex2i(12,20);
glEnd();


glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(20,16);
glVertex2i(22,16);
glVertex2i(22,20);
glVertex2i(20,20);
glEnd();


glColor3ub (66 ,66, 66);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(14,18);
glVertex2i(20,18);
glVertex2i(20,20);
glVertex2i(14,20);
glEnd();

glColor3ub (255 ,127, 36);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(10,18);
glVertex2i(12,18);
glVertex2i(12,20);
glVertex2i(10,20);
glEnd();

glColor3ub (255 ,127, 36);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(22,18);
glVertex2i(24,18);
glVertex2i(24,20);
glVertex2i(22,20);
glEnd();

glBegin(GL_QUADS);
glColor3ub (25,25,112);
glPointSize(10.0);
glVertex2i(10,20);
glVertex2i(12,20);
glVertex2i(12,22);
glVertex2i(10,22);
glEnd();

glBegin(GL_QUADS);
glColor3ub (25,25,112);
glPointSize(10.0);
glVertex2i(22,20);
glVertex2i(24,20);
glVertex2i(24,22);
glVertex2i(22,22);
glEnd();

glBegin(GL_QUADS);
glColor3ub (46,46,46);
glPointSize(10.0);
glVertex2i(14,16);
glVertex2i(20,16);
glVertex2i(20,18);
glVertex2i(14,18);
glEnd();


glBegin(GL_QUADS);
glColor3ub (255,255,0);
glPointSize(10.0);
glVertex2i(12,20);
glVertex2i(12,22);
glVertex2i(22,22);
glVertex2i(22,20);
glEnd();


glBegin(GL_QUADS);
glColor3ub (0, 0 ,0);
glPointSize(10.0);
glVertex2i(10,22);
glVertex2i(10,28);
glVertex2i(12,28);
glVertex2i(12,22);
glEnd();


glBegin(GL_QUADS);
glColor3ub (0, 0 ,0);
glPointSize(10.0);
glVertex2i(22,22);
glVertex2i(22,28);
glVertex2i(24,28);
glVertex2i(24,22);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0 ,0 ,139);
glPointSize(10.0);
glVertex2i(12,22);
glVertex2i(14,22);
glVertex2i(14,24);
glVertex2i(12,24);
glEnd();

glBegin(GL_QUADS);
glColor3ub (25 ,25 ,112);
glPointSize(10.0);
glVertex2i(14,22);
glVertex2i(14,25);
glVertex2i(20,25);
glVertex2i(20,22);
glEnd();

glBegin(GL_QUADS);
glColor3ub (25 ,25 ,112);
glPointSize(10.0);
glVertex2i(20,22);
glVertex2i(20,24);
glVertex2i(22,24);
glVertex2i(22,22);
glEnd();

glBegin(GL_QUADS);
glColor3ub (105 ,105 ,105);
glPointSize(10.0);
glVertex2i(12,24);
glVertex2i(12,31);
glVertex2i(14,31);
glVertex2i(14,24);
glEnd();

glBegin(GL_QUADS);
glColor3ub (105 ,105 ,105);
glPointSize(10.0);
glVertex2i(18,25);
glVertex2i(18,31);
glVertex2i(20,31);
glVertex2i(20,25);
glEnd();


glBegin(GL_QUADS);
glColor3ub (66, 66 ,66);
glPointSize(10.0);
glVertex2i(14,25);
glVertex2i(14,31);
glVertex2i(16,31);
glVertex2i(16,25);
glEnd();

glBegin(GL_QUADS);
glColor3ub (66, 66 ,66);
glPointSize(10.0);
glVertex2i(20,24);
glVertex2i(20,31);
glVertex2i(22,31);
glVertex2i(22,24);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0 ,0);
glPointSize(10.0);
glVertex2i(16,25);
glVertex2i(16,27);
glVertex2i(18,27);
glVertex2i(18,25);
glEnd();


glBegin(GL_QUADS);
glColor3ub (25 ,25 ,112);
glPointSize(10.0);
glVertex2i(14,31);
glVertex2i(14,33);
glVertex2i(16,33);
glVertex2i(16,31);
glEnd();

glBegin(GL_QUADS);
glColor3ub (25 ,25 ,112);
glPointSize(10.0);
glVertex2i(20,31);
glVertex2i(20,33);
glVertex2i(22,33);
glVertex2i(22,31);
glEnd();

glBegin(GL_QUADS);
glColor3ub (39, 64 ,139);
glPointSize(10.0);
glVertex2i(12,31);
glVertex2i(12,33);
glVertex2i(14,33);
glVertex2i(14,31);
glEnd();

glBegin(GL_QUADS);
glColor3ub (39, 64 ,139);
glPointSize(10.0);
glVertex2i(18,31);
glVertex2i(18,33);
glVertex2i(20,33);
glVertex2i(20,31);
glEnd();



glFlush ();

}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(35.0, 0.0, 45.0, 0.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Lab_task 2");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
