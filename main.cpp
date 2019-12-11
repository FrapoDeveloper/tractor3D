#include <gl/glut.h>
/*AUTOR: FRAN ESPINO MOSTACERO*/

GLUquadricObj *p = gluNewQuadric(); //graficar cilindros
float rota=0;
class Tractor{
    public: float angX = 0;
            float angY = 0;
            float angZ = 0;
            float anguloRotaBase = 0;
            float anguloRotaCabina= 0;
            GLUquadricObj *p = gluNewQuadric();
    public : void graficarBase();
             void graficarDonus();
             void graficarMediana();
             void graficarPequenio();
             void graficarLlantas();
             void graficarPelotitas();
             void graficarCabina();
             void graficarBrazo2();


};

void Tractor::graficarBase(){
        glColor3f( 0.784 , 0.450 , 0.082 );

         glPushMatrix();
             glScaled(8,2,12);
             glutSolidCube(5);
        glPopMatrix();

}

void Tractor::graficarDonus(){


        glPushMatrix();
             glPushMatrix();
                   glRotated(90,1,0,0);
                   glTranslated(0,0,-8);
                   glColor3f(1.0,1.0,1.0);
                   glutWireTorus(6,6,60,60);
        glPopMatrix();
}

 void Tractor::graficarMediana(){
      glColor3f( 0.807 , 0.607 ,  0.0  );
        glPushMatrix();

            glScaled(2.5,1,3.5);
            glTranslated(0,15,0);
            glutSolidCube(10);
        glPopMatrix();
 }

 void Tractor::graficarLlantas(){
    glPushMatrix();

        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotated(90,0,1,0);
            glTranslated(0.5,0.05,20);
            glScaled(5.1,-1.3,2);
             glRotated(rota,1,0,0);
            glutWireTorus(6,2.1,150,10); //queda
        glPopMatrix();

         glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotated(90,0,1,0);
            glTranslated(-0.5,-0.05,-20);
            glScaled(5.1,-1.3,2);
            glRotated(rota,1,0,0);
            glutWireTorus(6,2.1,150,10); //queda
        glPopMatrix();
    glPopMatrix();


 }
void Tractor::graficarPelotitas(){
        glPushMatrix();
        //camara ojo pez
       /* glTranslated(23,0,0);
            glScaled(-5.99,-5.99,-5.99);
            glColor3i(0,0,0);
            glutSolidSphere(30,30,30);
        glPopMatrix();*/
             glPushMatrix();

             glTranslated(23,0,-24);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();

             glTranslated(23,0,-12);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(23,0,0);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(23,0,12);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
             glTranslated(23,0,24);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();
            //------------------------------
            glPushMatrix();

             glTranslated(-23,0,-24);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();

             glTranslated(-23,0,-12);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(-23,0,0);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
            glTranslated(-23,0,12);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

            glPushMatrix();
             glTranslated(-23,0,24);
                glScaled(-0.19,-0.19,-0.19);
                glColor3i(0,0,0);
                glutSolidSphere(30,30,30);
            glPopMatrix();

        glPopMatrix();
}



void Tractor::graficarPequenio(){

glColor3f(  1.0  , 0.760 ,  0.0  );
        glPushMatrix();
            glScaled(2.5,2.5,3.5);
            glTranslated(0,10,0);
            glutSolidCube(5);
        glPopMatrix();
}

void Tractor::graficarCabina(){

        glPushMatrix();
            //bola mueve
            glPushMatrix();
            glRotated(265,0,1,0);
            glColor3f( 0.784 , 0.450 , 0.082 );
                glScaled(2.5,2.5,3.5);
                glTranslated(0,14,0);
                glutSolidTeapot(2);
            glPopMatrix();
            //mano 1
            glPushMatrix();
                glColor3f( 0.784 , 0.450 , 0.082 );
                glTranslated(0,35,3.5);
                glScaled(2,2,2);
                glRotated(-35,1,0,0);
                gluCylinder(p,1,1,10,80,60);
            glPopMatrix();

            //escabadora
                 glPushMatrix();
                    glColor3f(0.0,0.0,0.0);
                    glTranslated(0,27,35);
                    glutSolidCube(10);
                glPopMatrix();

                 glPushMatrix();
                 glTranslated(0,27,39);

                    glColor3f(0.0,0.0,0.0);
                    gluCylinder(p,2,0,10,80,60);
                glPopMatrix();

                glPushMatrix();
                glTranslated(3,27,39);

                    glColor3f(0.0,0.0,0.0);
                    gluCylinder(p,2,0,10,80,60);
                glPopMatrix();

                 glPushMatrix();
                glTranslated(-3,27,39);

                    glColor3f(0.0,0.0,0.0);
                    gluCylinder(p,2,0,10,80,60);
                glPopMatrix();

        glPopMatrix();



}

void Tractor::graficarBrazo2(){

     glPushMatrix();
                glTranslated(0,46.8,21);
                glScaled(-0.19,-0.19,-0.19); //achicar
                glColor3i(0,0,0);
                glutSolidSphere(20,20,20);
    glPopMatrix();

    glPushMatrix();
    glColor3f( 0.784 , 0.450 , 0.082 );
                glTranslated(0,46,20);
                glScaled(2,2,2);
                glRotated(50,1,0,0);
                gluCylinder(p,1,1,10,80,60);

    glPopMatrix();





}


void printText(float x, float y, int spacing, void *font, char *string)
{
  char *c;
  int x1=x;

  for (c=string; *c != '\0'; c++)
{
    glRasterPos2f(x1,y);
    glutBitmapCharacter(font, *c);

    x1 = x1 + glutBitmapWidth(font,*c);
  }
}

Tractor tractor;

void graficarEjes()
{
    glColor3f(0,0,0);
    glBegin(GL_LINES);

        glColor3f(1,0,0);
        glVertex3f(0,0,0);
        glVertex3f(50,0,0);

        glColor3f(0,1,0);
        glVertex3f(0,0,0);
        glVertex3f(0,50,0);

        glColor3f(0,0,1);
        glVertex3f(0,0,0);
        glVertex3f(0,0,50);
    glEnd();
}


void graficar(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(50,50,50,0,0,0,0,1,0);
    glRotated(300,tractor.angX,tractor.angY,tractor.angZ);
    graficarEjes();
    printText(-100,80,0.05,GLUT_BITMAP_HELVETICA_18,"*****TRACTOR*****");

        glTranslated(0,0,tractor.anguloRotaBase);
        tractor.graficarBase();
        tractor.graficarLlantas();
         tractor.graficarPelotitas();
         glPushMatrix();

            glRotated(tractor.anguloRotaCabina,0,1,0);
            tractor.graficarDonus();
            glPushMatrix();
                tractor.graficarMediana();
                tractor.graficarPequenio();
                tractor.graficarCabina();
                tractor.graficarBrazo2();
            glPopMatrix();
          glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();




}

void inicializar(void)
{
    glClearColor(81.0f/255.0f, 213.0f/255.0f, 38.0f/255.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    gluQuadricDrawStyle(tractor.p,GLU_LINE);
}

void redimensionar(int w, int h){

	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluPerspective(80.0,(float)w/(float)h,1,100);
}



void manejarTeclado(unsigned char key,int x, int y)
{
    switch(key)
    {
        case 'x':   tractor.angX = tractor.angX + 10;
                    break;
        case 'y':    tractor.angY = tractor.angY + 10;
                    break;
        case 'z':    tractor.angZ = tractor.angZ + 10;
                    break;
         case 'a':   tractor.angX = tractor.angX - 10;
                    break;
        case 'b':    tractor.angY = tractor.angY - 10;
                    break;
        case 'c':    tractor.angZ = tractor.angZ - 10;
                    break;
        case 'n':    tractor.angX = 0;
                     tractor.angY = 0;
                     tractor.angZ = 0;
                    break;

        case 'j':  tractor.anguloRotaBase =tractor.anguloRotaBase+0.5;
                    break;
        case 'l':  tractor.anguloRotaBase =tractor.anguloRotaBase-0.5;
                    break;
        case 'i': tractor.anguloRotaCabina = tractor.anguloRotaCabina+3;
                    break;

    }
    glutPostRedisplay();
}

void Manejo()
{
     rota=rota+20;
     glutPostRedisplay();

}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("j=Avanza | l=Retrocede | i=Muevecabina | Direfentes ang = x,y,z,a,b,c | N=Normalidad");
    inicializar();
    glutDisplayFunc(graficar);
	glutReshapeFunc(redimensionar);
	glutKeyboardFunc(manejarTeclado);//TECLADO
	glutIdleFunc(Manejo);
	 glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glutMainLoop();
    return 0;
}
