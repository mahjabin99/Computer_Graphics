#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counterSec=0.0;
float counterMin=0.0;
void init(void)
{
    //gluOrtho2D(0,800,400,0);
    //glOrtho(0,800,500,0,1,-1);
}
void second()
{
    glRotatef(counterSec,0.0,0.0,-1.0);
    counterSec+=0.05;
    glBegin(GL_POLYGON);
    glColor3ub(224,224,224);
    glVertex2f(0.01,0);
    glVertex2f(0.01,0.6);
    glVertex2f(-0.01,0.6);
    glVertex2f(-0.01,0);

    glEnd();
    glutSwapBuffers();

}
void minite(){
    glRotatef(counterMin,0.0,0.0,-1.0);
    counterMin+=0.0008;
    glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(0.01,0);
    glVertex2f(0.01,0.4);
    glVertex2f(-0.01,0.4);
    glVertex2f(-0.01,0);
    glEnd();
}
void clock(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(128,128,128);
    for(i=0; i<=2*3.14; i+=0.0001)
    {
        x=0.7*sin(i);
        y=0.7*cos(i);
        glVertex2f(x,y);
    }
    glEnd();
    minite();
    second();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(640,580);
    glutCreateWindow("Clock");
    init();
    glutDisplayFunc(clock);
    glutIdleFunc(clock);
    glutMainLoop();
    return 0;
}
