#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;
int X1,X2,X3, Y1, Y2, Y3;

double angle,s,c;
void myTriangle(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);

glBegin(GL_TRIANGLES);
glVertex2i(X1, Y1);
glVertex2i(X2, Y2);
glVertex2i(X3, Y3);
glEnd();
// step-1
int X11 = X1-X1;
int Y11 = Y1-Y1;
int X22 = X2-X1;
int Y22 = Y2-Y1;
int X33 = X3-X1;
int Y33 = Y3-Y1;
glColor3ub (255, 0, 0);

glBegin(GL_TRIANGLES);
glVertex2i(X11, Y11);
glVertex2i(X22, Y22);
glVertex2i(X33, Y33);
glEnd();


//Step-2 Rotation equation and finding new values
//for anticlockwise rotation

c=cos (angle*3.14/180);
s=sin (angle*3.14/180);

int A1=(X1*c+Y1*s);
int B1=(-X1*s+Y1*c);
int A2=(X2*c+Y2*s);
int B2=(-X2*s+Y2*c);
int A3=(X3*c+Y3*s);
int B3=(-X3*s+Y3*c);
glColor3ub (73, 51, 255);

glBegin(GL_TRIANGLES);
glVertex2i(A1, B1);
glVertex2i(A2, B2);
glVertex2i(A3, B3);
glEnd();

//Step-3 Add X1, Y1 to the result

int A11=A1+X1;
int B11=B1+Y1;
int A22=A2+X2;
int B22=B2+Y2;
int A33=A3+X3;
int B33=B3+Y3;
glColor3ub (60, 255, 51);

glBegin(GL_TRIANGLES);
glVertex2i(A11, B11);
glVertex2i(A22, B22);
glVertex2i(A33, B33);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,640,0,480);
}
//check for clockwise or anticlockwise
void typeofangle()
{
    if(0>=angle<=360)
{
    cout<<"The angle is clockwise ";
}
else if(angle<0)
{
    cout<<"The angle is anticlockwise";
}

}



int main(int argc, char** argv)
{

cout<<"Enter 3 points: ";
cin>>X1>>Y1;cin>>X2>>Y2;cin>>X3>>Y3;

cout<<"Enter the angle: ";
cin>>angle;


typeofangle();
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myTriangle);
myInit ();
glutMainLoop();
}
