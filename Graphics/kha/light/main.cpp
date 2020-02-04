#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <GL/glut.h>

#define WHITE 1, 1, 1
#define LIGHT 0.0, 1.0, 0.0
#define pi 2*acos(0)

//make a global variable -- for tracking the anglular position of camera
double cameraAngle;			//in radian
double Angle;
double lightAngle;
double cameraAngleDelta;
double cameraVisionAngle;
double cameraRotateAngle;
double height,r,R;
double movingBridge;
double rectAngle;

int canDrawGrid;
int drawaxes;
int up=1;
//GLUquadric* IDquadric=gluNewQuadric() ;//=new GLUquadricObj(

GLuint texid1,texid2;
int num_texture = -1;



struct point
{
	double x,y,z;
};

void drawAxes()
{
	if(drawaxes==1){
		glBegin(GL_LINES);{
			glColor3f(0.8, 0, 0);
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

	texid1 = LoadBitmap("bricks.bmp");   /*here bkg1.bmp is the bitmap image to be used as texture, texid is global varible declared to uniquely  identify this particular image*/
    texid2 = LoadBitmap("wall.bmp");
}



void drawcylinder(float x, float y, float z)
{
	struct point points[10][50];
	int i,j;
	double h,r;
	for(i=0;i<2;i++)
	{
		h = i*100;
		for(j=0;j<=10;j++)
		{
			points[i][j].x = x + 7*cos(((double)j/(double)10)*2*pi);
			points[i][j].y = y + 7*sin(((double)j/(double)10)*2*pi);
			points[i][j].z = z + h;
		}

	}
	glColor3f(WHITE);
	for(i=0;i<1;i++)
	{
		for(j=0;j<10;j++)
		{
			glEnable(GL_TEXTURE_2D);
				glBindTexture(GL_TEXTURE_2D,texid1);
				glNormal3f(1.0,0.0,0.0);
				glBegin(GL_POLYGON);
					glTexCoord2f(0,0); glVertex3f(points[i][j+1].x,points[i][j+1].y,points[i][j+1].z);
					glTexCoord2f(1,0); glVertex3f(points[i][j].x,points[i][j].y,points[i][j].z);
					glTexCoord2f(1,1); glVertex3f(points[i+1][j].x,points[i+1][j].y,points[i+1][j].z);
					glTexCoord2f(0,1); glVertex3f(points[i+1][j+1].x,points[i+1][j+1].y,points[i+1][j+1].z);
				glEnd();
			glDisable(GL_TEXTURE_2D);
		}

	}

}

void drawWall1(float x, float y, float z){
    glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D,texid2);
        glNormal3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glTexCoord2f(0,0); glVertex3f(x+0,y+0,z+0);
            glTexCoord2f(1,0); glVertex3f(x+0,y+20,z+0);
            glTexCoord2f(1,1); glVertex3f(x+0,y+20,z+100);
            glTexCoord2f(0,1); glVertex3f(x+0,y+0,z+100);
        glEnd();
    glDisable(GL_TEXTURE_2D);
}

void drawWall2(float x, float y, float z){
    glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D,texid2);
        glNormal3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glTexCoord2f(0,0); glVertex3f(x+20,y+0,z+0);
            glTexCoord2f(1,0); glVertex3f(x+0,y+0,z+0);
            glTexCoord2f(1,1); glVertex3f(x+0,y+0,z+100);
            glTexCoord2f(0,1); glVertex3f(x+20,y+0,z+100);
        glEnd();
    glDisable(GL_TEXTURE_2D);
}

void drawWall3(float x, float y, float z){
    glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D,texid2);
        glNormal3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glTexCoord2f(0,0); glVertex3f(x+0,y+20,z+0);
            glTexCoord2f(1,0); glVertex3f(x+0,y+0,z+0);
            glTexCoord2f(1,1); glVertex3f(x+0,y+0,z+100);
            glTexCoord2f(0,1); glVertex3f(x+0,y+20,z+100);
        glEnd();
    glDisable(GL_TEXTURE_2D);
}

void drawWall4(float x, float y, float z){
    glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D,texid2);
        glNormal3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glTexCoord2f(0,0); glVertex3f(x+0,y+0,z+0);
            glTexCoord2f(1,0); glVertex3f(x+20,y+0,z+0);
            glTexCoord2f(1,1); glVertex3f(x+20,y+0,z+100);
            glTexCoord2f(0,1); glVertex3f(x+0,y+0,z+100);
        glEnd();
    glDisable(GL_TEXTURE_2D);
}

void display(){

	//clear the display
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);	//color black
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

	gluLookAt(r*cos(Angle),r*sin(Angle), height,		r*cos(cameraAngle),r*sin(cameraAngle),0,		0,1*cos(cameraRotateAngle),1*sin(cameraRotateAngle));
	//NOTE: the camera still CONSTANTLY looks at the center
	// cameraAngle is in RADIAN, since you are using inside COS and SIN


	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);

    /************************************
	/ Add your lighting effects from here
	*************************************/

	//moving light source
/**/   GLfloat position[] = {200.0*cos(lightAngle),200.0*sin(lightAngle), 100, 1.0}; //Positioned at (4, 0, 8)
    glLightfv(GL_LIGHT1, GL_POSITION, position);


  // representative object of the light source
 /* */

    GLfloat light_emission[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat unset[]={0,0,0,1};
    glMaterialfv(GL_FRONT, GL_EMISSION, light_emission);
    glMaterialfv(GL_FRONT, GL_SPECULAR, unset);
    glPushMatrix();
   //glTranslatef (-10.0,-10.0,5);
    glTranslatef (200.0*cos(lightAngle),200.0*sin(lightAngle),100);
    glutSolidSphere(7.0, 36, 36);
    glPopMatrix();

//object being illuminated
/**/   GLfloat mat_ambient[] = { 0.5, 0.5, 0.5, 1.0 };
    GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5, 1.0 };
    GLfloat mat_specular[] = { LIGHT, 1.0 }; //equal to the light source
    GLfloat low_shininess[] = { 5.0 };
    GLfloat mid_shininess[] = { 50.0 };
    GLfloat high_shininess[] = { 100.0 };

    glPushMatrix();
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glMaterialfv(GL_FRONT, GL_EMISSION, unset);
    glPopMatrix();
	/****************************
	/ Add your objects from here
	****************************/
	//add objects
	drawAxes();
	glutSolidSphere(30.0, 36, 36);
	/*
{
	drawcylinder(50, 50, 0);
    drawcylinder(-50, 50, 0);
    drawcylinder(-50, -50, 0);
    drawcylinder(50, -50, 0);

    drawcylinder(50, 50, 100);
    drawcylinder(-50, 50, 100);
    drawcylinder(-50, -50, 100);
    drawcylinder(50, -50, 100);

    drawcylinder(50, 50, 200);
    drawcylinder(-50, 50, 200);
    drawcylinder(-50, -50, 200);
    drawcylinder(50, -50, 200);

    drawWall1(50, -50, 0);
    drawWall1(50, -30, 0);
    drawWall1(50, -10, 0);
    drawWall1(50, 10, 0);
    drawWall1(50, 30, 0);

    drawWall2(30, 50, 0);
    drawWall2(10, 50, 0);
    drawWall2(-10, 50, 0);
    drawWall2(-30, 50, 0);
    drawWall2(-50, 50, 0);

    drawWall3(-50, 30, 0);
    drawWall3(-50, 10, 0);
    drawWall3(-50, -10, 0);
    drawWall3(-50, -30, 0);
    drawWall3(-50, -50, 0);

    drawWall4(-50, -50, 0);
    drawWall4(-30, -50, 0);
    drawWall4(-10, -50, 0);
    drawWall4(10, -50, 0);
    drawWall4(30, -50, 0);

    drawWall1(50, -50, 100);
    drawWall1(50, -30, 100);
    drawWall1(50, -10, 100);
    drawWall1(50, 10, 100);
    drawWall1(50, 30, 100);

    drawWall2(30, 50, 100);
    drawWall2(10, 50, 100);
    drawWall2(-10, 50, 100);
    drawWall2(-30, 50, 100);
    drawWall2(-50, 50, 100);

    drawWall3(-50, 30, 100);
    drawWall3(-50, 10, 100);
    drawWall3(-50, -10, 100);
    drawWall3(-50, -30, 100);
    drawWall3(-50, -50, 100);

    drawWall4(-50, -50, 100);
    drawWall4(-30, -50, 100);
    drawWall4(-10, -50, 100);
    drawWall4(10, -50, 100);
    drawWall4(30, -50, 100);

    drawWall1(50, -50, 200);
    drawWall1(50, -30, 200);
    drawWall1(50, -10, 200);
    drawWall1(50, 10, 200);
    drawWall1(50, 30, 200);

    drawWall2(30, 50, 200);
    drawWall2(10, 50, 200);
    drawWall2(-10, 50, 200);
    drawWall2(-30, 50, 200);
    drawWall2(-50, 50, 200);

    drawWall3(-50, 30, 200);
    drawWall3(-50, 10, 200);
    drawWall3(-50, -10, 200);
    drawWall3(-50, -30, 200);
    drawWall3(-50, -50, 200);

    drawWall4(-50, -50, 200);
    drawWall4(-30, -50, 200);
    drawWall4(-10, -50, 200);
    drawWall4(10, -50, 200);
    drawWall4(30, -50, 200);

	drawAxes();
}
	*/
	glColor3f(1, 1, 1);

	//ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
	glutSwapBuffers();
}

void animate(){
	//codes for any changes in Camera

	//cameraAngle += cameraAngleDelta;	// camera will rotate at 0.002 radians per frame.	// keep the camera steady NOW!!

	//codes for any changes in Models

	rectAngle -= 1;

	if(movingBridge <= 35 && up == 1){
		movingBridge += 0.125;
		if(movingBridge == 35)up=0;
	}
	if(movingBridge >= 0 && up == 0){
		movingBridge -= 0.125;
		if(movingBridge == 0)up=1;
	}
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
		case '3':	//reverse the rotation of camera
			if(r-3>0) r -= 3;
			break;
		case '4':	//reverse the rotation of camera
			r += 3.0;
			break;
	    case '5':	//reverse the rotation of camera

			break;
		case '6':	//reverse the rotation of camera

			break;
		case '7':	//increase rotation of camera by 10%
            lightAngle += 0.05;
			break;

		case '8':	//decrease rotation
            lightAngle -= 0.05;
			break;

		case '9':	//toggle grids
			canDrawGrid = 1 - canDrawGrid;
			break;

		default:
			break;
	}
}

void specialKeyListener(int key, int x,int y){
	switch(key){
		case GLUT_KEY_DOWN:		//down aRADIUSow key
			height -= 5.0;

			break;
		case GLUT_KEY_UP:		// up aRADIUSow key
			height += 5.0;

			break;

		case GLUT_KEY_RIGHT:
			cameraAngle += 0.03;

			break;
		case GLUT_KEY_LEFT:
			cameraAngle -= 0.03;

			break;

		case GLUT_KEY_PAGE_UP:
			cameraVisionAngle += 0.05;
			break;
		case GLUT_KEY_PAGE_DOWN:
			cameraVisionAngle -= 0.05;
			break;

		case GLUT_KEY_INSERT:
			break;

		case GLUT_KEY_HOME:
			cameraRotateAngle += 0.05;
			break;
		case GLUT_KEY_END:
			cameraRotateAngle -= 0.05;
			break;

		default:
			break;
	}
}

void init(){
	//codes for initialization
	cameraAngle = -2.5;	//// init the cameraAngle
	Angle = 0.8;
	lightAngle = 0.8;
	cameraAngleDelta = 0.02;
	cameraVisionAngle = 0.0;
	cameraRotateAngle = 1.58;
	movingBridge = 0.0;
	rectAngle = 0;
	height=200;
	canDrawGrid = 1;
	drawaxes = 1;
    r=500;
	R=700;
	func();


	//clear the screen
	glClearColor(0, 0, 0, 0);
	glShadeModel(GL_SMOOTH);

	//glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);


	//Add global ambient light
   GLfloat lmodel_ambient[] = { .3, .3, .3, .3 }; //color of the global ambient light
   glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);





   //effect of local light source: directed diffuse light
/**/GLfloat diffuseDir[] = {LIGHT, 1.0}; //Color (0.5, 0.2, 0.2)
    GLfloat lightDir[] = {1, 1, 1, 0.0}; //Coming from the direction (-1, 0.5, 0.5)
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseDir);
    glLightfv(GL_LIGHT0, GL_POSITION, lightDir);


	//effect of local light source: point diffuse light
	/**/
    GLfloat diffusePoint[] = {LIGHT, 1.0}; //Color (0.5, 0.5, 0.5)
    //GLfloat position[] = {-10.0, -10.0, 5.0, 1.0}; //Positioned at (-10, -10, 5)
    glLightfv(GL_LIGHT1, GL_DIFFUSE, diffusePoint); //
    //glLightfv(GL_LIGHT1, GL_POSITION, position);



    glEnable(GL_NORMALIZE); //Automatically normalize normals needed by the illumination model
    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0); //Enable light #0
	glEnable(GL_LIGHT1); //Enable light #1

	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);

	//initialize the matrix
	glLoadIdentity();

	//give PERSPECTIVE parameters
	gluPerspective(70,	1,	0.1,	10000.0);
	//field of view in the Y (vertically)
	//aspect ratio that determines the field of view in the X direction (horizontally)
	//near distance
	//far distance
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	//Depth, Double buffer, RGB color

	glutCreateWindow("My OpenGL Program");

	init();

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occurring)

	//ADD keyboard listeners:
	glutKeyboardFunc(keyboardListener);
	glutSpecialFunc(specialKeyListener);

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
