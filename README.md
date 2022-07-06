# QTcamIPgstream
Project use gstreamer https://gstreamer.freedesktop.org/
You need install gstream! Check in console this command:
pkg-config --cflags gstreamer-1.0

Than change your IP adress in main.qml:
        MediaPlayer {
            id: cam2
            source: "rtsp://192.168.88.17:554/live/0/Main"
            autoPlay: true
        }
