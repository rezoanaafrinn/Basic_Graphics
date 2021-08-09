#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (247,226,0);
    glBegin(GL_POLYGON);
    glVertex2i(0,200);
    glVertex2i(150,200);
    glVertex2i(150,250);
    glVertex2i(0,250);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(130,180);
    glVertex2i(170,180);
    glVertex2i(170,220);
    glVertex2i(130,220);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(150,200);
    glVertex2i(190,200);
    glVertex2i(190,160);
    glVertex2i(150,160);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(190,200);
    glVertex2i(230,200);
    glVertex2i(230,160);
    glVertex2i(190,160);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(180,160);
    glVertex2i(200,160);
    glVertex2i(200,130);
    glVertex2i(180,130);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(210,220);
    glVertex2i(250,220);
    glVertex2i(250,180);
    glVertex2i(210,180);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(250,220);
    glVertex2i(290,220);
    glVertex2i(290,180);
    glVertex2i(250,180);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(240,250);
    glVertex2i(260,250);
    glVertex2i(260,220);
    glVertex2i(240,220);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(270,200);
    glVertex2i(310,200);
    glVertex2i(310,160);
    glVertex2i(270,160);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(310,200);
    glVertex2i(360,200);
    glVertex2i(360,160);
    glVertex2i(310,160);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(300,160);
    glVertex2i(320,160);
    glVertex2i(320,130);
    glVertex2i(300,130);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(340,220);
    glVertex2i(380,220);
    glVertex2i(380,180);
    glVertex2i(340,180);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(360,250);
    glVertex2i(500,250);
    glVertex2i(500,200);
    glVertex2i(360,200);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(0,350);
    glVertex2i(150,350);
    glVertex2i(150,300);
    glVertex2i(0,300);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(130,320);
    glVertex2i(170,320);
    glVertex2i(170,280);
    glVertex2i(130,280);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(160,300);
    glVertex2i(190,300);
    glVertex2i(190,260);
    glVertex2i(160,260);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(190,300);
    glVertex2i(240,300);
    glVertex2i(240,260);
    glVertex2i(190,260);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(180,260);
    glVertex2i(200,260);
    glVertex2i(200,230);
    glVertex2i(180,230);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(210,320);
    glVertex2i(250,320);
    glVertex2i(250,280);
    glVertex2i(210,280);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(250,320);
    glVertex2i(290,320);
    glVertex2i(290,280);
    glVertex2i(250,280);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(240,350);
    glVertex2i(260,350);
    glVertex2i(260,320);
    glVertex2i(240,320);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(310,300);
    glVertex2i(310,260);
    glVertex2i(270,260);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(310,300);
    glVertex2i(360,300);
    glVertex2i(360,260);
    glVertex2i(310,260);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(340,320);
    glVertex2i(380,320);
    glVertex2i(380,280);
    glVertex2i(340,280);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(300,260);
    glVertex2i(320,260);
    glVertex2i(320,230);
    glVertex2i(300,230);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(360,350);
    glVertex2i(500,350);
    glVertex2i(500,300);
    glVertex2i(360,300);
    glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(1.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (400,400);
glutInitWindowPosition (100, 150);
glutCreateWindow ("LOGO");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}

