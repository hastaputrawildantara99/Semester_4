#include <gl/glut.h>

void Gambar(void)
{
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Background biru
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_TRIANGLE_FAN - bentuk berlian (diamond)
    // Titik pertama = pusat
    glBegin(GL_TRIANGLE_FAN);

        glColor3f(1.0f, 1.0f, 1.0f); // Putih - titik pusat
        glVertex3f( 0.0f,  0.0f, 0.0f); // Pusat

        glColor3f(0.0f, 1.0f, 1.0f); // Cyan - atas
        glVertex3f( 0.0f,  0.6f, 0.0f); // Atas

        glColor3f(1.0f, 0.0f, 1.0f); // Magenta - kanan
        glVertex3f( 0.4f,  0.0f, 0.0f); // Kanan

        glColor3f(0.0f, 1.0f, 1.0f); // Cyan - bawah
        glVertex3f( 0.0f, -0.6f, 0.0f); // Bawah

        glColor3f(1.0f, 0.0f, 1.0f); // Magenta - kiri
        glVertex3f(-0.4f,  0.0f, 0.0f); // Kiri

        glColor3f(0.0f, 1.0f, 1.0f); // Cyan - tutup ke atas lagi
        glVertex3f( 0.0f,  0.6f, 0.0f); // Kembali ke atas (menutup)

    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_TRIANGLE_FAN - Diamond");
    glutDisplayFunc(Gambar);
    glutMainLoop();
    return 0;
}

