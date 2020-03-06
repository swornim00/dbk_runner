#ifndef VARIABLES_H
  #define VARIABLES_H
  #include"variables.h"
#endif

#ifndef FOOD_H
  #include"food.h"
  #define FOOD_H
#endif

#ifndef OBSTACLE_H
  #include"obstacles.h"
  #define OBSTACLE_H
#endif

void moveBall()
{
  float ballAcc; // Ball acceleration
  if(ballz > roadLength*0.75){
      ballAcc=SPEED_4;
  }else if(ballz > roadLength*0.50){
    ballAcc=SPEED_3;
  }else if(ballz > roadLength* 0.25){
    ballAcc=SPEED_2 ;
  }else{
    ballAcc =SPEED_1;
  }
  ballz = ballz + ballAcc;
  //printf("Ballz: %f \t | \t Speed: %f\n",ballz,ballAcc);
}

void drawSphere()
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f); 
    glTranslatef(ballx,0.5f,ballz);
    glutSolidSphere(.5, 50,50);
    glPopMatrix();
}

void feelCollision(){
  foodCollision();
  obstacleCollision();
}
