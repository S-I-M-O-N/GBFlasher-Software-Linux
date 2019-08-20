/*****************************************************************************
** Console.h - header of Console used to print infos from other
** modules
** Author: Kraku
*****************************************************************************/
#ifndef FL_CONSOLE_H_
#define FL_CONSOLE_H_

#include <QTextEdit>
#include <QString>
#include <QPalette>
#include <QColor>

class Console:public QTextEdit
{
public:
  Console (QWidget * parent):QTextEdit (parent)
  {
    this->setMinimumWidth (400);
    this->setReadOnly (true);
    QPalette palette;
      palette.setColor (QPalette::Base, QColor (0, 0, 0));
      this->setPalette (palette);
    QFont font ("Arial");
      font.setPointSize (8);
      this->setFont (font);
  }

  void print (QString string)
  {
    append (string);
  }

  void line ()
  {
#ifdef Q_OS_UNIX
    print ("<br>");
#else
    print ("<hr><br>");
#endif
  }
};

#endif
