#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<math.h>
#include<limits>
#include<time.h>
#include <GL/glut.h>

#define WHITE 1, 1, 1
#define pi 2*acos(0)

#define WIDTH 500
#define HEIGHT 500

double cameraAngle;			//in radian
double Angle,lightAngle;
double r, height;
double alignPhy, alignShy, alignTheta;
double fieldOfView, aspectRatio, nearPoint;




int canDrawGrid;
int drawaxes;
int index;

struct point
{
    double x,y,z;
};

struct Vector
{
    double i,j,k;
};

struct RGBType
{
    double r,g,b;
};

struct point eye, look, pixels[WIDTH][HEIGHT];
struct Vector up;
struct Vector Camera_n;
struct Vector Camera_u;
struct Vector Camera_v;

Vector subtraction(struct point e,struct point l)
{
    struct Vector v;
    v.i=e.x-l.x;
    v.j=e.y-l.x;
    v.k=e.z-l.z;

    return v;


}

struct Vector normalize(struct Vector v)
{
    struct Vector a;
    double magnitude = sqrt(v.i*v.i+v.j*v.j+v.k*v.k);
    a.i=v.i/magnitude;
    a.j=v.j/magnitude;
    a.k=v.k/magnitude;

    return a;

};


struct Vector Cross(struct Vector a,struct Vector b)
{
    struct Vector v;

    v.i=a.i*b.k-a.k*b.j;
    v.j=a.k*b.i-a.i*b.k;
    v.k=a.i*b.j-a.j*b.i;

    return v;
};

void imagePlaneSetUp()
{
    double x=WIDTH;
    double y=HEIGHT;
    double d=nearPoint;

    double H=2*d*tan((fieldOfView/2)*pi/80);

    double W=H*aspectRatio;


    struct point C,L;

    C.x=eye.x-Camera_n.i*d;
    C.y=eye.y-Camera_n.j*d;
    C.z=eye.z-Camera_n.k*d;


    L.x=C.x-Camera_u.i*W/2-Camera_v.i*H/2;

    for(int i=0; i<WIDTH; i++)
    {
        for(int j=0; j<HEIGHT; j++)
        {
            pixels[i][j].x=L.x+Camera_u.i*i*W/x+Camera_v.i*j*H/y;
            pixels[i][j].y=L.x+Camera_u.j*i*W/x+Camera_v.j*j*H/y;
            pixels[i][j].z=L.x+Camera_u.k*i*W/x+Camera_v.k*j*H/y;

        }
    }
}

struct point floorInterection(int i,int j)
{
    struct point intersection_point;

    double t;
    t=-eye.z/(pixels[i][j].z-eye.z);
    intersection_point.x=eye.x+t*pixels[i][j].x-eye.x;
    intersection_point.y=eye.y+t*pixels[i][j].y-eye.y;
    intersection_point.z=0;

    return intersection_point;



}



void cameraSetUp()
{

    Camera_n=normalize(subtraction(eye,look));
    Camera_u=normalize(Cross(up,Camera_n));
    Camera_v=(Cross(Camera_n,Camera_u));


}



void drawAxes()
{
    if(drawaxes==1)
    {
        glBegin(GL_LINES);
        {
            glColor3f(0.8, 0, 0);
            glVertex3f( 800,0,0);
            glVertex3f(-800,0,0);
            glColor3f(0, 0.5, 0);
            glVertex3f(0,-800,0);
            glVertex3f(0, 800,0);
            glColor3f(0, 0, 0.8);
            glVertex3f(0,0, 400);
            glVertex3f(0,0,0);
        }
        glEnd();
    }
}

void drawGrid()
{
    int i;
    if(canDrawGrid==1)
    {
        glColor3f(0.6, 0.6, 0.6);	//grey
        glBegin(GL_LINES);
        {
            for(i=-30; i<=30; i++)
            {

                if(i==0)
                    continue;	//SKIP the MAIN axes

                //lines parallel to Y-axis
                glVertex3f(i*30, -900, 0);
                glVertex3f(i*30,  900, 0);

                //lines parallel to X-axis
                glVertex3f(-900, i*30, 0);
                glVertex3f( 900, i*30, 0);
            }
        }
        glEnd();
    }
}


void savebmp(const char *filename, int w, int h, int dpi, RGBType *data)
{
    FILE *f;
    int k = w*h;
    int s = 4*k;
    int filesize = 54 + s;
    double factor = 39.375;
    int m = static_cast<int>(factor);

    int ppm = dpi*m;
    unsigned char bmpfileheader[14] = {'B', 'M', 0, 0, 0, 0,  0, 0, 0, 0, 54, 0, 0, 0};
    unsigned char bmpinfoheader[40] = {40, 0, 0, 0,  0, 0, 0, 0,  0, 0, 0, 0,  1, 0, 24, 0};

    bmpfileheader[ 2] = (unsigned char)(filesize);
    bmpfileheader[ 3] = (unsigned char)(filesize>>8);
    bmpfileheader[ 4] = (unsigned char)(filesize>>16);
    bmpfileheader[ 5] = (unsigned char)(filesize>>24);

    bmpinfoheader[ 4] = (unsigned char)(w);
    bmpinfoheader[ 5] = (unsigned char)(w>>8);
    bmpinfoheader[ 6] = (unsigned char)(w>>16);
    bmpinfoheader[ 7] = (unsigned char)(w>>24);

    bmpinfoheader[ 8] = (unsigned char)(h);
    bmpinfoheader[ 9] = (unsigned char)(h>>8);
    bmpinfoheader[10] = (unsigned char)(h>>16);
    bmpinfoheader[11] = (unsigned char)(h>>24);

    bmpinfoheader[21] = (unsigned char)(s);
    bmpinfoheader[22] = (unsigned char)(s>>8);
    bmpinfoheader[23] = (unsigned char)(s>>16);
    bmpinfoheader[24] = (unsigned char)(s>>24);

    bmpinfoheader[25] = (unsigned char)(ppm);
    bmpinfoheader[26] = (unsigned char)(ppm>>8);
    bmpinfoheader[27] = (unsigned char)(ppm>>16);
    bmpinfoheader[28] = (unsigned char)(ppm>>24);

    bmpinfoheader[29] = (unsigned char)(ppm);
    bmpinfoheader[30] = (unsigned char)(ppm>>8);
    bmpinfoheader[31] = (unsigned char)(ppm>>16);
    bmpinfoheader[32] = (unsigned char)(ppm>>24);

    f = fopen(filename, "wb");

    fwrite(bmpfileheader, 1,14,f);
    fwrite(bmpinfoheader, 1,40,f);

    for(int i=0; i<k; i++)
    {
        RGBType rgb = data[i];

        double red = (data[i].r)*255;
        double green = (data[i].g)*255;
        double blue = (data[i].b)*255;

        unsigned char color[3] = {(int)floor(blue), (int)floor(green), (int)floor(red)};

        fwrite(color, 1,3,f);
    }
    fclose(f);
}


void captureImage()
{
    int dpi = 72;
    int X = WIDTH;
    int Y = HEIGHT;
    int n = X*Y;
    RGBType *imagePixels = new RGBType[n];
    cameraSetUp();
    imagePlaneSetUp();

    struct point pt;
    for(int x=0; x<X; x++)
    {
        for(int y=0; y<Y; y++)
        {

            pt =floorInterection(x,y);
            index = y*X + x;

            if(((int)(pt.x/30)%2)==0)
            {

                imagePixels[index].r = 1.0;
                imagePixels[index].g = 1.0;
                imagePixels[index].b = 1.0;

            }
            else
            {
                imagePixels[index].r = 0.0;
                imagePixels[index].g = 0.0;
                imagePixels[index].b = 0.0;

            }
        }
    }

    savebmp("image.bmp", X, Y, dpi, imagePixels);
}

void display()
{

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

    eye.x = r*cos(Angle);
    eye.y = r*sin(Angle);
    eye.z = height;

    look.x = 0;
    look.y = 0;
    look.z = 0;

    up.i = 0;
    up.j = 0;
    up.k = 1;
    //now give three info
    //1. where is the camera (viewer)?
    //2. where is the camera is looking?
    //3. Which direction is the camera's UP direction?

    //instead of CONSTANT information, we will define a circular path.
//	gluLookAt(200,800,200,	200,200,0,	0,0,1);

    gluLookAt(eye.x, eye.y, eye.z,		look.x, look.y, look.z,		up.i, up.j, up.k);
    //NOTE: the camera still CONSTANTLY looks at the center
    // cameraAngle is in RADIAN, since you are using inside COS and SIN


    //again select MODEL-VIEW
    glMatrixMode(GL_MODELVIEW);

    /************************************
    / Add your lighting effects from here
    *************************************/


    // representative object of the light source

    /****************************
    / Add your objects from here
    ****************************/
    //add objects

    drawAxes();
    drawGrid();

    glColor3f(1, 1, 1);

    //ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
    glutSwapBuffers();
}

void animate()
{
    //codes for any changes in Camera
    //MISSING SOMETHING? -- YES: add the following
    glutPostRedisplay();	//this will call the display AGAIN
}



void keyboardListener(unsigned char key, int x,int y)
{
    switch(key)
    {
    case '1':	//reverse the rotation of camera
        Angle += 0.05;
        break;
    case '2':	//reverse the rotation of camera
        Angle -= 0.05;
        break;
    case '3':	//reverse the rotation of camera
        if(r-6>0)
            r -= 6;
        break;
    case '4':	//reverse the rotation of camera
        r += 6.0;
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
    case 'c':   //capture image
        captureImage();
        break;
    default:
        break;
    }
}

void specialKeyListener(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_DOWN:
        height -= 10.0;
        break;
    case GLUT_KEY_UP:
        height += 10.0;
        break;

    case GLUT_KEY_RIGHT:
        cameraAngle += 0.05;
        break;
    case GLUT_KEY_LEFT:
        cameraAngle -= 0.05;
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


void init()
{
    //codes for initialization
    fieldOfView = 70;
    aspectRatio = WIDTH/HEIGHT;
    nearPoint = 10;
    cameraAngle = -2.4;	//// init the cameraAngle
    lightAngle = 0.0;
    Angle = 0.8;
    canDrawGrid = 1;
    drawaxes = 1;
    r=500;
    height=200;
    //clear the screen
    glClearColor(0, 0, 0, 0);
    glShadeModel(GL_SMOOTH);


    /************************
    / set-up projection here
    ************************/
    //load the PROJECTION matrix
    glMatrixMode(GL_PROJECTION);

    //initialize the matrix
    glLoadIdentity();

    //give PERSPECTIVE parameters
    gluPerspective(fieldOfView, aspectRatio,	nearPoint,	10000.0);
    //field of view in the Y (vertically)
    //aspect ratio that determines the field of view in the X direction (horizontally)
    //near distance
    //far distance
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(WIDTH, HEIGHT);
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
