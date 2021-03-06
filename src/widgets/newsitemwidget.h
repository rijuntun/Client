#ifndef NEWSITEM_WIDGET_H
#define NEWSITEM_WIDGET_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QSettings>

#include <QByteArray>
#include <QUrl>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>

class NewsItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NewsItemWidget(QSettings* p, QString URL, QString source, QString title, QString descriptionString, QWidget* parent = 0);
    void mousePressEvent(QMouseEvent *) override;

signals:

public slots:

private:
    QLabel* imageLabel;
    QLabel* titleLabel;
    QLabel* sourceLabel;
    QLabel* descriptionLabel;
    QString urlString;
    QString descriptionString;
    QNetworkAccessManager* manager;
    void sourceCodeFetchComplete(QNetworkReply*);
    void enterEvent(QEvent*) override;
    void leaveEvent(QEvent*) override;
    QSettings* palette;
};

#endif // NEWSITEM_WIDGET_H
