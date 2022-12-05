
/*#include "camera.h"
#include "ui_camera.h"

camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
}

camera::~camera()
{
    delete ui;
}
*/
/*#include "camera.h"
#include "ui_camera.h"

camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
}

camera::~camera()
{
    delete ui;
}*/
#include "camera.h"
#include "ui_camera.h"
#include<QMessageBox>
#include<QFile>
#include<QFileDialog>

camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);

    //Camera devices:
    setCamera(QCameraInfo::defaultCamera());
}

camera::~camera()
{
    delete ui;
}

void camera::setCamera(const QCameraInfo &cameraInfo)
{
    Camera = new QCamera(cameraInfo);
    imageCapture = new QCameraImageCapture(Camera);
    Camera->setViewfinder(ui->viewfinder);
    connect(imageCapture, &QCameraImageCapture::readyForCaptureChanged, this, &camera::readyForCapture);
    Camera->start();
}


void camera::readyForCapture(bool ready)
{
    ui->takeImageButton->setEnabled(ready);
}

void camera::on_takeImageButton_clicked()
{
    isCapturingImage = true;
    imageCapture->capture();

    bool test=imageCapture->capture();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("image prise");
       }
    else
        msgBox.setText("Echec");
    msgBox.exec();

   /* QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                 "/home/jana/untitled.png",
                                 tr("Images (*.png *.xpm *.jpg)"));

    if (fileName.isEmpty()){return;}*/

}

