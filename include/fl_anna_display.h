// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef fl_anna_display_h
#define fl_anna_display_h
#include <FL/Fl.H>
#include <math.h>
#include <msmvtl/tmatrix.h>
#include <fl_cartesian.h>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

class fl_anna_display {
public:
  TVector<unsigned int> _net_str; 
  fl_anna_display();
  Fl_Double_Window *str;
  Ca_Canvas *graph_str;
  Ca_Y_Axis *pos_y;
  Ca_X_Axis *pos_x;
private:
  inline void cb_Close_i(Fl_Button*, void*);
  static void cb_Close(Fl_Button*, void*);
public:
  void show();
  void draw();
  void setstruc(unsigned int _i, TVector<unsigned int>& _str, unsigned int _o);
  void hide();
};
#endif
