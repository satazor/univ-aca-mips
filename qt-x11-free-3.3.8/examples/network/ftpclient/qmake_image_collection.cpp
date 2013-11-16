/****************************************************************************
** Image collection for project 'ftpclient'.
**
** Generated from reading image files: 
**      images/file.png
**      images/folder.png
**
** Created: Tue Oct 8 10:27:19 2013
**      by: The User Interface Compiler ($Id: qt/embed.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include <qimage.h>
#include <qdict.h>
#include <qmime.h>
#include <qdragobject.h>

// images/file.png
static const unsigned char image_0_data[] = {
    0x00,0x00,0x03,0x0c,0x78,0x9c,0xab,0xaf,0xaf,0xff,0x5f,0x4f,0x04,0x3e,
    0x76,0xec,0x18,0x03,0x0c,0x83,0xf8,0x84,0xc0,0xfe,0xfd,0xfb,0x51,0xf4,
    0x11,0xab,0x07,0x04,0x60,0xfa,0x88,0xd1,0xc3,0xc0,0xc0,0x80,0x82,0x89,
    0xd1,0x83,0x6c,0xdf,0xa8,0x9e,0xa1,0xa1,0x07,0xc4,0x26,0x16,0xa3,0xa7,
    0x09,0x62,0x31,0x00,0x71,0x93,0x78,0x68
};

// images/folder.png
static const unsigned char image_1_data[] = {
    0x00,0x00,0x03,0x84,0x78,0x9c,0x3b,0x76,0xec,0x18,0xc3,0x31,0x0a,0xf1,
    0xcc,0x99,0x33,0xff,0xa3,0x63,0x62,0xf5,0x9d,0x39,0x73,0xe6,0x3f,0xc3,
    0xff,0xff,0x28,0x34,0x21,0xfd,0xb8,0xf4,0x21,0xeb,0xc7,0xe5,0x26,0x10,
    0x4d,0x2a,0x00,0xe9,0x61,0x60,0x60,0xf8,0x0f,0xd3,0x8b,0xcb,0x5e,0x6c,
    0x34,0xba,0x5e,0x62,0xf5,0xc1,0xfc,0x31,0x6a,0x2f,0xe9,0xf6,0x92,0x83,
    0x41,0x7a,0x41,0xe9,0x03,0x44,0x93,0x83,0x29,0xc9,0x3f,0x00,0x35,0x5b,
    0x6d,0x5b
};

static struct EmbedImage {
    int width, height, depth;
    const unsigned char *data;
    ulong compressed;
    int numColors;
    const QRgb *colorTable;
    bool alpha;
    const char *name;
} embed_image_vec[] = {
    { 13, 15, 32, (const unsigned char*)image_0_data, 64, 0, 0, TRUE, "file.png" },
    { 15, 15, 32, (const unsigned char*)image_1_data, 86, 0, 0, TRUE, "folder.png" },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

static QImage uic_findImage( const QString& name )
{
    for ( int i=0; embed_image_vec[i].data; i++ ) {
	if ( QString::fromUtf8(embed_image_vec[i].name) == name ) {
	    QByteArray baunzip;
	    baunzip = qUncompress( embed_image_vec[i].data, 
		embed_image_vec[i].compressed );
	    QImage img((uchar*)baunzip.data(),
			embed_image_vec[i].width,
			embed_image_vec[i].height,
			embed_image_vec[i].depth,
			(QRgb*)embed_image_vec[i].colorTable,
			embed_image_vec[i].numColors,
			QImage::BigEndian
		);
	    img = img.copy();
	    if ( embed_image_vec[i].alpha )
		img.setAlphaBuffer(TRUE);
	    return img;
        }
    }
    return QImage();
}

class MimeSourceFactory_ftpclient : public QMimeSourceFactory
{
public:
    MimeSourceFactory_ftpclient() {}
    ~MimeSourceFactory_ftpclient() {}
    const QMimeSource* data( const QString& abs_name ) const {
	const QMimeSource* d = QMimeSourceFactory::data( abs_name );
	if ( d || abs_name.isNull() ) return d;
	QImage img = uic_findImage( abs_name );
	if ( !img.isNull() )
	    ((QMimeSourceFactory*)this)->setImage( abs_name, img );
	return QMimeSourceFactory::data( abs_name );
    };
};

static QMimeSourceFactory* factory = 0;

void qInitImages_ftpclient()
{
    if ( !factory ) {
	factory = new MimeSourceFactory_ftpclient;
	QMimeSourceFactory::defaultFactory()->addFactory( factory );
    }
}

void qCleanupImages_ftpclient()
{
    if ( factory ) {
	QMimeSourceFactory::defaultFactory()->removeFactory( factory );
	delete factory;
	factory = 0;
    }
}

class StaticInitImages_ftpclient
{
public:
    StaticInitImages_ftpclient() { qInitImages_ftpclient(); }
#if defined(Q_OS_SCO) || defined(Q_OS_UNIXWARE)
    ~StaticInitImages_ftpclient() { }
#else
    ~StaticInitImages_ftpclient() { qCleanupImages_ftpclient(); }
#endif
};

static StaticInitImages_ftpclient staticImages;
