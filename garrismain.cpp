/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */


#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glLineWidth(2.5);
    glBegin(GL_LINES);

    glColor3f(0.5,1.1,1.1);
    glVertex3f(0.2,0.5,0.0);

    glVertex3f(0.8,0.5,0.0);


    glEnd();
    glFlush();
}
void Initialize()
{

    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}
int main(int iArgc,char**cppArgv){
    glutInit(&iArgc,cppArgv);
    glutInitWindowPosition(200,200);
    glutCreateWindow("point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;

}
