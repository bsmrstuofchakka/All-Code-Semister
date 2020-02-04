#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <GL/glut.h>

#define WHITE 1, 1, 1
#define pi 2*acos(0)
#define LIGHT 0.0, 0.0, 1.0


//make a global variable -- for tracking the anglular position of camera
double cameraAngle;			//in radian
double Angle,lightAngle;
double cameraRotateAngle;
double cameraHeight;

int canDrawGrid;
int drawaxes;

GLuint texid1,texid2,texid3,texid4,texid5,texid6,texid7,texid8;
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

	texid1 = LoadBitmap("big ben.bmp");   /*here bkg1.bmp is the bitmap image to be used as texture, texid is global varible declared to uniquely  identify this particular image*/
	texid2 = LoadBitmap("bricks.bmp");
	texid3 = LoadBitmap("wall.bmp");      /*here bkg1.bmp is the bitmap image to be used as texture, texid is global varible declared to uniquely  identify this particular image*/
    texid4 = LoadBitmap("clock2.bmp");
    texid6 = LoadBitmap("upper.bmp");
    texid5 = LoadBitmap("top.bmp");
    texid7 = LoadBitmap("grey2.bmp");
    texid8 = LoadBitmap("yellow.bmp");
}

void wall(int x1,int y1,int z1,int x2,int y2,int z2,int x3,int y3,int z3,int x4,int y4,int z4,int h,int u,int v,GLuint texid)
{
     glColor3f(WHITE);
	glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(x1,y1,z1+h);
				glTexCoord2f(u,0); glVertex3f(x2,y2,z2+h);
				glTexCoord2f(u,v); glVertex3f(x3,y3,z3+h);
				glTexCoord2f(0,v); glVertex3f(x4,y4,z4+h);
			glEnd();


		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();
}

void drawcylinder(float x, float y, float z)
{
	struct point points[10][50];
	int i,j;
	double h,r;
	for(i=0;i<2;i++)
	{
		h = i*150;
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
				glBindTexture(GL_TEXTURE_2D,texid3);
				glNormal3f(1.0,0.0,0.0);
				glBegin(GL_POLYGON);
					glTexCoord2f(0,0); glVertex3f(points[i][j+1].x,points[i][j+1].y,points[i][j+1].z);
					glTexCoord2f(1,0); glVertex3f(points[i][j].x,points[i][j].y,points[i][j].z);
					glTexCoord2f(1,5); glVertex3f(points[i+1][j].x,points[i+1][j].y,points[i+1][j].z);
					glTexCoord2f(0,5); glVertex3f(points[i+1][j+1].x,points[i+1][j+1].y,points[i+1][j+1].z);
				glEnd();
			glDisable(GL_TEXTURE_2D);
		}

	}

}
void displayTexture(){
    glColor3f(WHITE);

    ///map
	glPushMatrix();{
		glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,texid1);
			glNormal3f(1.0,0.0,0.0);
			glBegin(GL_POLYGON);
				glTexCoord2f(0,0); glVertex3f(200,200,0);
				glTexCoord2f(1,0); glVertex3f(-200,200,0);
				glTexCoord2f(1,1); glVertex3f(-200,-200,0);
				glTexCoord2f(0,1); glVertex3f(200,-200,0);
			glEnd();

           int x1,x2,x3,x4,y1,y2,y3,y4,z1,z2,z3,z4,h,u,v,texid;
           ///wall
           x1=y1=x2=y2=x3=y3=x4=y4=28;
           z1=z2=0;z3=z4=120;
           u=4,v=5;
           h=0;
           texid=texid2;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);
           //cylinder
           drawcylinder(25, 25, 0);
           drawcylinder(-25, 25, 0);
           drawcylinder(-25, -25, 0);
           drawcylinder(25, -25, 0);

           ///clock
           x1=y1=x2=y2=x3=y3=x4=y4=32;
           z1=z2=0;z3=z4=40;
           u=1,v=1;
           h=120;
           texid=texid4;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);
           //clock map
           x1=y1=x2=y2=x3=y3=x4=y4=32;
           z1=z2=0;z3=z4=0;
           u=1,v=1;
           h=120;
           texid=texid7;
           wall(x1,y1,z1,-x2,y2,z2,-x3,-y3,z3,x4,-y4,z4,h,u,v,texid);

           ///black
           x1=y1=x2=y2=32;x3=y3=x4=y4=20;
           z1=z2=0;z3=z4=6;
           u=1,v=1;
           h=160;
           texid=texid7;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

           ///upper
           x1=y1=x2=y2=20;x3=y3=x4=y4=20;
           z1=z2=0;z3=z4=15;
           u=5,v=1;
           h=166;
           texid=texid5;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);


           ///upper black
           x1=y1=x2=y2=20;x3=y3=x4=y4=15;
           z1=z2=0;z3=z4=15;
           u=1,v=1;
           h=181;
           texid=texid7;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

           ///top
           x1=y1=x2=y2=15;x3=y3=x4=y4=15;
           z1=z2=0;z3=z4=15;
           u=5,v=1;
           h=196;
           texid=texid6;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

           ///top black
           x1=y1=x2=y2=15;x3=y3=x4=y4=4;
           z1=z2=0;z3=z4=40;
           u=1,v=1;
           h=211;
           texid=texid7;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

           ///topper black
           x1=y1=x2=y2=4;x3=y3=x4=y4=4;
           z1=z2=0;z3=z4=25;
           u=1,v=1;
           h=251;
           texid=texid7;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

           ///topper polygon
           x1=y1=x2=y2=5;x3=y3=x4=y4=5;
           z1=z2=0;z3=z4=3;
           u=1,v=1;
           h=276;
           texid=texid7;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

           //topper polygon map
           x1=y1=x2=y2=5;x3=y3=x4=y4=5;
           z1=z2=0;z3=z4=0;
           u=1,v=1;
           h=276;
           texid=texid2;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);

           ///toppest triangle
           x1=y1=x2=y2=4;x3=y3=x4=y4=0;
           z1=z2=0;z3=z4=12;
           u=1,v=1;
           h=279;
           texid=texid8;
           wall(-x1,y1,z1,-x2,-y2,z2,-x3,-y3,z3,-x4,y4,z4,h,u,v,texid);
           wall(-x1,-y1,z1,x2,-y2,z2,x3,-y3,z3,-x4,-y4,z4,h,u,v,texid);
           wall(x1,-y1,z1,x2,y2,z2,x3,y3,z3,x4,-y4,z4,h,u,v,texid);
           wall(x1,y1,z1,-x2,y2,z2,-x3,y3,z3,x4,y4,z4,h,u,v,texid);

		glDisable(GL_TEXTURE_2D);
	}glPopMatrix();

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

/************************************
	/ Add your lighting effects from here
	*************************************/

	//moving light source
/**/   GLfloat position[] = {200.0*cos(lightAngle),200.0*sin(lightAngle), 100, 1.0}; //Positioned at (4, 0, 8)
    glLightfv(GL_LIGHT1, GL_POSITION, position);


  // representative object of the light source
 /* */

    GLfloat light_emission[] = {1.0, 0.0, 0.0, 1.0};
    GLfloat unset[]={0,0,0,1};
    glMaterialfv(GL_FRONT, GL_EMISSION, light_emission);
    glMaterialfv(GL_FRONT, GL_SPECULAR, unset);
    glPushMatrix();
   //glTranslatef (-10.0,-10.0,5);
    glTranslatef (200.0*cos(lightAngle),200.0*sin(lightAngle),100);
    glutSolidSphere(7.0, 36, 36);
    glPopMatrix();

//object being illuminated
/**/   GLfloat mat_ambient[] = { 1.0, 0.0, 1.0, 1.0 };
    GLfloat mat_diffuse[] = { 0, 0, 0.5, 1.0 };
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
        case '5':
            lightAngle += .05;
            break;
        case '6':
            lightAngle -= .05;
            break;
		default:
			break;
	}
}

void specialKeyListener(int key, int x,int y){
	switch(key){
		case GLUT_KEY_DOWN:		//down aRADIUSow key
			cameraHeight -= 1.0;

			break;
		case GLUT_KEY_UP:		// up aRADIUSow key
			cameraHeight += 1.0;

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
	gluPerspective(70,	1,	10,	10000.0);
	//field of view in the Y (vertically)
	//aspect ratio that determines the field of view in the X direction (horizontally)
	//near distance
	//far distance
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(700, 700);
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
