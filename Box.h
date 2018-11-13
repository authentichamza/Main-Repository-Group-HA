class Box{
private:
  int length,width,height;
public:
  Box():length(0),width(0),height(0){}//0 initialized
  Box(int l,int w,int h):length(l),width(w),height(h){}//2nd constructor
  void initialize_box(int l,int w,int h);//initializing the components of box
  int get_length();
  int get_width();
  int get_height();
};
