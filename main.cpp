#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//rectangle
glColor3f (1, 0, 0);
glBegin(GL_POLYGON);
glVertex2f (0.10, 0.10);
glVertex2f (0.60, 0.10);
glVertex2f (0.60, 0.50);
glVertex2f (0.10, 0.50);
glEnd();

//roof
glColor3f (.30, .205, .214);
glBegin(GL_TRIANGLES);
glVertex2f (0.10, 0.50);
glVertex2f (0.60, 0.50);
glVertex2f (0.35, 0.70);

glEnd();

//door
glColor3f (.70, .75, .71);
glBegin(GL_POLYGON);
glVertex2f (0.30, 0.10);
glVertex2f (0.45, 0.10);
glVertex2f (0.45, 0.40);
glVertex2f (0.30, 0.40);
glEnd();

//kopatika left
glColor3f (0, 0, 0.222);
glBegin(GL_POLYGON);
glVertex2f (0.30, 0.10);
glVertex2f (0.35, 0.15);
glVertex2f (0.35 ,0.30);
glVertex2f (0.30, 0.40);
glEnd();


//kopatika right
glColor3f (0, 0, 0.222);
glBegin(GL_POLYGON);
glVertex2f (0.45, 0.10);
glVertex2f (0.45, 0.40);
glVertex2f (0.4 ,0.30);
glVertex2f (0.4, 0.15);
glEnd();
//window
glColor3f (1, 1, 1);
glBegin(GL_POLYGON);
glVertex2f (0.13, 0.19);
glVertex2f (0.28, 0.19);
glVertex2f (0.28, 0.33);
glVertex2f (0.13, 0.33);
glEnd();

//horizontal gril
glColor3f(0,0,0);
glBegin(GL_LINES);
    glVertex2f(0.13, 0.22);
    glVertex2f(0.28,0.22);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.13, 0.255);
    glVertex2f(0.28,0.255);
    glEnd();

    glColor3f(0,0,0);
glBegin(GL_LINES);
    glVertex2f(0.13, 0.29);
    glVertex2f(0.28,0.29);
    glEnd();
//vertical gril
    glColor3f(0,0,0);
glBegin(GL_LINES);
    glVertex2f(0.16, 0.19);
    glVertex2f(0.16,0.33);
    glEnd();

    glColor3f(0,0,0);
glBegin(GL_LINES);
    glVertex2f(0.19, 0.19);
    glVertex2f(0.19,0.33);
    glEnd();

    glColor3f(0,0,0);
glBegin(GL_LINES);
    glVertex2f(0.22, 0.19);
    glVertex2f(0.22,0.33);
    glEnd();

    glColor3f(0,0,0);
glBegin(GL_LINES);
    glVertex2f(0.25, 0.19);
    glVertex2f(0.25,0.33);
    glEnd();



    //tree
    glColor3f (.43, .68, .46);
glBegin(GL_POLYGON);
glVertex2f (0.75, 0.10);
glVertex2f (0.85, 0.10);
glVertex2f (0.85, 0.55);
glVertex2f (0.75, 0.55);
glEnd();

glColor3f (0,1,0);
glBegin(GL_TRIANGLES);
glVertex2f (0.60, 0.55);
glVertex2f (.98, 0.55);
glVertex2f (0.80, 0.8);

glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (850, 850);
glutInitWindowPosition (100, 100);
glutCreateWindow ("House and Tree Designing: Ashikul Aziz Siddique");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
