# QTcamIPgstream
Project use gstreamer https://gstreamer.freedesktop.org/<BR/>
You need install gstream! <BR/>
Check in console this command:<BR/>
<pre>pkg-config --cflags gstreamer-1.0</pre>
<BR/>
Than change your IP adress in<b> main.qml</b>:
<BR/>
<pre>
        MediaPlayer {<BR/>
            id: cam2<BR/>
            source: "<b>rtsp://192.168.88.17:554/live/0/Main</b>"<BR/>
            //source:"rtsp://admin:MyPassword@192.168.88.65:554/Streaming/channels/1/?transportmode=multicast" //HiKVison camera stream<BR/>
            autoPlay: true<BR/>
        }
</pre>
