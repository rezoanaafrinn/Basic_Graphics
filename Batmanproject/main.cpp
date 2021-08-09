#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub ( 0, 13, 17 );
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    glVertex2i(100, 50);
    glVertex2i(200,50);
    glVertex2i(200,100);
    glVertex2i(100,100);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(250,50);
    glVertex2i(350,50);
    glVertex2i(350,100);
    glVertex2i(250,100);
    glEnd();

    glColor3ub ( 70, 84, 88);
    glBegin(GL_POLYGON);
    glVertex2i(100,100);
    glVertex2i(100,250);
    glVertex2i(150,250);
    glVertex2i(150,100);
    glEnd();

    glColor3ub ( 70, 84, 88);
    glBegin(GL_POLYGON);
    glVertex2i(300,100);
    glVertex2i(350,100);
    glVertex2i(350,250);
    glVertex2i(300,250);
    glEnd();

    glColor3ub ( 125, 139, 144);
    glBegin(GL_POLYGON);
    glVertex2i(150,100);
    glVertex2i(200,100);
    glVertex2i(200,200);
    glVertex2i(150,200);
    glEnd();

    glColor3ub ( 125, 139, 144);
    glBegin(GL_POLYGON);
    glVertex2i(250,100);
    glVertex2i(300,100);
    glVertex2i(300,200);
    glVertex2i(250,200);
    glEnd();

    glColor3ub ( 20, 34, 53 );
    glBegin(GL_POLYGON);
    glVertex2i(50,150);
    glVertex2i(100,150);
    glVertex2i(100,300);
    glVertex2i(50,300);
    glEnd();

    glColor3ub ( 20, 34, 53 );
    glBegin(GL_POLYGON);
    glVertex2i(350,150);
    glVertex2i(400,150);
    glVertex2i(400,300);
    glVertex2i(350,300);
    glEnd();

    glColor3ub ( 20, 34, 53 );
    glBegin(GL_POLYGON);
    glVertex2i(200,150);
    glVertex2i(250,150);
    glVertex2i(250,200);
    glVertex2i(200,200);
    glEnd();

    glColor3ub ( 0, 45, 109 );
    glBegin(GL_POLYGON);
    glVertex2i(150,200);
    glVertex2i(300,200);
    glVertex2i(300,250);
    glVertex2i(150,250);
    glEnd();

    glColor3ub ( 0, 45, 109 );
    glBegin(GL_POLYGON);
    glVertex2i(150,250);
    glVertex2i(350,250);
    glVertex2i(350,300);
    glVertex2i(150,300);
    glEnd();

    glColor3ub ( 12, 68, 147  );
    glBegin(GL_POLYGON);
    glVertex2i(100,250);
    glVertex2i(150,250);
    glVertex2i(150,300);
    glVertex2i(100,300);
    glEnd();

    glColor3ub ( 240, 248, 2 );
    glBegin(GL_POLYGON);
    glVertex2i(100,300);
    glVertex2i(350,300);
    glVertex2i(350,350);
    glVertex2i(100,350);
    glEnd();

    glColor3ub ( 12, 68, 147 );
    glBegin(GL_POLYGON);
    glVertex2i(50,300);
    glVertex2i(100,300);
    glVertex2i(100,350);
    glVertex2i(50,350);
    glEnd();

    glColor3ub ( 12, 68, 147 );
    glBegin(GL_POLYGON);
    glVertex2i(350,300);
    glVertex2i(400,300);
    glVertex2i(400,350);
    glVertex2i(350,350);
    glEnd();

    glColor3ub ( 255, 144, 91 );
    glBegin(GL_POLYGON);
    glVertex2i(50,350);
    glVertex2i(100,350);
    glVertex2i(100,400);
    glVertex2i(50,400);
    glEnd();

    glColor3ub ( 255, 144, 91);
    glBegin(GL_POLYGON);
    glVertex2i(350,350);
    glVertex2i(400,350);
    glVertex2i(400,400);
    glVertex2i(350,400);
    glEnd();

    glColor3ub ( 114, 113, 112 );
    glBegin(GL_POLYGON);
    glVertex2i(100,350);
    glVertex2i(350,350);
    glVertex2i(350,400);
    glVertex2i(100,400);
    glEnd();

    glColor3ub ( 114, 113, 112 );
    glBegin(GL_POLYGON);
    glVertex2i(50,400);
    glVertex2i(150,400);
    glVertex2i(150,450);
    glVertex2i(50,450);
    glEnd();

    glColor3ub ( 114, 113, 112 );
    glBegin(GL_POLYGON);
    glVertex2i(300,400);
    glVertex2i(400,400);
    glVertex2i(400,450);
    glVertex2i(300,450);
    glEnd();

    glColor3ub ( 56, 56, 55 );
    glBegin(GL_POLYGON);
    glVertex2i(150,400);
    glVertex2i(300,400);
    glVertex2i(300,450);
    glVertex2i(150,450);
    glEnd();

    glColor3ub ( 114, 113, 112 );
    glBegin(GL_POLYGON);
    glVertex2i(100,450);
    glVertex2i(350,450);
    glVertex2i(350,500);
    glVertex2i(100,500);
    glEnd();

    glColor3ub ( 255, 144, 91 );
    glBegin(GL_POLYGON);
    glVertex2i(150,500);
    glVertex2i(300,500);
    glVertex2i(300,550);
    glVertex2i(150,550);
    glEnd();

    glColor3ub ( 20, 33, 61 );
    glBegin(GL_POLYGON);
    glVertex2i(150,550);
    glVertex2i(300,550);
    glVertex2i(300,650);
    glVertex2i(150,650);
    glEnd();

    glColor3ub ( 20, 33, 61 );
    glBegin(GL_POLYGON);
    glVertex2i(250,650);
    glVertex2i(300,650);
    glVertex2i(300,700);
    glVertex2i(250,700);
    glEnd();

    glColor3ub ( 20, 33, 61 );
    glBegin(GL_POLYGON);
    glVertex2i(150,650);
    glVertex2i(200,650);
    glVertex2i(200,700);
    glVertex2i(150,700);
    glEnd();



    glFlush ();
}

void myInit (void)
{
    glClearColor(213, 244, 255 , 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 700.0, 0.0, 700.0);
}





int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400,400);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
