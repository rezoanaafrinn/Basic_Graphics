#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
    //green_field
    glBegin(GL_POLYGON);
    glColor3ub (16, 163, 23);
    glVertex2i(0,200);
    glVertex2i(640,200);
    glVertex2i(640,0);
    glVertex2i(0,0);
    glEnd();
    //blue_sky
    glBegin(GL_POLYGON);
    glColor3ub (113, 216, 242);
    glVertex2i(0,480);
    glVertex2i(640,480);
    glVertex2i(640,200);
    glVertex2i(0,200);
    glEnd();

    //left hill
    glBegin(GL_TRIANGLES);
    glColor3ub (119, 60, 11);
    glVertex2i(0,200);
    glVertex2i(340,200);
    glVertex2i(180,350);
    glEnd();

    //right hill
    glBegin(GL_TRIANGLES);
    glColor3ub (119, 60, 11);
    glVertex2i(340,200);
    glVertex2i(640,200);
    glVertex2i(470,350);
    glEnd();

     //Tree_wood
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(100,120);
    glVertex2i(150,120);
    glVertex2i(150,40);
    glVertex2i(100,40);
    glEnd();

    //tree leaf
    glBegin(GL_POLYGON);
    glColor3ub (12, 137, 43);
    glVertex2i(100,120);
    glVertex2i(55,120);
    glVertex2i(80,160);
    glVertex2i(60,170);
    glVertex2i(120,210);
    glVertex2i(180,160);
    glVertex2i(160,160);
    glVertex2i(190,120);
    glEnd();

    //House
    glBegin(GL_POLYGON);
    glColor3ub (238, 249, 149);
    glVertex2i(260,130);
    glVertex2i(350,130);
    glVertex2i(350,40);
    glVertex2i(260,40);
    glEnd();

    //house_door
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(290,100);
    glVertex2i(320,100);
    glVertex2i(320,40);
    glVertex2i(290,40);
    glEnd();

    //first floor front_shade
    glBegin(GL_POLYGON);
    glColor3ub (204, 67, 22);
    glVertex2i(240,130);
    glVertex2i(270,150);
    glVertex2i(330,150);
    glVertex2i(350,130);
    glEnd();

    //second floor front wall
    glBegin(GL_POLYGON);
    glColor3ub (238, 249, 149);
    glVertex2i(270,150);
    glVertex2i(270,190);
    glVertex2i(330,190);
    glVertex2i(330,150);
    glEnd();

    //second floor right wall
    glBegin(GL_POLYGON);
    glColor3ub (215, 237, 163);
    glVertex2i(330,190);
    glVertex2i(330,150);
    glVertex2i(412,280);
    glVertex2i(410,240);
    glVertex2i(330,150);
    glEnd();

    //first floor right shade
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(330,150);
    glVertex2i(350,130);
    glVertex2i(412,245);
    glVertex2i(430,220);
     glVertex2i(350,130);
    glEnd();

    //first floor right wall
    glBegin(GL_POLYGON);
    glColor3ub (215, 237, 163);
    glVertex2i(350,130);
    glVertex2i(350,40);
    glVertex2i(430,220);
    glVertex2i(430,140);
    glVertex2i(350,40);
    glEnd();

    //second floor window
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(280,160);
    glVertex2i(280,180);
    glVertex2i(320,180);
    glVertex2i(320,160);
    glEnd();

    //Ash
    glBegin(GL_POLYGON);
    glColor3ub (158, 150, 150);
    glVertex2i(350,300);
    glVertex2i(410,280);
    glVertex2i(340,210);
    glVertex2i(260,210);
    glEnd();

    //second floor front shade
    glBegin(GL_POLYGON);
    glColor3ub (204, 67, 22);
    glVertex2i(260,190);
    glVertex2i(260,210);
    glVertex2i(340,210);
    glVertex2i(340,190);
    glEnd();

    //second floor left shade
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(260,210);
    glVertex2i(260,190);
    glVertex2i(340,300);
    glVertex2i(350,290);
    glVertex2i(260,190);
    glEnd();

    //second floor right shade
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(340,210);
    glVertex2i(340,190);
    glVertex2i(400,290);
    glVertex2i(415,280);
    glVertex2i(340,190);
    glEnd();

    //second floor back shade
    glBegin(GL_POLYGON);
    glColor3ub (165, 60, 21);
    glVertex2i(340,300);
    glVertex2i(350,290);
    glVertex2i(400,290);
    glVertex2i(415,280);
    glVertex2i(350,290);
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
glutInitWindowSize (1400, 700);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
