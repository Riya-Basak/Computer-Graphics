#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(.5);
	glPointSize(5.0);

	//green
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-0.7f, 0.7f);    // x, y
	glVertex2f(-0.7f, 0.5f);    // x, y

	glVertex2f(0.7f, 0.5f);
	glVertex2f(0.7f, 0.7f);    // x, y
	    // x, y
	glEnd();

	//yellow

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.7f, 0.5f);    // x, y
	glVertex2f(-0.7f, 0.3f);    // x, y

	glVertex2f(0.7f, 0.3f);
	glVertex2f(0.7f, 0.5f);    // x, y
	    // x, y
	glEnd();


	//red
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.7f, 0.3f);    // x, y
	glVertex2f(-0.7f, 0.1f);    // x, y

	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.7f, 0.3f);    // x, y
	    // x, y
	glEnd();

	//


	//red last
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.7f, -0.3f);    // x, y
	glVertex2f(-0.7f, -0.1f);    // x, y

	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, -0.3f);    // x, y
	    // x, y
	glEnd();


	//yellow last

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.7f, -0.5f);    // x, y
	glVertex2f(-0.7f, -0.3f);    // x, y

	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.7f, -0.5f);    // x, y
	    // x, y
	glEnd();



		//green last
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-0.7f, -0.7f);    // x, y
	glVertex2f(-0.7f, -0.5f);    // x, y

	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.7f);    // x, y
	    // x, y
	glEnd();

	//black triangle
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.7f, -0.7f);

	glEnd();

	//white triangle
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.75f, 0.7f);
	glVertex2f(-0.35f, 0.0f);
	glVertex2f(-0.75f, -0.7f);

	glEnd();


	//star


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.75, 0.1f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.45f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.6, 0.35f);
	glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.5f, -0.25f);

	glEnd();

//bird

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.7, -0.1f);
	glVertex2f(-0.68f, -0.23f);
    glVertex2f(-0.53f, -0.23f);
	glVertex2f(-0.5f, -0.1f);

	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.68, -0.0f);
	glVertex2f(-0.7f, -0.1f);
    glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.48f, -0.0f);

	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.65, 0.1f);
	glVertex2f(-0.68, -0.0f);
    glVertex2f(-0.46f, -0.0f);
	glVertex2f(-0.61f, 0.2f);
	glEnd();

	//gola
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68, 0.2f);
	glVertex2f(-0.65, 0.1f);
    glVertex2f(-0.61f, 0.2f);
    glVertex2f(-0.64f, 0.25f);
	glEnd();

	//thot
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68, 0.25f);
	glVertex2f(-0.7, 0.22f);
    glVertex2f(-0.68f, 0.2f);
	glEnd();

	//matha
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68, 0.2f);
	glVertex2f(-0.679, 0.3f);
		glVertex2f(-0.65, 0.3f);
        glVertex2f(-0.63, 0.23f);


	glEnd();

	glBegin(GL_POINTS);

	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.67, 0.26f);
    glEnd();

    glBegin(GL_POINTS);

	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6, -0.06f);
    glEnd();


	//border
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.7, -0.1f);
	glVertex2f(-0.5f, -0.1f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.68f, -0.23f);
    glVertex2f(-0.53f, -0.23f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7, -0.1f);
	glVertex2f(-0.68f, -0.23f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.53f, -0.23f);
	glVertex2f(-0.5f, -0.1f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.68, -0.0f);
	glVertex2f(-0.7f, -0.1f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.46f, -0.0f);
	glVertex2f(-0.61f, 0.2f);
	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.48f, -0.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, 0.2f);
	glVertex2f(-0.65, 0.1f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, 0.2f);
    glVertex2f(-0.64f, 0.25f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	 glVertex2f(-0.68, 0.2f);
	glVertex2f(-0.65, 0.1f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.65, -0.1f);
	glVertex2f(-0.65f, -0.23f);
	glEnd();

//noksa
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.65, -0.15f);
	glVertex2f(-0.51f, -0.15f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.65, 0.05f);
	glVertex2f(-0.67f, -0.1f);
	glEnd();

	//dana

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.63, 0.1f);
	glVertex2f(-0.623f, 0.05f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.46f, -0.0f);
	glVertex2f(-0.61f, 0.05f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.623f, 0.05f);
	glVertex2f(-0.61f, 0.05f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.68, 0.25f);
	glVertex2f(-0.7, 0.22f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.7, 0.22f);
    glVertex2f(-0.68f, 0.2f);
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
