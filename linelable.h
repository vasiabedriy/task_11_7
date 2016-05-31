#ifndef LINELABLE_H
#define LINELABLE_H

#include <QLineEdit>
#include <QLabel>

class LIneLable: public QLineEdit, public QLabel
{
   // Q_OBJECT

public:
    LIneLable(QWidget* parent = 0);
    void setGeometry(int x, int y, int w, int h);
    ~LIneLable();

private:
    QLineEdit* m_lineedit;
    QLabel* m_label;
};

#endif // LINELABLE_H
