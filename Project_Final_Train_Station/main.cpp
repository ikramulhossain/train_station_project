#include<GL/gl.h>
#include<GL/glut.h>
void Display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
//part one
    glBegin(GL_QUADS);


     glColor3f(1.0,0.0,0.0);

        glVertex3f(0.00f,0.85f,0.0f);
        glVertex3f(0.2f,0.85f,0.0f);
        glVertex3f(0.2f,1.0f,0.0f);
        glVertex3f(0.00f,1.0f,0.0f);
      glEnd();

     glBegin(GL_QUADS);


     glColor3f(1.0,0.0,1.0);

        glVertex3f(0.2f,0.65f,0.0f);
        glVertex3f(0.22f,0.65f,0.0f);
        glVertex3f(0.22f,1.0f,0.0f);
        glVertex3f(0.2f,1.0f,0.0f);

glEnd();
     glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.0f,0.75f,0.0f);
        glVertex3f(0.1f,0.85f,0.0f);
        glVertex3f(0.0f,0.85f,0.0f);



       glEnd();


  glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.2f,0.75f,0.0f);
        glVertex3f(0.1f,0.85f,0.0f);
        glVertex3f(0.2f,0.85f,0.0f);



       glEnd();


//part two
glBegin(GL_QUADS);


     glColor3f(1.0,0.0,0.0);

        glVertex3f(0.22f,0.85f,0.0f);
        glVertex3f(0.4f,0.85f,0.0f);
        glVertex3f(0.4f,1.0f,0.0f);
        glVertex3f(0.22f,1.0f,0.0f);
      glEnd();

     glBegin(GL_QUADS);


     glColor3f(1.0,0.0,1.0);

        glVertex3f(0.4f,0.65f,0.0f);
        glVertex3f(0.42f,0.65f,0.0f);
        glVertex3f(0.42f,1.0f,0.0f);
        glVertex3f(0.4f,1.0f,0.0f);

glEnd();
     glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.22f,0.75f,0.0f);
        glVertex3f(0.3f,0.85f,0.0f);
        glVertex3f(0.22f,0.85f,0.0f);



       glEnd();


  glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.4f,0.75f,0.0f);
        glVertex3f(0.3f,0.85f,0.0f);
        glVertex3f(0.4f,0.85f,0.0f);



       glEnd();





//part three
glBegin(GL_QUADS);


     glColor3f(1.0,0.0,0.0);

        glVertex3f(0.42f,0.85f,0.0f);
        glVertex3f(0.6f,0.85f,0.0f);
        glVertex3f(0.6f,1.0f,0.0f);
        glVertex3f(0.42f,1.0f,0.0f);
      glEnd();

     glBegin(GL_QUADS);


     glColor3f(1.0,0.0,1.0);

        glVertex3f(0.6f,0.65f,0.0f);
        glVertex3f(0.62f,0.65f,0.0f);
        glVertex3f(0.62f,1.0f,0.0f);
        glVertex3f(0.6f,1.0f,0.0f);

glEnd();
     glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.42f,0.75f,0.0f);
        glVertex3f(0.5f,0.85f,0.0f);
        glVertex3f(0.42f,0.85f,0.0f);



       glEnd();


  glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.6f,0.75f,0.0f);
        glVertex3f(0.5f,0.85f,0.0f);
        glVertex3f(0.6f,0.85f,0.0f);



       glEnd();




//part four
glBegin(GL_QUADS);


     glColor3f(1.0,0.0,0.0);

        glVertex3f(0.62f,0.85f,0.0f);
        glVertex3f(0.8f,0.85f,0.0f);
        glVertex3f(0.8f,1.0f,0.0f);
        glVertex3f(0.62f,1.0f,0.0f);
      glEnd();

     glBegin(GL_QUADS);


     glColor3f(1.0,0.0,1.0);

        glVertex3f(0.8f,0.65f,0.0f);
        glVertex3f(0.82f,0.65f,0.0f);
        glVertex3f(0.82f,1.0f,0.0f);
        glVertex3f(0.8f,1.0f,0.0f);

glEnd();
     glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.62f,0.75f,0.0f);
        glVertex3f(0.7f,0.85f,0.0f);
        glVertex3f(0.62f,0.85f,0.0f);



       glEnd();


  glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.8f,0.75f,0.0f);
        glVertex3f(0.7f,0.85f,0.0f);
        glVertex3f(0.8f,0.85f,0.0f);



       glEnd();


//part five
glBegin(GL_QUADS);


     glColor3f(1.0,0.0,0.0);

        glVertex3f(0.82f,0.85f,0.0f);
        glVertex3f(1.0f,0.85f,0.0f);
        glVertex3f(1.0f,1.0f,0.0f);
        glVertex3f(0.82f,1.0f,0.0f);
      glEnd();


     glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(0.82f,0.75f,0.0f);
        glVertex3f(0.9f,0.85f,0.0f);
        glVertex3f(0.82f,0.85f,0.0f);



       glEnd();


  glBegin(GL_POLYGON);


     glColor3f(1.0,1.0,1.0);

        glVertex3f(1.0f,0.75f,0.0f);
        glVertex3f(0.9f,0.85f,0.0f);
        glVertex3f(1.0f,0.85f,0.0f);



       glEnd();



//line

glBegin(GL_QUADS);


     glColor3f(1.0,1.0,0.0);

        glVertex3f(0.0f,0.75f,0.0f);
        glVertex3f(1.0f,0.75f,0.0f);
        glVertex3f(1.0f,0.76f,0.0f);
        glVertex3f(0.0f,0.76f,0.0f);
      glEnd();

 //line two
        glBegin(GL_QUADS);
     glColor3f(1.0,1.0,0.0);

        glVertex3f(0.0f,0.72f,0.0f);
        glVertex3f(1.0f,0.72f,0.0f);
        glVertex3f(1.0f,0.73f,0.0f);
        glVertex3f(0.0f,0.73f,0.0f);
      glEnd();

      glBegin(GL_QUADS);
     glColor3f(1.0,1.0,0.0);

        glVertex3f(0.0f,0.69f,0.0f);
        glVertex3f(1.0f,0.69f,0.0f);
        glVertex3f(1.0f,0.70f,0.0f);
        glVertex3f(0.0f,0.70f,0.0f);
      glEnd();


      //starting 0.65 design train
//compartmain 1
 glBegin(GL_QUADS);
     glColor3f(1.0,0.0,0.0);

        glVertex3f(0.0f,0.3f,0.0f);
        glVertex3f(0.34f,0.3f,0.0f);
        glVertex3f(0.34f,0.65f,0.0f);
        glVertex3f(0.0f,0.65f,0.0f);
      glEnd();




          glFlush();

}

void init (void){
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0,1.0,0.0,1.0,-10.0,10.0);


}

int main(int argc, char** argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Hello");
    init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}

