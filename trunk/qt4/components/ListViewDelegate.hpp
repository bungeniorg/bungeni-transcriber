#ifndef _LIST_VIEW_DELEGATE_
#define _LIST_VIEW_DELEGATE_

#include <QAbstractItemDelegate>

class QAbstractItemModel;
class QObject;
class QPainter;
class QModelIndex;

class ListViewDelegate : public QAbstractItemDelegate {
	Q_OBJECT
public:
	ListViewDelegate(QObject *parent);
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;                 
	QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const; 
	QString timeSecondstoString(const int time) const;
/*    
void setEditorData ( QWidget * editor, const QModelIndex & index ) const;
    void setModelData ( QWidget * editor, QAbstractItemModel * model, const QModelIndex & index );
    void updateEditorGeometry ( QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index ) const;
    QWidget * createEditor ( QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index ) const;
*/
};

#endif
