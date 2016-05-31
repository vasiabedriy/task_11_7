#include "task_8.h"
#include "linelable.h"

task_8::task_8(QWidget *parent)
    : QMainWindow(parent)
{
    LIneLable* linelable = new LIneLable(this);
    linelable->setGeometry(30,30,80,30);
}

task_8::~task_8()
{

}
