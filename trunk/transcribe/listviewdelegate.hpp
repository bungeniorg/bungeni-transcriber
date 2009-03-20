#ifndef _LIST_VIEW_DELEGATE_
#define _LIST_VIEW_DELEGATE_

#include <QAbstractItemDelegate>

class QAbstractItemModel;
class QObject;
class QPainter;

class myDelegate : public QAbstractItemDelegate {
	Q_OBJECT
public:
	myDelegate(QObject *parent);
    	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;                 
	QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const; 
	QString timeSecondstoString(const int time) const;
};

#endif
