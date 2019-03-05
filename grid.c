#include <GL/glut.h>
#include <stdio.h>

void render(void);

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Grid");
	glutDisplayFunc(render);
	glutMainLoop();

	return 0;
}

void render(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	float size = 0.1;
	float space = 0.05;
	float spacerSize = size+space;

	/* glBegin(GL_POLYGON); */
	/* 	glVertex2f(-1,1); */
	/* 	glVertex2f(-1+size,1); */
	/* 	glVertex2f(-1+size,1-size); */
	/* 	glVertex2f(-1,1-size); */
	/* glEnd(); */

	/* glBegin(GL_POLYGON); */
	/* 	glVertex2f(-1+size,1); */
	/* 	glVertex2f(-1+size*2,1); */
	/* 	glVertex2f(-1+size*2,1-size); */
	/* 	glVertex2f(-1,1-size); */
	/* glEnd(); */

	for(int i = 0; i<10;i++){
		glBegin(GL_POLYGON);
			/* 1 */	
			glColor3f(1,0,1);	
			glVertex2f(-1+size*i,1);
			/* 3 */	
			glColor3f(0,0,1);	
			glVertex2f(-1+size+size*i,1);
			/* 4 */	
			glColor3f(1,0,0);	
			glVertex2f(-1+size+size*i,1-size);
			/* 2 */	
			glColor3f(1,1,1);	
			glVertex2f(-1+size*i,1-size);
		glEnd();
		glFlush();
	}


	glutSwapBuffers();

}
