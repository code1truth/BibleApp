#pragma once
#include <wx/wx.h>
#include <vector>
#include <string>

struct Verse {
    int bookId;
    int chapter;
    int verse;
    std::string text;
};

class BibleFrame : public wxFrame {
public:
    BibleFrame(const wxString& title);

private:
    void CreateUI();
    void LoadBibleData();
    void OnBookSelected(wxCommandEvent& event);
    void OnChapterSelected(wxCommandEvent& event);
    void OnVersesSelected(wxListEvent& event);

    wxChoice* m_bookChoice;
    wxSpinCtrl* m_chapterSpin;
    wxListCtrl* m_versesList;
    wxTextCtrl* m_verseText;
    std::vector<Verse> m_verses;

    wxDECLARE_EVENT_TABLE();
};
