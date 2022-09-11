#include <QCoreApplication>
#include <QDebug>
#include <boost/timer.hpp>
#include <boost/version.hpp>
#include <boost/config.hpp>
#include "NumCpp.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    boost::timer tmr;
    qDebug() << tmr.elapsed() << "S" << endl;
    qDebug() << BOOST_VERSION << endl;
    qDebug() << BOOST_LIB_VERSION << endl;
    qDebug() << BOOST_PLATFORM << endl;
    qDebug() << BOOST_COMPILER << endl;
    qDebug() << BOOST_STDLIB << endl;

    nc::NdArray<float> m1 = {{1, 2}, {3, 4}};
    nc::NdArray<float> m2 = {{1, 2}, {3, 4}};
    nc::NdArray<float> m3 = m1 * m2;
    std::cout << m3 << std::endl;
    return a.exec();
}
