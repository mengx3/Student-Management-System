#include "StuTable.h"

vector<string> StuTable::split(string str, char seperator='\t')
{
    //the data to split is like this
    "1\tmale\t18\tguangzhou\tcomputer";


    vector<string>res;

    for (int pos = 0; pos != string::npos;) {
        //if(find the seperator,the function will return the position,else return string::npos
        pos = str.find(seperator);
        //get the string between
        auto s = str.substr(0, pos);

        //remove to get new Str
        str = string(str.c_str() + pos + 1);

        //cout << s << endl;
        res.push_back(s);
    }
    return res;
}

StuTable::StuTable(int rowNum, int colNum)
    :BasicWidget(0,0,0,0),
    rowNum(rowNum), 
    colNum(colNum),
    currentPage(0),
    maxPage(0),
    remainNum(0)
{

    prevButton = new PushButton("上一页");
    nextButton = new PushButton("下一页");
    firstButton = new PushButton("首页");
    endButton = new PushButton("尾页");


}

StuTable::~StuTable()
{

    delete prevButton;
    delete nextButton;
    delete firstButton;
    delete endButton;

    cout << "free is finish!" << endl;

}

int StuTable::getRowNum() const {
    return rowNum;
}

void StuTable::setRowNum(int rowNum) {
    StuTable::rowNum = rowNum;
}

int StuTable::getColNum() const {
    return colNum;
}

void StuTable::setColNum(int colNum) {
    StuTable::colNum = colNum;
}

void StuTable::setHeader(const string& h)
{
    header = h;

    //calculate the '\t' 's number
    int cols = count(h.begin(), h.end(),'\t');
    setColNum(cols+1);
    //cout << cols << endl;

    //get the height of font
    int fontWidth = ::textwidth("Electrical");
    
    //setGridWidth
    setGridWidth(fontWidth);

    //get the height of font
    int fontHeight = ::textheight("Electrical Engineering");

    //setGridHeight
    setGridHeight(fontHeight);

}

int StuTable::getGridWidth() const {
    return gridWidth;
}

void StuTable::setGridWidth(int gridWidth) {
    StuTable::gridWidth = gridWidth;
}

int StuTable::getGridHeight() const {
    return gridHeight;
}

void StuTable::setGridHeight(int gridHeight) {
    StuTable::gridHeight = gridHeight;
}

void StuTable::insertData(const string& data)
{
    datas.push_back(data);

    //update the page
    updatePage();
}

void StuTable::show()
{
    drawTableGrid();
    //drawData
    drawTableData();

    ////draw button
    //drawButton();

    //draw header
    drawHeader();
}

void StuTable::drawTableGrid()
{

    //should confirm the number of rows or and cols
//fillcircle(50, 50, 100);

    setlinecolor(BLACK);

    //draw the row
    for (size_t i = 0; i < rowNum + 1; i++) {

        line(m_x, m_y + i * gridHeight, m_x + colNum * gridWidth, m_y + i * gridHeight);
    }

    //draw the col
    for (int i = 0; i < colNum + 1; i++) {
        line(m_x + i * gridWidth, m_y, m_x + i * gridWidth, m_y + rowNum * gridHeight);
    }

    //if maxPage==0,dont need to draw the button
    if (maxPage > 0) {
        drawButton();
        //cout << "draw the Button" << endl;
    }

}

void StuTable::drawTableData()
{
    //the begin position of data
    int begin = currentPage * rowNum;

    //the end position of data
    int end = begin + rowNum;
    if (end > datas.size()) {
        end = datas.size();
    }

    //test

    //deal with every line
    for (int i = 0; i < datas.size(); i++) {
        vector<string>line = split(datas[i]);

        //cout << "i am writing data!" << "line size():" << line[0]<< endl;

        //to fill in the frid
        for (int j = 0; j < line.size(); j++) {

            //calculate the grid x,y
            int xx = m_x + j * gridWidth;
            int yy = m_y + i * gridHeight;

            //cout <<"sdrfrwsdfsdfcswdefwsedfcwedfc" << line[j] << endl;
            //system("pause");

           

            //draw the data
            outtextxy(xx, yy, line[j].c_str());
        }
    }
}

void StuTable::drawButton()
{

    static bool isMove = false;

    if (!isMove) {
        //set the position
        prevButton->move(m_x, m_h + 30);
        nextButton->move(prevButton->getMX() + prevButton->getMW(), prevButton->getMY());
        firstButton->move(nextButton->getMX() + nextButton->getMW(), nextButton->getMY());
        endButton->move(firstButton->getMX() + firstButton->getMW(), firstButton->getMY());

        //cout << nextButton->getMX() << " Y::::" << nextButton->getMY() << endl;

        isMove = true;
    }

    //show
    prevButton->show();
    nextButton->show();
    firstButton->show();
    endButton->show();

    char pageInfo[256];

    sprintf(pageInfo, "第%d页/共%d页", currentPage+1, maxPage+1);

    //set color

    //settextcolor(BLUE);

    //show how many pages
    outtextxy(endButton->getMX() + endButton->getMW() + 150, endButton->getMY()+30, pageInfo);

}

void StuTable::drawHeader()
{

    //setLine
    setlinestyle(PS_SOLID, 3);

    //set header
    ::rectangle(m_x, m_y - 30, m_x + m_w, m_y);

    for (int i = 0; i < colNum; i++) {
        line(m_x + i * gridWidth, m_y - 30, m_x + i * gridWidth, m_y);
    }

    setlinestyle(PS_SOLID, 2);

    //split the header
    auto he = split(header);

    settextcolor(RED);

    for (int j = 0; j < he.size();j++) {


        //HDistence
        int distanceH = (gridWidth - ::textwidth(he[j].c_str())) / 2;

        //VDistence
        int distanceV = (40 - ::textheight(he[j].c_str())) / 2;

        outtextxy(m_x + j * gridWidth+distanceH, m_y - gridHeight+distanceV, he[j].c_str());
    }

    settextcolor(BLUE);

}

void StuTable::updatePage()
{

    if (rowNum > datas.size()) {
        maxPage = 0;
        remainNum = rowNum;
    }
    else {

        maxPage = datas.size() / rowNum;

        remainNum = datas.size() % rowNum;
    }

    //cout << "rowNum:" << rowNum << endl;
}

void StuTable::event()
{

    prevButton->event();
    nextButton->event();
    firstButton->event();
    endButton->event();

    if (prevButton->isClicked()) {
        if (currentPage == 0) {
            currentPage = 0;
        }
        else {
            currentPage--;
        }
    }
    if (nextButton->isClicked()) {
        if (currentPage != maxPage) {
            currentPage++;
        }
    }
    if (firstButton->isClicked()) {
        currentPage = 0;
    }
    if (endButton->isClicked()) {
        currentPage = maxPage;
    }
}
