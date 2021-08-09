#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub ( 248, 72, 46);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(200,100);
    glVertex2i(500,100);
    glVertex2i(500,600);
    glVertex2i(200,600);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(1010,100);
    glVertex2i(1310,100);
    glVertex2i(1310,600);
    glVertex2i(1010,600);
    glEnd();

    //leaf
    glBegin(GL_POLYGON);
    glVertex2i(750,150);
    glVertex2i(760,150);
    glVertex2i(760,250);
    glVertex2i(750,250);
    glEnd();

    //
    glBegin(GL_POLYGON);
    glVertex2i(760,250);
    glVertex2i(850,230);
    glVertex2i(840,270);

    glVertex2i(950,350);
    glVertex2i(910,360);
    glVertex2i(950,420);
    glVertex2i(880,410);
    glVertex2i(890,450);
    glVertex2i(820,390);

    glVertex2i(830,500);
    glVertex2i(790,480);
    glVertex2i(750,550);
    glVertex2i(720,480);
    glVertex2i(680,500);
    glVertex2i(690,390);

    glVertex2i(620,450);
    glVertex2i(630,410);
    glVertex2i(560,420);
    glVertex2i(600,360);
    glVertex2i(560,350);
    glVertex2i(670,270);
    glVertex2i(660,230);
    glVertex2i(750,250);
    glEnd();


    glFlush ();
}

void myInit (void)
{
    glClearColor(213, 244, 255 , 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1400.0, 0.0, 700.0);
}





int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1400,700);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Canada Flag");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}


