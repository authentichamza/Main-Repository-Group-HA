#include"Box.h"
void Box::initialize_box(int l,int w,int h)//Box::  means class linked functions
{
  length=l;
  width=w;
  height=h;
}
int Box::get_length()
{
  return length;
}
int Box::get_width()
{
  return width;
}
int Box::get_height()
{
  return height;
}
