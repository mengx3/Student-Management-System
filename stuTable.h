
#ifndef STUSYSTEMGUI_STUTABLE_H
#define STUSYSTEMGUI_STUTABLE_H

#include"BasicWidget.h"
#include"Configure.h"
#include<vector>
using namespace std;


class StuTable :
    public BasicWidget {
private:
    //the number of row
    int rowNum;

    //the number of col
    int colNum;

    //the herder of table
    string header;

    //the height and width
    //the width of grid
    int gridWidth;

    //the height of grid
    int gridHeight;

    //the data of table
    vector<string> datas; 


public:

    StuTable(int rowNum=0, int colNum=0);

    int getRowNum() const;

    void setRowNum(int rowNum);

    int getColNum() const;

    void setColNum(int colNum);

    void setHeader(const string& h);

    int getGridWidth() const;

    void setGridWidth(int gridWidth);

    int getGridHeight() const;

    void setGridHeight(int gridHeight);

    //insertData
    void insertData(const string& data);

    //the split funtion is to split the string by seperator
    static vector<string>split(string str, char seperator);


    //dislay
    void show();

    //drawTable
    void drawTableGrid();

    //draw data
    void drawTableData();

    //drawButton
    void drawButton();

    //draw header
    void drawHeader();

    //updatePage
    void updatePage();

    //
    void event();


private:

    //Page
    int currentPage;

    //maxPage
    int maxPage;

    //the remainum
    int remainNum;

    //return Pre button
    PushButton* prevButton;

    //nextPage Button
    PushButton* nextButton;

    //firstPage Button
    PushButton* firstButton;

    //endPage Button
    PushButton* endButton;


};


#endif //STUSYSTEMGUI_STUTABLE_H
