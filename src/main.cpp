#include "wx-3.0/wx/wx.h"

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};


//
// Declare our main frame class
class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title);
    
    //void OnQuit(wxCommandEvent& event);
    //void OnAbout(wxCommandEvent& event);
//private:
//    DECLARE_EVENT_TABLE();
};


MyFrame::MyFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title) 
{
    wxPanel *panel = new wxPanel(this, -1);

    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *hbox0 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *textKet =  new wxStaticText(panel, wxID_ANY, wxT(" Input untuk Pengecekan Segitiga "));
    hbox0->Add(textKet, 0, wxCENTER, 8);

    //
    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st1 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai X1 "));
    //
    hbox1->Add(st1, 0, wxRIGHT, 8);
    wxTextCtrl *tc1 = new wxTextCtrl(panel, wxID_ANY);
    hbox1->Add(tc1, 1);

    //
    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st2 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai Y1 "));
    //
    hbox2->Add(st2, 0, wxRIGHT, 8);
    wxTextCtrl *tc2 = new wxTextCtrl(panel, wxID_ANY);
    hbox2->Add(tc2, 1);

    //
    wxBoxSizer *hbox3 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st3 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai Z1 "));
    //
    hbox3->Add(st3, 0, wxRIGHT, 8);
    wxTextCtrl *tc3 = new wxTextCtrl(panel, wxID_ANY);
    hbox3->Add(tc3, 1);

    vbox->Add(hbox0, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);

    vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vbox->Add(hbox2, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vbox->Add(hbox3, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);

    vbox->AddSpacer(1);


    //
    wxBoxSizer *hbox4 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st4 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai X2 "));
    //
    hbox4->Add(st4, 0, wxRIGHT, 8);
    wxTextCtrl *tc4 = new wxTextCtrl(panel, wxID_ANY);
    hbox4->Add(tc4, 1);

    //
    wxBoxSizer *hbox5 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st5 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai Y2 "));
    //
    hbox5->Add(st5, 0, wxRIGHT, 8);
    wxTextCtrl *tc5 = new wxTextCtrl(panel, wxID_ANY);
    hbox5->Add(tc5, 1);

    //
    wxBoxSizer *hbox6 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st6 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai Z2 "));
    //
    hbox6->Add(st6, 0, wxRIGHT, 8);
    wxTextCtrl *tc6 = new wxTextCtrl(panel, wxID_ANY);
    hbox6->Add(tc6, 1);

    vbox->Add(hbox4, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vbox->Add(hbox5, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vbox->Add(hbox6, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);


    vbox->AddSpacer(1);


    //
    wxBoxSizer *hbox7 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st7 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai X2 "));
    //
    hbox7->Add(st7, 0, wxRIGHT, 8);
    wxTextCtrl *tc7 = new wxTextCtrl(panel, wxID_ANY);
    hbox7->Add(tc7, 1);

    //
    wxBoxSizer *hbox8 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st8 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai Y2 "));
    //
    hbox8->Add(st8, 0, wxRIGHT, 8);
    wxTextCtrl *tc8 = new wxTextCtrl(panel, wxID_ANY);
    hbox8->Add(tc8, 1);

    //
    wxBoxSizer *hbox9 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText *st9 =  new wxStaticText(panel, wxID_ANY, wxT(" Nilai Z2 "));
    //
    hbox9->Add(st9, 0, wxRIGHT, 8);
    wxTextCtrl *tc9 = new wxTextCtrl(panel, wxID_ANY);
    hbox9->Add(tc9, 1);

    vbox->Add(hbox7, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vbox->Add(hbox8, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vbox->Add(hbox9, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);

    

    vbox->Add(-1, 10);

    wxBoxSizer *hbox10 = new wxBoxSizer(wxHORIZONTAL);
    wxButton *btn1 = new wxButton(panel, wxID_ANY, wxT("Ok"));
    hbox10->Add(btn1, 0);
    wxButton *btn2 = new wxButton(panel, wxID_ANY, wxT("Close"));
    hbox10->Add(btn2, 0, wxLEFT | wxBOTTOM , 5);
    vbox->Add(hbox10, 0, wxALIGN_RIGHT | wxRIGHT, 10);

    panel->SetSizer(vbox);
    panel->Layout();
}









bool MyApp::OnInit()
{
  MyFrame *frame = new MyFrame(wxT("Layout Pakai Sizer"));

  frame->Show(true);

  return true;
}

IMPLEMENT_APP(MyApp)

DECLARE_APP(MyApp)