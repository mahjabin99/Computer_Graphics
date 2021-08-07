#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(4.0);

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(150,200);
    glVertex2i(500,200);
    glVertex2i(510,230);
    glVertex2i(130,230);
    glEnd();
    glFlush ();

    glBegin(GL_TRIANGLES);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(140,200);
    glVertex2i(150,200);
    glVertex2i(170,220);
    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(127,235);
    glVertex2i(512,235);
    glVertex2i(523,265);
    glVertex2i(180,265);
    glVertex2i(170,270);
    glVertex2i(107,270);
    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(135,273);
    glVertex2i(170,273);
    glVertex2i(170,280);
    glVertex2i(135,280);
    glEnd();
    glFlush ();

   glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(170,273);
    glVertex2i(175,270);
    glVertex2i(175,280);
    glVertex2i(170,280);

    glEnd();
    glFlush ();

      glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(176,269);
    glVertex2i(179,268);
    glVertex2i(200,268);
    glVertex2i(200,280);
    glVertex2i(176,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(202,268);
    glVertex2i(226,268);
    glVertex2i(226,280);
    glVertex2i(202,280);

    glEnd();
    glFlush ();

        glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(228,268);
    glVertex2i(252,268);
    glVertex2i(252,280);
    glVertex2i(228,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(254,268);
    glVertex2i(278,268);
    glVertex2i(278,280);
    glVertex2i(254,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(280,268);
    glVertex2i(304,268);
    glVertex2i(304,280);
    glVertex2i(280,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(135,282);
    glVertex2i(175,282);
    glVertex2i(175,294);
    glVertex2i(135,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(177,282);
    glVertex2i(200,282);
    glVertex2i(200,294);
    glVertex2i(177,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(202,282);
    glVertex2i(226,282);
    glVertex2i(226,294);
    glVertex2i(202,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f);
    glVertex2i(228,282);
    glVertex2i(252,282);
    glVertex2i(252,294);
    glVertex2i(228,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(235,282);
    glVertex2i(250,282);
    glVertex2i(250,294);
    glVertex2i(235,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(254,282);
    glVertex2i(278,282);
    glVertex2i(278,294);
    glVertex2i(254,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(280,282);
    glVertex2i(304,282);
    glVertex2i(304,294);
    glVertex2i(280,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(135,296);
    glVertex2i(175,296);
    glVertex2i(175,310);
    glVertex2i(135,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(177,296);
    glVertex2i(200,296);
    glVertex2i(200,310);
    glVertex2i(177,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(202,296);
    glVertex2i(226,296);
    glVertex2i(226,310);
    glVertex2i(202,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(228,296);
    glVertex2i(252,296);
    glVertex2i(252,310);
    glVertex2i(228,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(254,296);
    glVertex2i(278,296);
    glVertex2i(278,310);
    glVertex2i(254,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(280,296);
    glVertex2i(304,296);
    glVertex2i(304,310);
    glVertex2i(280,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(135,312);
    glVertex2i(175,312);
    glVertex2i(175,326);
    glVertex2i(135,326);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(177,312);
    glVertex2i(200,312);
    glVertex2i(200,326);
    glVertex2i(177,326);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(202,312);
    glVertex2i(226,312);
    glVertex2i(226,326);
    glVertex2i(202,326);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(228,312);
    glVertex2i(252,312);
    glVertex2i(252,326);
    glVertex2i(228,326);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(254,312);
    glVertex2i(278,312);
    glVertex2i(278,326);
    glVertex2i(254,326);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(280,312);
    glVertex2i(304,312);
    glVertex2i(304,326);
    glVertex2i(280,326);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(310,268);
    glVertex2i(350,268);
    glVertex2i(350,310);
    glVertex2i(342,325);
    glVertex2i(310,325);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(357,268);
    glVertex2i(381,268);
    glVertex2i(381,280);
    glVertex2i(357,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(383,268);
    glVertex2i(407,268);
    glVertex2i(407,280);
    glVertex2i(383,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(409,268);
    glVertex2i(433,268);
    glVertex2i(433,280);
    glVertex2i(409,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(357,282);
    glVertex2i(381,282);
    glVertex2i(381,294);
    glVertex2i(357,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(383,282);
    glVertex2i(407,282);
    glVertex2i(407,294);
    glVertex2i(383,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(409,282);
    glVertex2i(433,282);
    glVertex2i(433,294);
    glVertex2i(409,294);

    glEnd();
    glFlush ();



    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(357,296);
    glVertex2i(381,296);
    glVertex2i(381,308);
    glVertex2i(357,308);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(383,296);
    glVertex2i(407,296);
    glVertex2i(407,308);
    glVertex2i(383,308);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(409,296);
    glVertex2i(433,296);
    glVertex2i(433,308);
    glVertex2i(409,308);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(357,310);
    glVertex2i(381,310);
    glVertex2i(381,322);
    glVertex2i(357,322);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(383,310);
    glVertex2i(407,310);
    glVertex2i(407,322);
    glVertex2i(383,322);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(409,310);
    glVertex2i(433,310);
    glVertex2i(433,322);
    glVertex2i(409,322);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(443,268);
    glVertex2i(458,268);
    glVertex2i(458,333);
    glVertex2i(448,333);
    glVertex2i(443,310);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(468,268);
    glVertex2i(492,268);
    glVertex2i(492,280);
    glVertex2i(468,280);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(468,282);
    glVertex2i(492,282);
    glVertex2i(492,294);
    glVertex2i(468,294);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(468,296);
    glVertex2i(492,296);
    glVertex2i(492,308);
    glVertex2i(468,308);

    glEnd();
    glFlush ();

    glBegin(GL_POLYGON);
    glColor3f ( 0.0f, 0.0f, 0.0f );
    glVertex2i(468,310);
    glVertex2i(492,310);
    glVertex2i(492,322);
    glVertex2i(468,322);

    glEnd();
    glFlush ();

}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 400);
    glutInitWindowPosition (200, 150);
    glutCreateWindow ("Ship");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
