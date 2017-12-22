/*******************************************************************************
* Nedah Ibrahim
* CS125
* Program HW11
*
* create structures that include the centroid coordinates and the vertices then 
*have main assign the vertices random numbers between 0 and 1. Create a function
*that calculates the centroid and returns te values to main.
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

/*define the structure*/
typedef struct coordinates{
        float x;
        float y;
        
        }COOR;
        
typedef struct aTriangle{
  COOR vertexA;
  COOR vertexB;
  COOR vertexC;
  COOR center;
}TRIANGLE;

COOR centroid(TRIANGLE);
int main()
{
  TRIANGLE tri;
  tri.vertexA.x = ((float)rand() / (float)RAND_MAX); 
  tri.vertexA.y = ((float)rand() / (float)RAND_MAX);
  tri.vertexB.x = ((float)rand() / (float)RAND_MAX);
  tri.vertexB.y = ((float)rand() / (float)RAND_MAX);
  tri.vertexC.x = ((float)rand() / (float)RAND_MAX);
  tri.vertexC.y = ((float)rand() / (float)RAND_MAX);
  printf(" The triangle vertices are [%1.2f,%1.2f], [%1.2f,%1.2f], [%1.2f,%1.2f]\n",\
  tri.vertexA.x,tri.vertexA.y,tri.vertexB.x,tri.vertexB.y,tri.vertexC.x,tri.vertexC.y);
  tri.center = centroid(tri);
  printf( "the centroid is [%1.2f , %1.2f]\n", tri.center.x, tri.center.y );
  }
  
  COOR (centroid(TRIANGLE centCoor))
  {
  centCoor.center.x = (centCoor.vertexA.x + centCoor.vertexB.x + centCoor.vertexC.x)/3;
  centCoor.center.y = (centCoor.vertexA.y + centCoor.vertexB.y + centCoor.vertexC.y)/3;
  return centCoor.center;
  }
/*INDENTED USING INDENT FUNCTION*/
