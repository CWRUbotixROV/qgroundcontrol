#include "FlightDisplayViewMultiVideo.h"

FlightDisplayViewMultiVideo::FlightDisplayViewMultiVideo(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant FlightDisplayViewMultiVideo::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex FlightDisplayViewMultiVideo::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex FlightDisplayViewMultiVideo::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int FlightDisplayViewMultiVideo::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int FlightDisplayViewMultiVideo::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant FlightDisplayViewMultiVideo::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
