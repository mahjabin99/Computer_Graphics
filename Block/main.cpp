#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(5.0);

glColor3ub (0,102,51);
glBegin(GL_QUADS);
glVertex2i(100,384);
glVertex2i(525,384);
glVertex2i(525,10);
glVertex2i(100,10);
glEnd();
glFlush();

glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(299,134);
glVertex2i(299,259);
glVertex2i(324,259);
glVertex2i(324,134);

glVertex2i(299,184);
glVertex2i(250,184);
glVertex2i(250,210);
glVertex2i(299,210);


glVertex2i(274,184);
glVertex2i(299,184);
glVertex2i(299,160);
glVertex2i(274,160);

glVertex2i(274,234);
glVertex2i(299,234);
glVertex2i(299,210);
glVertex2i(274,210);

glVertex2i(324,235);
glVertex2i(349,235);
glVertex2i(349,210);
glVertex2i(324,210);

glVertex2i(324,210);
glVertex2i(374,210);
glVertex2i(374,184);
glVertex2i(324,184);

glVertex2i(324,184);
glVertex2i(350,184);
glVertex2i(350,160);
glVertex2i(324,160);

glVertex2i(224,84);
glVertex2i(400,84);
glVertex2i(400,60);
glVertex2i(224,60);

glVertex2i(250,60);
glVertex2i(375,60);
glVertex2i(375,35);
glVertex2i(250,35);


glVertex2i(375,84);
glVertex2i(424,84);
glVertex2i(424,110);
glVertex2i(375,110);

glVertex2i(350,110);
glVertex2i(350,135);
glVertex2i(375,135);
glVertex2i(375,110);

glVertex2i(375,110);
glVertex2i(375,160);
glVertex2i(449,160);
glVertex2i(449,110);

glVertex2i(400,210);
glVertex2i(400,235);
glVertex2i(474,235);
glVertex2i(474,210);

glVertex2i(400,160);
glVertex2i(400,210);
glVertex2i(425,210);
glVertex2i(425,160);

glVertex2i(449,134);
glVertex2i(449,160);
glVertex2i(474,160);
glVertex2i(474,134);

glVertex2i(425,160);
glVertex2i(425,210);
glVertex2i(474,210);
glVertex2i(474,160);

glVertex2i(375,235);
glVertex2i(375,260);
glVertex2i(474,260);
glVertex2i(474,235);

glVertex2i(349,260);
glVertex2i(349,284);
glVertex2i(450,284);
glVertex2i(450,260);


glVertex2i(375,284);
glVertex2i(375,309);
glVertex2i(425,309);
glVertex2i(425,284);

glVertex2i(224,309);
glVertex2i(224,335);
glVertex2i(400,335);
glVertex2i(400,309);

glVertex2i(250,335);
glVertex2i(250,359);
glVertex2i(375,359);
glVertex2i(375,335);


glVertex2i(150,135);
glVertex2i(150,259);
glVertex2i(175,259);
glVertex2i(175,135);


glVertex2i(175,110);
glVertex2i(175,284);
glVertex2i(199,284);
glVertex2i(199,110);

glVertex2i(199,84);
glVertex2i(199,309);
glVertex2i(224,309);
glVertex2i(224,84);

glVertex2i(224,234);
glVertex2i(224,259);
glVertex2i(249,259);
glVertex2i(249,234);

glVertex2i(224,259);
glVertex2i(224,284);
glVertex2i(275,284);
glVertex2i(275,259);

glVertex2i(224,110);
glVertex2i(224,135);
glVertex2i(275,135);
glVertex2i(275,110);

glVertex2i(224,135);
glVertex2i(224,160);
glVertex2i(249,160);
glVertex2i(249,135);

glVertex2i(224,84);
glVertex2i(224,110);
glVertex2i(250,110);
glVertex2i(250,84);

glVertex2i(224,284);
glVertex2i(224,309);
glVertex2i(250,309);
glVertex2i(250,284);


glEnd();
glFlush();

}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,640,394,0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 400);
glutInitWindowPosition (200, 200);
glutCreateWindow ("Block");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
