#include <gl/glut.h>

void Garis(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);

    // GL_LINE_STRIP dengan 2 titik = 1 garis
    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 0.0f); // Kuning
        glVertex3f(-0.5f, 0.0f, 0.0f); // Titik awal (kiri)
        glVertex3f( 0.5f, 0.0f, 0.0f); // Titik akhir (kanan)
    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_LINE_STRIP - 1 Garis");
    glutDisplayFunc(Garis);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

