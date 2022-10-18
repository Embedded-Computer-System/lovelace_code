#include<stdio.h>

struct point {
  int coordinates[3];
  struct point *next;
};

struct path {
  double distance;
  struct point *points;
};
void calculate_path_distance(struct path *path);
int main()
{
  int s[] = {1, 2, 2};

  return 0;
}

void calculate_path_distance(struct path *path)
{

}