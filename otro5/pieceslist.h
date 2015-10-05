
#ifndef PIECESLIST_H
#define PIECESLIST_H

#include <QListWidget>

class PiecesList : public QListWidget
{
    Q_OBJECT

public:
    explicit PiecesList(int pieceSize, QWidget *parent = 0);
    void addPiece(QPixmap pixmap, QPoint location);

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void startDrag(Qt::DropActions supportedActions);

    int m_PieceSize;
};

#endif // PIECESLIST_H
