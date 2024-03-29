#include <GL/glut.h>
#include <stdio.h>

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

void mouse(int button,int state,int x,int y)
{///定義mouse函式
    ///printf("Hello World\n");///遇到mouse印hello
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%150)150.0-(%d*150)/150.0);\n",x,y);
    }
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week03 mouse");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);///設定mouse函式
	glutMainLoop();
}
