#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <gst/gst.h>

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    if (qEnvironmentVariableIsEmpty("QTGLESSTREAM_DISPLAY")) {
        qputenv("QT_QPA_EGLFS_PHYSICAL_WIDTH", QByteArray("213"));
        qputenv("QT_QPA_EGLFS_PHYSICAL_HEIGHT", QByteArray("120"));

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    }
    QGuiApplication app(argc, argv);



    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    /* Initialize GStreamer */
    gst_init (&argc, &argv);
//    GstElement *pipeline;
//    GstBus *bus;
//    GstMessage *msg;
    /* Build the pipeline */

//    pipeline = gst_parse_launch ("playbin uri=rtsp://192.168.88.17:554/live/0/Main",NULL);

//    /* Start playing */
//    gst_element_set_state (pipeline, GST_STATE_PLAYING);

//    /* Wait until error or EOS */
//    bus = gst_element_get_bus (pipeline);
//    msg = gst_bus_timed_pop_filtered (bus, GST_CLOCK_TIME_NONE, (GstMessageType)(GST_MESSAGE_ERROR | GST_MESSAGE_EOS));

//    /* Free resources */
//    if (msg != NULL)
//      gst_message_unref (msg);
//    gst_object_unref (bus);
//    gst_element_set_state (pipeline, GST_STATE_NULL);
//    gst_object_unref (pipeline);

    return app.exec();
}
