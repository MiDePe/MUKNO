#pragma once
#include "muk_qt_api.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QMainWindow;
class QPushButton;
class QRadioButton;
QT_END_NAMESPACE

namespace gris
{
  namespace muk
  {
    /**
    */
    class MUK_QT_API SurgeonViewProperties : public QWidget
    {
      Q_OBJECT

      public:
        explicit SurgeonViewProperties(QWidget *parent = 0);
        ~SurgeonViewProperties();

      signals:

      public slots:

      private:

      public:
    };
  }
}