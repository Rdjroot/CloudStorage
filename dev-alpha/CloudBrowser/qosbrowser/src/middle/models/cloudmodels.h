﻿#ifndef MYBUCKET_H
#define MYBUCKET_H

#include <QObject>
#include<QString>

struct BaseObject
{
    bool isValid() const {return !isInvalid();}
    bool isInvalid() const {return name.isNull() || name.isEmpty();}
    QString name;
};
Q_DECLARE_METATYPE(BaseObject);

// 桶结构
struct MyBucket: public BaseObject
{
    MyBucket();
    QString location;
    QString createDate;
};
Q_DECLARE_METATYPE(MyBucket);

struct MyObject: public BaseObject
{
    bool isDir() const{return isValid() && name.endsWith("/");}
    bool isFile() const{return isValid() && !name.endsWith("/");}
    QString lastmodified;           // 最后一次操作方式
    // qulonglong  == unsigned __int64 on Windows
    qulonglong size = 0;
    QString dir;
    QString key;
};
Q_DECLARE_METATYPE(MyObject);


#endif // MYBUCKET_H
