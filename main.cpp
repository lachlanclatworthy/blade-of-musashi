#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <vaughn.h>
#include <dog.h>
#include <person.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    goDog();
    goCell();

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("blade-of-musashi", "Main");

    return app.exec();
}
