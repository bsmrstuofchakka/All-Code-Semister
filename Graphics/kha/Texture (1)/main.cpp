#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

#define WHITE 1, 1, 1
#define pi 2*acos(0)

//make a global variable -- for tracking the anglular position of camera
double cameraAngle;			//in radian
double Angle;
double cameraRotateAngle;
double cameraHeight;

int canDrawGrid;
int drawaxes;

GLuint texid1,texid2, texid3;
int num_texture = -1;



struct point
{
	double x,y,z;
};

void drawAxes()
{
	if(drawaxes==1)
	{

		glBegin(GL_LINES);{
			glColor3f(0.8, 0, 0); //Red
			glVertex3f( 800,0,0);
			glVertex3f(-800,0,0);
			glColor3f(0, 0.5, 0);
			glVertex3f(0,-800,0);
			glVertex3f(0, 800,0);
			glColor3f(0, 0, 0.8);
			glVertex3f(0,0, 400);
			glVertex3f(0,0,0);
		}glEnd();
	}
}


int LoadBitmap(char *filename)
{
    int i, j=0;
    FILE *l_file;
    unsigned char *l_texture;

    BITMAPFILEHEADER fileheader;
    BITMAPINFOHEADER infoheader;
    RGBTRIPLE rgb;

    num_texture++;

    if( (l_file = fopen(filename, "rb"))==NULL){
        printf("I am a simple person");
        return (-1);}

    fread(&fileheader, sizeof(fileheader), 1, l_file);

    fseek(l_file, sizeof(fileheader), SEEK_SET);
    fread(&infoheader, sizeof(infoheader), 1, l_file);

    l_texture = (byte *) malloc(infoheader.biWidth * infoheader.biHeight * 4);
    memset(l_texture, 0, infoheader.biWidth * infoheader.biHeight * 4);

 for (i=0; i < infoheader.biWidth*infoheader.biHeight; i++)
    {
            fread(&rgb, sizeof(rgb), 1, l_file);

            l_texture[j+0] = rgb.rgbtRed;
            l_texture[j+1] = rgb.rgbtGreen;
            l_texture[j+2] = rgb.rgbtBlue;
            l_texture[j+3] = 255;
            j += 4;
    }
    fclose(l_file);

    glBindTexture(GL_TEXTURE_2D, num_texture);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);

// glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glTexImage2D(GL_TEXTURE_2D, 0, 4, infoheader.biWidth, infoheader.biHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, l_texture);
     gluBuild2DMipmaps(GL_TEXTURE_2D, 4, infoheader.biWidth, infoheader.biHeight, GL_RGBA, GL_UNSIGNED_BYTE, l_texture);

    free(l_texture);

    return (num_texture);

}

void func(void)
{

	texid1 = LoadBitmap("map.bmp");   /*here bkg1.bmp is the bitmap image to be used as texture, texid is global varible declared to uniquely  identify this particular image*/
    texid2 = LoadBitmap("bricks.bmp");
    texid3 = LoadBitmap("wall.bmp");
}



void displayTexture(){
    glColor3f(WHITE);
	glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid1);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(-243,-150,0);
				glTexCoord2f(1,0); glVertex3f(243,-150,0);
				glTexCoord2f(1,1); glVertex3f(243,150,0);
				glTexCoord2f(0,1); glVertex3f(-243,150,0);
			glEnd();
		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();

     glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid2);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(-18,-21.5,0);
				glTexCoord2f(5,0); glVertex3f(18,-21.5,0);
				glTexCoord2f(5,5); glVertex3f(18,-21.5,200);
				glTexCoord2f(0,5); glVertex3f(-18,-21.5,200);
			glEnd();
		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();

	glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid2);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(21.5,-18,0);
				glTexCoord2f(5,0); glVertex3f(21.5,18,0);
				glTexCoord2f(5,5); glVertex3f(21.5,18,200);
				glTexCoord2f(0,5); glVertex3f(21.5,-18,200);
			glEnd();
		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();

	glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid2);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(18,21.5,0);
				glTexCoord2f(5,0); glVertex3f(-18,21.5,0);
				glTexCoord2f(5,5); glVertex3f(-18,21.5,200);
				glTexCoord2f(0,5); glVertex3f(18,21.5,200);
			glEnd();
		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();

	glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid2);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(-21.5,18,0);
				glTexCoord2f(5,0); glVertex3f(-21.5,-18,0);
				glTexCoord2f(5,5); glVertex3f(-21.5,-18,200);
				glTexCoord2f(0,5); glVertex3f(-21.5,18,200);
			glEnd();
		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();



	glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texid2);
    glNormal3f(1.0,0.0,0.0);


    glTranslatef(20, 20, 0);

    double x = 0;
    double y = 5;
    double i, x1, y1;

    for(i = pi/6; i <= (2*pi + pi/6); i = i+pi/6)
    {
        x1 = sin(i)*5;
        y1 = cos(i)*5;

        glBegin(GL_POLYGON);
            glTexCoord2f(0,0);      glVertex3f(x, y, 0.0);
            glTexCoord2f(1, 0);     glVertex3f(x1, y1, 0.0);
            glTexCoord2f(1, 5);     glVertex3f(x1, y1, 200);
            glTexCoord2f(0, 5);     glVertex3f(x, y, 200);
        glEnd();

        x = x1;
        y = y1;
    }
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texid2);
    glNormal3f(1.0,0.0,0.0);


    glTranslatef(-20, -20, 0);

    for(i = pi/6; i <= (2*pi + pi/6); i = i+pi/6)
    {
        x1 = sin(i)*5;
        y1 = cos(i)*5;

        glBegin(GL_POLYGON);
            glTexCoord2f(0,0);      glVertex3f(x, y, 0.0);
            glTexCoord2f(1, 0);     glVertex3f(x1, y1, 0.0);
            glTexCoord2f(1, 5);     glVertex3f(x1, y1, 200);
            glTexCoord2f(0, 5);     glVertex3f(x, y, 200);
        glEnd();

        x = x1;
        y = y1;
    }
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texid2);
    glNormal3f(1.0,0.0,0.0);


    glTranslatef(-20, 20, 0);

    for(i = pi/6; i <= (2*pi + pi/6); i = i+pi/6)
    {
        x1 = sin(i)*5;
        y1 = cos(i)*5;

        glBegin(GL_POLYGON);
            glTexCoord2f(0,0);      glVertex3f(x, y, 0.0);
            glTexCoord2f(1, 0);     glVertex3f(x1, y1, 0.0);
            glTexCoord2f(1, 5);     glVertex3f(x1, y1, 200);
            glTexCoord2f(0, 5);     glVertex3f(x, y, 200);
        glEnd();

        x = x1;
        y = y1;
    }
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texid2);
    glNormal3f(1.0,0.0,0.0);


    glTranslatef(20, -20, 0);

    for(i = pi/6; i <= (2*pi + pi/6); i = i+pi/6)
    {
        x1 = sin(i)*5;
        y1 = cos(i)*5;

        glBegin(GL_POLYGON);
            glTexCoord2f(0,0);      glVertex3f(x, y, 0.0);
            glTexCoord2f(1, 0);     glVertex3f(x1, y1, 0.0);
            glTexCoord2f(1, 5);     glVertex3f(x1, y1, 200);
            glTexCoord2f(0, 5);     glVertex3f(x, y, 200);
        glEnd();

        x = x1;
        y = y1;
    }
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


}

void display(){

	//clear the display
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(WHITE, 0);	//color black
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	/********************
	/ set-up camera here
	********************/
	//load the correct matrix -- MODEL-VIEW matrix
	glMatrixMode(GL_MODELVIEW);

	//initialize the matrix
	glLoadIdentity();

	//now give three info
	//1. where is the camera (viewer)?
	//2. where is the camera is looking?
	//3. Which direction is the camera's UP direction?

	//instead of CONSTANT information, we will define a circular path.
//	gluLookAt(200,800,200,	200,200,0,	0,0,1);

	gluLookAt(350*cos(cameraAngle), 350*sin(cameraAngle), cameraHeight,		0,0,0,		0,0,1);
	//NOTE: the camera still CONSTANTLY looks at the center
	// cameraAngle is in RADIAN, since you are using inside COS and SIN


	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);


	/****************************
	/ Add your objects from here
	****************************/
	//add objects
    drawAxes();

    displayTexture();


	glColor3f(1, 1, 1);

	//ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
	glutSwapBuffers();
}

void animate(){
	//codes for any changes in Camera

	//cameraAngle += cameraAngleDelta;	// camera will rotate at 0.002 radians per frame.	// keep the camera steady NOW!!

	//codes for any changes in Models

	//MISSING SOMETHING? -- YES: add the following
	glutPostRedisplay();	//this will call the display AGAIN
}


void keyboardListener(unsigned char key, int x,int y){
	switch(key){

		case '1':	//reverse the rotation of camera
			Angle += 0.05;
			break;
		case '2':	//reverse the rotation of camera
			Angle -= 0.05;
			break;
		default:
			break;
	}
}

void specialKeyListener(int key, int x,int y){
	switch(key){
		case GLUT_KEY_DOWN:		//down aRADIUSow key
			cameraHeight -= 3.0;

			break;
		case GLUT_KEY_UP:		// up aRADIUSow key
			cameraHeight += 3.0;

			break;

		case GLUT_KEY_RIGHT:
			cameraAngle += 0.03;

			break;
		case GLUT_KEY_LEFT:
			cameraAngle -= 0.03;

			break;

		case GLUT_KEY_PAGE_UP:
			break;
		case GLUT_KEY_PAGE_DOWN:
			break;

		case GLUT_KEY_INSERT:
			break;

		case GLUT_KEY_HOME:
			break;
		case GLUT_KEY_END:
			break;

		default:
			break;
	}
}

void init(){
	//codes for initialization
	cameraAngle = 1.0;	//// init the cameraAngle
	Angle = 0.8;

	cameraHeight=150;
	canDrawGrid = 1;
	drawaxes = 1;

	func();


	//clear the screen
	glClearColor(WHITE, 0);
	glShadeModel(GL_SMOOTH);
	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);

	//initialize the matrix
	glLoadIdentity();

	//give PERSPECTIVE parameters
	gluPerspective(70,	1,	10,	10000.0);
	//field of view in the Y (vertically)
	//aspect ratio that determines the field of view in the X direction (horizontally)
	//near distance
	//far distance
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	//Depth, Double buffer, RGB color

	glutCreateWindow("My OpenGL Program");

	init();

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occuring)

	//ADD keyboard listeners:
	glutKeyboardFunc(keyboardListener);
	glutSpecialFunc(specialKeyListener);

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
