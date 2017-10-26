#include "imageselect.h"
#include <Qimagereader>
#include <Qfiledialog>
#include <iostream>

ImageSelect::ImageSelect(QWidget *parent)
	: QLabel(parent)
{
	
}

ImageSelect::~ImageSelect()
{
}

void ImageSelect::SetImages(const QString & file)
{
	QImageReader tr(file);
	QPixmap image = QPixmap::fromImageReader(&tr);
	this->setPixmap(image.scaled(this->size()));
	m_file = file;
}

const int Path_lenth = 18;		//:/image/Resources/

const QString ImageSelect::GetImages()
{
	QString m_filename = "D:\\vs2015Project\\QtNetworkClient\\QtNetworkClient\\Resources\\";
	m_filename += m_file.mid(Path_lenth);
	return m_filename;
}



void ImageSelect::mousePressEvent(QMouseEvent * event)
{
	QLabel::mousePressEvent(event);
	QFileDialog dial(this);
	dial.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));

	if (dial.exec() == QDialog::Rejected)
	{
		return;
	}

	

	QStringList file = dial.selectedFiles();
	SetImages(*file.begin());
	
}




