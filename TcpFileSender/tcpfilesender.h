#ifndef TCPFILESENDER_H
#define TCPFILESENDER_H

#include <QDialog>

class TcpFileSender : public QDialog
{
    Q_OBJECT

public:
    explicit TcpFileSender(QWidget *parent = nullptr);
    ~TcpFileSender() override;
};
#endif // TCPFILESENDER_H
