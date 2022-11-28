#include "arduino.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include <arduino.h>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
arduino::arduino()
{

}
int arduino::connect_arduino()
{
    foreach(const QSerialPortInfo &serial_port_info,QSerialPortInfo::availablePorts()) {
        if (serial_port_info.vendorIdentifier() && serial_port_info.hasProductIdentifier()){
     if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_producy_id ) {
        arduino_is_available=true ;
        arduino_port_name=serial_port_info.portName() ;
        } } }
qDebug() <<"arduino_port_name is :" <<arduino_port_name ;
if (arduino_is_available)
{
    serial->setPortName(arduino_port_name) ;
    if (serial->open(QSerialPort::ReadWrite))
    {
        serial->setBaudRate(QSerialPort::Baud9600) ; //debit
        serial->setDataBits(QSerialPort::Data8) ; //mongeur des données : 8bits
        serial->setParity(QSerialPort::NoParity) ; //1bit de parite optionnel
        serial->setStopBits(QSerialPort::OneStop) ; //Nbre de bits de stop : 1
        serial->setFlowControl(QSerialPort::NoFlowControl) ;
        return 0 ;
    }


}
    return 1 ;
}
int arduino::close_arduino()
{
    if (serial->isOpen()) {
        serial->close() ;
        return 0 ;
 }
    return 1 ;
}


QByteArray arduino::read_from_arduino() {
      if(serial->isReadable()) {
    data=serial->readAll(); //recuperer les données reçues
      return data ;
}
      return data;
}
QSerialPort* arduino::getserial()
{

    {return serial;}
}
QString arduino::getarduino_port_name()
{
    return arduino_port_name;
}

int arduino::write_to_arduino(QByteArray d)
{
    if(serial->isWritable()){
        serial->write(d);
    }
    else{qDebug()<<"couldn't write to serial!";
    } return 0 ;
}

