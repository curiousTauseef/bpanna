// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "../include/fl_anna_display.h"

void fl_anna_display::cb_Close_i(Fl_Button*, void*) {
  str->hide();
}
void fl_anna_display::cb_Close(Fl_Button* o, void* v) {
  ((fl_anna_display*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

fl_anna_display::fl_anna_display() {
  { str = new Fl_Double_Window(500, 565, "ANNA Structure");
    str->labelfont(8);
    str->labelsize(12);
    str->user_data((void*)(this));
    str->align(Fl_Align(FL_ALIGN_CENTER));
    { Fl_Group* o = new Fl_Group(-13, -1, 745, 581);
      { Fl_Box* o = new Fl_Box(4, 9, 490, 532);
        o->box(FL_ENGRAVED_BOX);
        o->color(FL_FOREGROUND_COLOR);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(17, 49, 115, 472);
        o->box(FL_FLAT_BOX);
        o->color((Fl_Color)27);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(137, 49, 218, 472);
        o->box(FL_FLAT_BOX);
        o->color(FL_INACTIVE_COLOR);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(360, 49, 122, 472);
        o->box(FL_FLAT_BOX);
        o->color((Fl_Color)24);
      } // Fl_Box* o
      { graph_str = new Ca_Canvas(2, 5, 525, 540);
        graph_str->box(FL_NO_BOX);
        graph_str->color(FL_FOREGROUND_COLOR);
        graph_str->selection_color(FL_FOREGROUND_COLOR);
        graph_str->labeltype(FL_NORMAL_LABEL);
        graph_str->labelfont(8);
        graph_str->labelsize(12);
        graph_str->labelcolor(FL_FOREGROUND_COLOR);
        graph_str->align(Fl_Align(FL_ALIGN_CENTER));
        graph_str->when(FL_WHEN_RELEASE);
      } // Ca_Canvas* graph_str
      { pos_y = new Ca_Y_Axis(-6, -1, 3, 576);
        pos_y->box(FL_NO_BOX);
        pos_y->color(FL_BACKGROUND_COLOR);
        pos_y->selection_color(FL_BACKGROUND_COLOR);
        pos_y->labeltype(FL_NORMAL_LABEL);
        pos_y->labelfont(0);
        pos_y->labelsize(14);
        pos_y->labelcolor(FL_FOREGROUND_COLOR);
        pos_y->align(Fl_Align(FL_ALIGN_CENTER));
        pos_y->when(FL_WHEN_RELEASE);
      } // Ca_Y_Axis* pos_y
      { pos_x = new Ca_X_Axis(-13, 580, 745, 0);
        pos_x->box(FL_NO_BOX);
        pos_x->color(FL_BACKGROUND_COLOR);
        pos_x->selection_color(FL_BACKGROUND_COLOR);
        pos_x->labeltype(FL_NORMAL_LABEL);
        pos_x->labelfont(0);
        pos_x->labelsize(14);
        pos_x->labelcolor(FL_FOREGROUND_COLOR);
        pos_x->align(Fl_Align(FL_ALIGN_CENTER));
        pos_x->when(FL_WHEN_RELEASE);
      } // Ca_X_Axis* pos_x
      { Fl_Box* o = new Fl_Box(34, 17, 66, 25, "Input layer");
        o->labelsize(12);
        o->labelcolor((Fl_Color)3);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(204, 17, 84, 25, "Hidden layer(s)");
        o->labelsize(12);
        o->labelcolor((Fl_Color)3);
      } // Fl_Box* o
      { Fl_Box* o = new Fl_Box(384, 17, 72, 25, "Output layer");
        o->labelsize(12);
        o->labelcolor((Fl_Color)3);
      } // Fl_Box* o
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(429, 542, 62, 22, "&Close");
      o->callback((Fl_Callback*)cb_Close);
    } // Fl_Button* o
    str->set_modal();
    str->end();
    str->resizable(str);
  } // Fl_Double_Window* str
  int numitem, i;
      // Lee el numero de items en el FIS y lo guarda en numitem
      numitem = 3;
      int d= 495/(numitem+1);
      for(i=0; i<numitem; i++)
      {
        { Fl_Box* o = new Fl_Box(40, 30+d*(i+1), 60, 25, "Input");
          o->labelfont(8);
          o->labelsize(12);
          o->labelcolor(3);
        }
      }
      { Fl_Box* o = new Fl_Box(440, 400, 60, 25, "Output");
        o->labelfont(8);
        o->labelsize(12);
        o->labelcolor(3);
      }
}

void fl_anna_display::show() {
  str->position(6,411);
    str->show();
    draw();
}

void fl_anna_display::draw() {
  //
    int i, j, jj;
    float posy, posx, posy2, posx2, ystep, xstep;
    static Ca_LinePoint * L=0;
    Ca_Canvas::current(graph_str);
    graph_str->clear();
    int max= _net_str.get_max();
    int ly=_net_str.size();
    //int nl[]={2,4,5,1};
    real w_x=9, w_y=10, _offset, _offset2;
    ystep = w_y/(float)(max+1);
    xstep = w_x/(float)(ly+2);
  
    pos_y->min_val(-0.1);
    pos_y->max_val(10.8);
    pos_x->min_val(0);
    pos_x->max_val(9);
    pos_y->current();  
    
    // Intputs
    _offset=real(max-(int)_net_str[0])/2.0;
    posx = xstep*(0.4);
    posx2 = xstep*(1.2);
    for(j=1; j<=(int)_net_str[0]; j++){
      posy = ystep*(j+_offset+0.2);
      L=NULL;
      L=new Ca_LinePoint(L,posx,posy,FL_RED);
      L=new Ca_LinePoint(L,posx2,posy,FL_RED);
      new Ca_Point(posx,posy,FL_CYAN,FL_MAGENTA,ROUND|BORDER,6); 
    }
    // Outputs
    _offset2=real(max-(int)_net_str[ly-1])/2.0;
    for(j=1; j<=(int)_net_str[_net_str.size()-1]; j++){
      posy = ystep*(j+_offset2+0.2);
      posx = xstep*(ly+0.2);
      posx2 = xstep*(ly+1.2);
      L=NULL;
      L=new Ca_LinePoint(L,posx,posy,FL_BLUE);
      L=new Ca_LinePoint(L,posx2,posy,FL_RED);
      new Ca_Point(posx2,posy,FL_CYAN,FL_MAGENTA,ROUND|BORDER,6); 
    }
    // Neurons
    for(i=0; i<ly; i++){
      _offset=real(max-(int)_net_str[i])/2.0;
      posx = xstep*(i+1.2);
      posx2 = xstep*(i+2.2);
      for(j=1; j<=(int)_net_str[i]; j++){
        posy = ystep*(j+_offset+0.2);
        if(i<ly-1){
          _offset2=real(max-(int)_net_str[i+1])/2.0;
          for(jj=1; jj<=(int)_net_str[i+1]; jj++){
            posy2 = ystep*(jj+_offset2+0.2);
            L=NULL;
            L=new Ca_LinePoint(L,posx,posy,FL_BLUE);
            L=new Ca_LinePoint(L,posx2,posy2,FL_BLUE);
          }
        }
        new Ca_Point(posx,posy,FL_YELLOW,FL_CYAN,ROUND|BORDER,6); 
      }
    }
}

void fl_anna_display::setstruc(unsigned int _i, TVector<unsigned int>& _str, unsigned int _o) {
  _net_str.push_back(_i);
  _net_str.push_back(_str);
  _net_str.push_back(_o);
}

void fl_anna_display::hide() {
  str->hide();
}