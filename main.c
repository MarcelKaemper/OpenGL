#include <GL/glut.h>
#include <stdio.h>

void render(void);

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My new window");
	glutDisplayFunc(render);
	glutMainLoop();
	
	return 0;
}

void render(void) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glBegin(GL_TRIANGLES);
		glColor3f(1,0,0);
		glVertex2f(-0.5, -0.5);
		glColor3f(0,1,0);
		glVertex2f(0.5, -0.5);
		glColor3f(0,0,1);
		glVertex2f(-0.5, 0.5);
		glEnd();
		glutSwapBuffers();
}
