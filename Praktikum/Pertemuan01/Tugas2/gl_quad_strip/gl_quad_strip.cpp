#include <gl/glut.h>

void Gambar(void)
{
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Background biru
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_QUAD_STRIP: setiap pasangan titik baru membentuk 1 segiempat
    // bersama pasangan titik sebelumnya
    glBegin(GL_QUAD_STRIP);

        // Pasangan 1 (paling kiri)
        glColor3f(1.0f, 0.0f, 0.0f); // Merah
        glVertex3f(-0.8f,  0.4f, 0.0f); // Atas kiri
        glVertex3f(-0.8f, -0.4f, 0.0f); // Bawah kiri

        // Pasangan 2 ? membentuk Quad 1 (merah) bersama pasangan 1
        glColor3f(1.0f, 1.0f, 0.0f); // Kuning
        glVertex3f(-0.3f,  0.4f, 0.0f); // Atas
        glVertex3f(-0.3f, -0.4f, 0.0f); // Bawah

        // Pasangan 3 ? membentuk Quad 2 (kuning) bersama pasangan 2
        glColor3f(0.0f, 1.0f, 0.0f); // Hijau
        glVertex3f( 0.2f,  0.4f, 0.0f); // Atas
        glVertex3f( 0.2f, -0.4f, 0.0f); // Bawah

        // Pasangan 4 ? membentuk Quad 3 (hijau) bersama pasangan 3
        glColor3f(0.0f, 1.0f, 1.0f); // Cyan
        glVertex3f( 0.8f,  0.4f, 0.0f); // Atas kanan
        glVertex3f( 0.8f, -0.4f, 0.0f); // Bawah kanan

    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_QUAD_STRIP");
    glutDisplayFunc(Gambar);
    glutMainLoop();
    return 0;
}

