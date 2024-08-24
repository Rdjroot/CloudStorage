﻿#include "uitransfer.h"
#include "ui_uitransfer.h"

UiTransfer::UiTransfer(QWidget *parent)
    : UiQosDialog(parent)
    , ui(new Ui::UiTransfer)
{
    ui->setupUi(body());
    setTitle(QString::fromLocal8Bit("传输列表"));
    setFixedSize(600,450);
}

UiTransfer::~UiTransfer()
{
    delete ui;
}
