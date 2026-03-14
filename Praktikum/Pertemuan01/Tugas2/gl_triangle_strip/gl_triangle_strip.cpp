#include <gl/glut.h>

void Gambar(void)
{
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Background biru
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_TRIANGLE_STRIP: setiap titik baru membentuk segitiga
    // bersama 2 titik sebelumnya
    glBegin(GL_TRIANGLE_STRIP);

        glColor3f(1.0f, 0.0f, 0.0f); // Merah - kiri atas
        glVertex3f(-0.5f,  0.5f, 0.0f); // Titik 1

        glColor3f(0.0f, 1.0f, 0.0f); // Hijau - kiri bawah
        glVertex3f(-0.5f, -0.5f, 0.0f); // Titik 2

        glColor3f(0.0f, 0.0f, 1.0f); // Biru - kanan atas
        glVertex3f( 0.5f,  0.5f, 0.0f); // Titik 3

        glColor3f(1.0f, 1.0f, 0.0f); // Kuning - kanan bawah
        glVertex3f( 0.5f, -0.5f, 0.0f); // Titik 4

    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_TRIANGLE_STRIP - Persegi Panjang");
    glutDisplayFunc(Gambar);
    glutMainLoop();
    return 0;
}

