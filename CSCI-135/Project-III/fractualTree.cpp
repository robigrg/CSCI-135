#include <conio.h> 
#include <graphics.h> 
#include <math.h> 

void drawLine(int x1, int y1, int x2, int y2, int width)
{
    for (int i = -width/2; i < width/2; i++)
           line(x1+i, y1, x2+i, y2);
}

void vShapeBranch(int x, int y, int length, int width, double startAngle, double angle, int layer)
{
    if (layer > 1 && layer < 11)
    {
        int newLength = length * 3/4 ; 
        int newWidth = width * 2/3;
        
        if(newLength <= 10)
        {
            newLength = 10;
        }
        
        if (newWidth <= 2)
        {
            newWidth = 2;
        }
       
        double newAngle = startAngle - angle; int x1 = x - (length * cos(newAngle)), y1 = y - (length * sin(newAngle));
        drawLine(x, y, x1, y1, newWidth);
        vShapeBranch(x1, y1, newLength, newWidth, newAngle, angle, layer-1);
        
        newAngle = startAngle + angle;
        x1 = x - (length * cos(newAngle));
        y1 = y - (length * sin(newAngle));
        drawLine(x, y, x1, y1, newWidth);
        vShapeBranch(x1, y1, newLength, newWidth, newAngle, angle, layer-1);
    }
  
}

void drawTree(int x, int y, int length, int width, double startAngle, double angle, int layer)
{
    drawLine(320, 386, 320, 486, 2); //drawing the trunk
    vShapeBranch(x,y,length,width,startAngle,angle,layer); //calling recursive function to draw branches
}

int main()
{
    int x = 320; //x-coord of the root
    int y = 386; //y-coord of the root
    int length = 100; //length of the trunk of the tree
    int width = 10; //width (thickness) of the trunk of the tree
    double startAngle = M_PI / 2; //angle of the trunk starts at 90 degree,
                                                     //since the trunk is vertical to the ground.
    double angle = M_PI / 7; //acute angle between a branch and
                                             //the branch growing out from the first branch.
                                            //or half of the angle of a v-shape branch.
    int layer = 10; //number of layers of the tree
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "/tc/bgi");
    drawTree(x,y,length,width,startAngle,angle,layer);
    getch();
    closegraph();
    return 0;
}
