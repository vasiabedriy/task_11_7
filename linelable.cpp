#include "linelable.h"

LIneLable::LIneLable(QWidget *parent)
{
    m_label = new QLabel(parent);
    m_lineedit = new QLineEdit(parent);
    m_label->setText("HELLO");
}

LIneLable::~LIneLable()
{
    delete m_label;
    delete m_lineedit;
}
void LIneLable::setGeometry(int x, int y, int w, int h)
{
    m_lineedit->setGeometry(x,y,w,h);
    m_label->setGeometry(x+w+20,y,w,h);
}
