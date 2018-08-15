

/*
____________________________________________________Bouncing Multi-color Ball In C++__________________________________________________
  -Bouncing Balls Top-Bottom In Vertically.
  -Bouncing Balls Bottom-Top In Vertically.
  -Bouncing Balls Left-Right In Horizontally.
  -Bouncing Balls Right-Left In Horizontally.
  -Show A Static Text "Hello World" I Love It :)
*/
#include<graphics.h>//Include graphics.h For Use Graphical Predefined functions.
#include<conio.h>//Include conio.h For Use getch() Function In Our Program.
#include<dos.h>//Include dos.h For Use cleardevice and delay function In Our Program
/*
  Declared Function Prototypes For User Defined Functions,
  That Are Use In Our Code.
*/
void centerBouncingBallTopToBottom();
void leftBouncingBallTopToBottom();
void rightBouncingBallTopToBottom();
void topBouncingBallRightToLeft();
void bottomBouncingBallRightToLeft();
void middleBouncingBallLeftToRight();
void helloWorldText();
int main()
{
  initwindow(1360,700);
    for(int counter=1;counter<=20;counter++)
     {
         centerBouncingBallTopToBottom();
           leftBouncingBallTopToBottom();
         rightBouncingBallTopToBottom();
           topBouncingBallRightToLeft();
         bottomBouncingBallRightToLeft();
           middleBouncingBallLeftToRight();
     }
  getch();
  closegraph();
  return 1;
}
/*Show Hello World Text While Bouncing Ball On The Screen*/
void helloWorldText()
{
    settextstyle(8,0,8);
    setcolor(15);
    outtextxy(350,310,"HELLO  WORLD");
}
void centerBouncingBallTopToBottom()
{
    /*Bouncing from Top To Bottom*/
    for(int i=1;i<=700;i=i+50)
     {
       cleardevice();
        helloWorldText();
          delay(17);
            circle(650,i,50);
              setfillstyle(1,15);
            floodfill(650,i,15);
          delay(17);
      cleardevice();
        helloWorldText();
     }
     /*Bouncing From Bottom To Top */
    for(int k=700;k>1;k=k-50)
     {
       cleardevice();
        helloWorldText();
         delay(17);
            circle(650,k,50);
              setfillstyle(1,2);
            floodfill(650,k,15);
         delay(17);
       cleardevice();
        helloWorldText();
     }
}
void leftBouncingBallTopToBottom()
{
    /*Bouncing From Top To Bottom*/
    for(int m=1;m<=700;m=m+50)
     {
       cleardevice();
          helloWorldText();
         delay(25);
            circle(200,m,50);
               setfillstyle(SOLID_FILL,2);
            floodfill(200,m,15);
        delay(25);
       cleardevice();
         helloWorldText();
     }
     /*Bouncing From Bottom To Top*/
     for(int q=700;q>1;q=q-50)
      {
        cleardevice();
          helloWorldText();
           delay(25);
              circle(200,q,50);
                  setfillstyle(SOLID_FILL,3);
              floodfill(200,q,15);
           delay(25);
        cleardevice();
          helloWorldText();
      }
}
void rightBouncingBallTopToBottom()
{
    /*Bouncing From Top To Bottom*/
    for(int z=1;z<=700;z=z+50)
     {
       cleardevice();
          helloWorldText();
          delay(25);
             circle(1050,z,50);
                setfillstyle(SOLID_FILL,14);
             floodfill(1050,z,15);
          delay(25);
       cleardevice();
          helloWorldText();
     }
     /*Bouncing From Top To Bottom*/
    for(int a=700;a>1;a=a-50)
     {
       cleardevice();
          helloWorldText();
          delay(25);
              circle(1050,a,50);
                setfillstyle(SOLID_FILL,15);
             floodfill(1050,a,15);
          delay(25);
       cleardevice();
          helloWorldText();
     }
}
void topBouncingBallRightToLeft()
{
  /*In Top Bouncing From Right To Left*/
  for(int p=1300;p>1;p=p-50)
   {
     cleardevice();
       helloWorldText();
       delay(20);
          circle(p,150,50);
             setfillstyle(SOLID_FILL,5);
          floodfill(p,150,15);
      delay(20);
    cleardevice();
      helloWorldText();
   }
}
void bottomBouncingBallRightToLeft()
{
  /*In Bottom Bouncing From Right To Left*/
  for(int c=1300;c>1;c=c-50)
   {
     cleardevice();
      helloWorldText();
        delay(20);
          circle(c,550,50);
              setfillstyle(SOLID_FILL,15);
          floodfill(c,550,WHITE);
        delay(20);
     cleardevice();
        helloWorldText();
   }
}
void middleBouncingBallLeftToRight()
{
  /*In Middle Bouncing From Left To Right*/
  for(int g=30;g<1300;g=g+50)
   {
     cleardevice();
        helloWorldText();
        delay(20);
           circle(g,350,50);
              setfillstyle(SOLID_FILL,1);
           floodfill(g,350,15);
        delay(20);
     cleardevice();
      helloWorldText();
   }
}
