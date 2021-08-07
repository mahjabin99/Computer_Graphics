#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(50, 200);
glVertex2i(220, 200);
glVertex2i(220, 300);
glVertex2i(50, 300);
glEnd();

glColor3ub (255, 255, 255);
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(110, 230);
glVertex2i(160, 250);
glVertex2i(110, 275);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(260, 200);
glVertex2i(270, 200);
glVertex2i(270, 250);
glVertex2i(260, 250);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(260, 250);
glVertex2i(270, 250);
glVertex2i(250, 300);
glVertex2i(240, 300);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(270, 250);
glVertex2i(290, 300);
glVertex2i(280, 300);
glVertex2i(265, 260);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(280, 200);
glVertex2i(320, 200);
glVertex2i(320, 250);
glVertex2i(280, 250);
glEnd();

glColor3ub (255,255,255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(290, 210);
glVertex2i(310, 210);
glVertex2i(310, 240);
glVertex2i(290, 240);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(330, 200);
glVertex2i(370, 200);
glVertex2i(370, 250);
glVertex2i(330, 250);
glEnd();

glColor3ub (255,255,255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(340, 210);
glVertex2i(360, 210);
glVertex2i(360, 250);
glVertex2i(340, 250);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(380, 200);
glVertex2i(390, 200);
glVertex2i(390, 300);
glVertex2i(380, 300);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(360, 290);
glVertex2i(410, 290);
glVertex2i(410, 300);
glVertex2i(360, 300);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(410, 200);
glVertex2i(450, 200);
glVertex2i(450, 250);
glVertex2i(410, 250);
glEnd();

glColor3ub (255,255,255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(420, 210);
glVertex2i(440, 210);
glVertex2i(440, 250);
glVertex2i(420, 250);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(460, 200);
glVertex2i(470, 200);
glVertex2i(470, 300);
glVertex2i(460, 300);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(470, 200);
glVertex2i(500, 200);
glVertex2i(500, 250);
glVertex2i(470, 250);
glEnd();

glColor3ub (255,255,255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(470, 210);
glVertex2i(490, 210);
glVertex2i(490, 240);
glVertex2i(470, 240);
glEnd();

glColor3ub (0,0,0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(510, 200);
glVertex2i(550, 200);
glVertex2i(550, 250);
glVertex2i(510, 250);
glEnd();

glColor3ub (255,255,255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(520, 210);
glVertex2i(550, 210);
glVertex2i(550, 220);
glVertex2i(520, 220);
glEnd();

glColor3ub (255,255,255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(520, 230);
glVertex2i(540, 230);
glVertex2i(540, 240);
glVertex2i(520, 240);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
