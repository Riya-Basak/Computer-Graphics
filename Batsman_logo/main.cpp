#include <windows.h>
#include <GL/glut.h>


void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3.5);

//yellow background
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.5f,0.9f);
    glVertex2f(-0.9f,0.25f);
    glVertex2f(-0.9f,-0.25f);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(0.5f,-0.9f);
    glVertex2f(0.9f,-0.25f);
    glVertex2f(0.9f,0.25f);
    glVertex2f(0.5f,0.9f);
     glEnd();
//black border
	 glBegin(GL_LINES);
     glColor3f(0.0f, 0.0f, 0.0f);
	 glVertex2f(-0.5f,0.9f);
     glVertex2f(0.5f,0.9f);

     glVertex2f(-0.5f,0.9f);
     glVertex2f(-0.9f,0.25f);


    glVertex2f(-0.9f,0.25f);
    glVertex2f(-0.9f,-0.25f);


    glVertex2f(-0.5f,-0.9f);
    glVertex2f(0.5f,-0.9f);

     glVertex2f(-0.9f,-0.25f);
    glVertex2f(-0.5f,-0.9f);


    glVertex2f(0.9f,-0.25f); //right side
    glVertex2f(0.5f,-0.9f);

    glVertex2f(0.9f,0.25f);
    glVertex2f(0.9f,-0.25f);

    glVertex2f(0.9f,0.25f);
    glVertex2f(0.5f,0.9f);

     glEnd();

//bat
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.5f,0.6f);
    glVertex2f(-0.8f,0.2f);
    glVertex2f(-0.8f,-0.2f);

    glVertex2f(-0.5f,-0.65f);
    glVertex2f(-0.45f,-0.65f);
    glVertex2f(-0.45f,0.6f);
        glVertex2f(-0.45f,0.6f);
        glVertex2f(-0.45f,0.5f);
        glVertex2f(-0.4f,0.5f);
        glVertex2f(-0.4f,0.6f);


    glEnd();



    //right
     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.45f,0.6f);
    glVertex2f(0.45f,-0.65f);
    glVertex2f(0.5f,-0.65f);
    glVertex2f(0.8f,-0.2f);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.5f,0.6f);


    glVertex2f(0.4f,0.6f);
          glVertex2f(0.4f,0.5f);
        glVertex2f(0.45f,0.5f);
            glVertex2f(0.45f,0.6f);



    glEnd();

    //body
   glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(-0.2f,0.6f);
        glVertex2f(-0.2f,-0.5f);

        glVertex2f(0.0f,-0.7f);

        glVertex2f(0.2f,-0.5f);


        glVertex2f(0.2f,0.5f);
        glVertex2f(0.2f,0.6f);

    glEnd();


 glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(-0.2f,0.7f);
        glVertex2f(-0.2f,0.6f);
        glVertex2f(-0.1f,0.6f);
        glVertex2f(-0.1f,0.7f);
            glEnd();

     glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(0.2f,0.7f);
        glVertex2f(0.2f,0.6f);
        glVertex2f(0.1f,0.6f);
        glVertex2f(0.1f,0.7f);
            glEnd();


glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(-0.45f,0.25f);
        glVertex2f(-0.45f,-0.7f);
        glVertex2f(-0.4f,-0.7f);
        glVertex2f(-0.4f,-0.6f);

        glVertex2f(-0.25f,-0.5f);
                glVertex2f(-0.25f,-0.45f);
                        glVertex2f(-0.2f,-0.45f);
            glVertex2f(-0.2f,-0.5f);



        glVertex2f(-0.2f,0.25);


            glEnd();
//yellow bakeup
glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);

        glVertex2f(-0.4f,0.45f);
        glVertex2f(-0.4,0.2f);
        glVertex2f(-0.25f,0.2f);
        glVertex2f(-0.25f,0.45f);
                    glEnd();


glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
     glVertex2f(-0.2f,-0.45f);
        glVertex2f(-0.2,-0.5f);
        glVertex2f(-0.25f,-0.5f);
        glVertex2f(-0.25f,-0.45f);


                    glEnd();

//rightside joint
glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);

      /*  glVertex2f(0.45f,0.25f);
        glVertex2f(0.45f,-0.7f);
        glVertex2f(0.4f,-0.7f);

        glVertex2f(0.4f,-0.6f);

        glVertex2f(0.2f,-0.5f);

            glVertex2f(0.2f,-0.5f);

        glVertex2f(0.2f,0.25);

                        glVertex2f(0.2f,-0.45f);
                        glVertex2f(0.25f,-0.45f);
         glVertex2f(0.25f,-0.5f);

*/
  glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(0.45f,0.25f);
        glVertex2f(0.45f,-0.7f);
        glVertex2f(0.4f,-0.7f);
        glVertex2f(0.4f,-0.6f);

        glVertex2f(0.25f,-0.5f);
                glVertex2f(0.25f,-0.45f);
                        glVertex2f(0.2f,-0.45f);
            glVertex2f(0.2f,-0.5f);



        glVertex2f(0.2f,0.25);



            glEnd();
//yellow bakeup
glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);

        glVertex2f(0.4f,0.45f);
        glVertex2f(0.4,0.2f);
        glVertex2f(0.25f,0.2f);
        glVertex2f(0.25f,0.45f);
                    glEnd();

glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
     glVertex2f(0.2f,-0.45f);
        glVertex2f(0.2,-0.5f);
        glVertex2f(0.25f,-0.5f);
        glVertex2f(0.25f,-0.45f);


                    glEnd();


glFlush();

}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
