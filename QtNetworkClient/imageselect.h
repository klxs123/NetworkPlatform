#pragma once

#include <QLabel>
#include <QFiledialog>

class ImageSelect : public QLabel
{
	Q_OBJECT


public:
	ImageSelect(QWidget *parent);
	~ImageSelect();
	void SetImages(const QString& file);
	const QString GetImages();

protected:
	void mousePressEvent(QMouseEvent * Event);
	

private:
	QString m_file;

};
