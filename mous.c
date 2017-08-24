#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

int initmouse();
void showmouseptr(); //Shows the current mouse pointer position
void hidemouseptr(); //hides the mouse pointer position
void getmouseposition(int*,int*,int*);  // fetches the mouse pointer variables and location from graphics in C library
union REGS i, o;

main()
{
   int gd = DETECT, gm, status, button, x, y, pos_x, pos_y;
   char array[50];

   initgraph(&gd,&gm,"C:\\TC\\BGI");
   settextstyle(DEFAULT_FONT,0,2);

   status = initmouse();

   if ( status == 0 )
      printf("Mouse support not available.\n");
   else
   {
      showmouseptr();

      getmouseposition(&button,&x,&y);

      pos_x = x;
      pos_y = y;

      while(!kbhit())
      {
         getmouseposition(&button,&x,&y);

         if( x == pos_x && y == pos_y )
         {}
         else
         {
            cleardevice();
            sprintf(array,"X = %d, Y = %d",x,y);
            outtext(array);
            pos_x = x;
            pos_y = y;
         }
      }
   }

   getch();
   return 0;
}

int initmouse()
{
   i.x.ax = 0;
   int86(0X33,&i,&o);
   return ( o.x.ax );
}

void showmouseptr()
{
   i.x.ax = 1;
   int86(0X33,&i,&o);
}

void getmouseposition(int *button, int *x, int *y)
{
   i.x.ax = 3;
   int86(0X33,&i,&o);

   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}

