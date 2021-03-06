// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef fl_anna_main_h
#define fl_anna_main_h
#include <FL/Fl.H>
#include <anna/anna_bpn_net.h>
#include <fl_anna_error.h>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include "fl_anna_set.h"
#include<fl_anna_display.h>
#include<fl_anna_about.h>
#include<fl_table.h>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Value_Output.H>

class fl_anna_main : public anna_bpn_net {
  TMatrix<real> data2, res; 
  TVector<real> outdata; 
  TVector<unsigned int> _str; 
  TVector<unsigned int> _actf; 
  int epoch_update, ng, _xx; 
  unsigned int _nop; 
  double err, _wait_time; 
public:
  const char * p_dir_filename; 
  const char * p_filename; 
  const char * p_dir; 
private:
  char file_name[50]; 
  char dir_name[200]; 
  bool is_data, is_set, is_build; 
  fl_anna_error * we; 
public:
  fl_anna_main();
  Fl_Double_Window *mdi_anna;
  static Fl_Menu_Item menu_[];
private:
  inline void cb_Load_i(Fl_Menu_*, void*);
  static void cb_Load(Fl_Menu_*, void*);
  inline void cb_Save_i(Fl_Menu_*, void*);
  static void cb_Save(Fl_Menu_*, void*);
  inline void cb_Save1_i(Fl_Menu_*, void*);
  static void cb_Save1(Fl_Menu_*, void*);
  inline void cb_Quit_i(Fl_Menu_*, void*);
  static void cb_Quit(Fl_Menu_*, void*);
  inline void cb_set_i(Fl_Menu_*, void*);
  static void cb_set(Fl_Menu_*, void*);
  inline void cb_Display_i(Fl_Menu_*, void*);
  static void cb_Display(Fl_Menu_*, void*);
  inline void cb_Build_i(Fl_Menu_*, void*);
  static void cb_Build(Fl_Menu_*, void*);
  inline void cb_Train_i(Fl_Menu_*, void*);
  static void cb_Train(Fl_Menu_*, void*);
  inline void cb_About_i(Fl_Menu_*, void*);
  static void cb_About(Fl_Menu_*, void*);
public:
  Fl_Button *button_load_data;
private:
  inline void cb_button_load_data_i(Fl_Button*, void*);
  static void cb_button_load_data(Fl_Button*, void*);
public:
  Fl_Button *button_save;
private:
  inline void cb_button_save_i(Fl_Button*, void*);
  static void cb_button_save(Fl_Button*, void*);
public:
  Fl_Button *button_set;
private:
  inline void cb_button_set_i(Fl_Button*, void*);
  static void cb_button_set(Fl_Button*, void*);
public:
  Fl_Button *button_ann_view;
private:
  inline void cb_button_ann_view_i(Fl_Button*, void*);
  static void cb_button_ann_view(Fl_Button*, void*);
public:
  Fl_Button *button_start_ann;
private:
  inline void cb_button_start_ann_i(Fl_Button*, void*);
  static void cb_button_start_ann(Fl_Button*, void*);
public:
  Fl_Button *button_train;
private:
  inline void cb_button_train_i(Fl_Button*, void*);
  static void cb_button_train(Fl_Button*, void*);
public:
  Fl_Button *button_apply;
private:
  inline void cb_button_apply_i(Fl_Button*, void*);
  static void cb_button_apply(Fl_Button*, void*);
public:
  Fl_Button *button_stop;
private:
  inline void cb_button_stop_i(Fl_Button*, void*);
  static void cb_button_stop(Fl_Button*, void*);
public:
  Fl_Button *button_save_ann;
private:
  inline void cb_button_save_ann_i(Fl_Button*, void*);
  static void cb_button_save_ann(Fl_Button*, void*);
public:
  Fl_Button *button_exit;
private:
  inline void cb_button_exit_i(Fl_Button*, void*);
  static void cb_button_exit(Fl_Button*, void*);
  inline void cb_about_i(Fl_Button*, void*);
  static void cb_about(Fl_Button*, void*);
public:
  CTable *table;
  Fl_Group *_trn_set;
  Fl_Group *_lm_op;
  Fl_Value_Input *_mu;
private:
  inline void cb__mu_i(Fl_Value_Input*, void*);
  static void cb__mu(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *_alpha;
  Fl_Value_Input *_beta;
  Fl_Group *_ta;
private:
  inline void cb__ta_i(Fl_Group*, void*);
  static void cb__ta(Fl_Group*, void*);
public:
  Fl_Check_Button *_lm;
private:
  inline void cb__lm_i(Fl_Check_Button*, void*);
  static void cb__lm(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *_sd;
private:
  inline void cb__sd_i(Fl_Check_Button*, void*);
  static void cb__sd(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *_cg;
private:
  inline void cb__cg_i(Fl_Check_Button*, void*);
  static void cb__cg(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *_rg;
private:
  inline void cb__rg_i(Fl_Check_Button*, void*);
  static void cb__rg(Fl_Check_Button*, void*);
public:
  Fl_Value_Input *_rs;
private:
  inline void cb__rs_i(Fl_Value_Input*, void*);
  static void cb__rs(Fl_Value_Input*, void*);
public:
  Ca_Canvas *graph_track;
  Ca_Y_Axis *position;
  Ca_X_Axis *value;
  Fl_Value_Input *_update;
private:
  inline void cb__update_i(Fl_Value_Input*, void*);
  static void cb__update(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *epochs;
  Fl_Box *sb;
  Fl_Value_Output *_rows;
  Fl_Value_Output *_cols;
  void load_data(void);
  void save_data(void);
  void save_ann(void);
  void set_anna(void);
  void display_anna(void);
  void build_anna(void);
  void train_anna(void);
  void loadgrid(TMatrix<real>& _d);
  void add2grid(TMatrix<real>& _d);
  void train(int ep);
  void setdata();
  void initgraph();
private:
  void tsetxaxis();
  void tsetyaxis();
public:
  void resetgraph();
  void show();
private:
  void graphtraindata();
  void graphresdata();
  void cleartrack();
  void update();
};
#endif
