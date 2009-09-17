#ifndef _LIST_VIEW_DELEGATE_
#define _LIST_VIEW_DELEGATE_

#include <QAbstractItemDelegate>

class QAbstractItemModel;
class QObject;
class QPainter;
class QModelIndex;

class ListViewDelegate : public QAbstractItemDelegate {
	Q_OBJECT
private:
    QModelIndex current;
    bool editing;
public:
	ListViewDelegate(QObject *parent);
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;                 
	QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const; 
	QString timeSecondstoString(const int time) const;
    void setEditorData ( QWidget * editor, const QModelIndex & index ) const;
    void setModelData ( QWidget * editor, QAbstractItemModel * model, const QModelIndex & index ) const;
    void updateEditorGeometry ( QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index ) const;
    QWidget * createEditor ( QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index ) const;
public slots:
    void currentEditing(QModelIndex index);
    void display(QModelIndex index);
    void editorClose(QWidget *editor);
signals:
    void closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint = NoHint );   
};

#endif
