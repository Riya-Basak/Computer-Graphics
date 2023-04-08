#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// red
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.5f, 0.75f);    // x, y
	glVertex2f(-0.5f, 0.3f);    // x, y

	glVertex2f(-0.2f, 0.3f);    // x, y
	glVertex2f(-0.2f, 0.75f);    // x, y
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(90, 10, 10); // Red

	glVertex2f(-0.5f, 0.3f);    // x, y
	glVertex2f(-0.2f, 0.1f);    // x, y

	glVertex2f(-0.1f, 0.1f);    // x, y
	glVertex2f(-0.2f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(80, 10, 10); // Red

	glVertex2f(-0.2f, 0.75f);    // x, y
	glVertex2f(-0.2f, 0.3f);    // x, y

	glVertex2f(-0.1f, 0.1f);    // x, y
	glVertex2f(-0.1f, 0.3f);    // x, y
	glEnd();

	//green
	glBegin(GL_QUADS);
  glColor3f(0.0f, 1.0f, 0.0f); // Red

    glVertex2f(0.2f, 0.75f);
    glVertex2f(0.2f, 0.3f);    // x, y

	    // x, y
	glVertex2f(0.5f, 0.3f);    // x, y
    glVertex2f(0.5f, 0.75f);
	   // x, y
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(10, 90, 10); // Red

	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.5f, 0.3f);    // x, y
	glVertex2f(0.2f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(10, 80, 10); // Red

	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.2f, 0.3f);
    glVertex2f(0.2f, 0.75f);    // x, y   // x, y
	glEnd();

//yellow

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.5f, -0.75f);    // x, y
	glVertex2f(-0.5f, -0.3f);    // x, y

	glVertex2f(-0.2f, -0.3f);    // x, y
	glVertex2f(-0.2f, -0.75f);    // x, y
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(90, 90, 10); // Red

	glVertex2f(-0.5f, -0.3f);    // x, y
	glVertex2f(-0.2f, -0.1f);    // x, y

	glVertex2f(-0.1f, -0.1f);    // x, y
	glVertex2f(-0.2f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(80, 80, 10); // Red

	glVertex2f(-0.2f, -0.75f);    // x, y
	glVertex2f(-0.2f, -0.3f);    // x, y

	glVertex2f(-0.1f, -0.1f);    // x, y
	glVertex2f(-0.1f, -0.3f);    // x, y
	glEnd();

	//blue

	glBegin(GL_QUADS);
  glColor3f(0.0f, 0.0f, 1.0f); // Red

    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.3f);    // x, y

	    // x, y
	glVertex2f(0.5f, -0.3f);    // x, y
    glVertex2f(0.5f, -0.75f);
	   // x, y
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(10, 10, 90); // Red

	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.5f, -0.3f);    // x, y
	glVertex2f(0.2f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(10, 10, 80); // Red

	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.75f);    // x, y   // x, y
	glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
