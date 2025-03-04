#include "About.h"
#include "about.xpm"
#include "const.h"

About::About (QWidget * parent):QDialog (parent)
{

  all = new QVBoxLayout (this);

  this->setWindowTitle (tr ("About"));
  this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

  QPixmap
  logo (about_xpm);
  image = new QLabel (this);
  image->setFixedSize (501, 218);
  image->setPixmap (logo);

  all->addWidget (image);
  box = new QGroupBox (tr ("GB Cart Flasher Project"), this);
  box->setFixedWidth (501);
  labels = new QVBoxLayout (box);
  name =
    #ifdef Q_OS_WIN
    new QLabel (tr ("GB Cart Flasher for Win8, Win8.1 & Win10 version ") +
                VER, box);
    #endif
    #ifdef Q_OS_UNIX
    new QLabel (tr ("GB Cart Flasher for Linux Qt5 version ") +
            VER, box);
    #endif
  labels->addWidget (name);
  copy = new QLabel ("Copyright (c) 2005-2007 Kraku & Chroost", box);
  labels->addWidget (copy);
  desc1 = new QLabel (tr ("This is a custom version, see <a href=https://github.com/S-I-M-O-N/GBFlasher-Software-Linux>https://github.com/S-I-M-O-N/GBFlasher-Software-Linux</a>"),box);
  desc2 = new QLabel (tr ("Forked from <a href=https://github.com/HDR/GBFlasher-Software>https://github.com/HDR/GBFlasher-Software</a>"),box);
  desc3 = new QLabel (tr ("Relies on <a href=https://github.com/Alcaro/Flips>Flips</a> and <a href=https://github.com/seedrobotics/tinysafeboot>Tinysafeboot</a>"));
  desc1->setOpenExternalLinks(true);
  desc2->setOpenExternalLinks(true);
  desc3->setOpenExternalLinks(true);
  labels->addWidget (desc1);
  labels->addWidget (desc2);
  labels->addWidget (desc3);
  all->addWidget (box);
  ok_btn = new QPushButton (tr ("Close"), this);
  all->addWidget (ok_btn);
  connect (ok_btn, SIGNAL (clicked ()), this, SLOT (close ()));
}
