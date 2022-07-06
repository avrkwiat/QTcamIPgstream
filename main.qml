import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.VirtualKeyboard 2.15
import QtMultimedia 5.5

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Item {
        id: item1
        anchors.fill: parent
        MediaPlayer {
            id: cam1
            source: "rtsp://192.168.88.17:554/live/0/Main"
            autoPlay: true
        }
        VideoOutput {
            height: parent.height/2
            width: parent.width
            anchors.top: parent.top
            //anchors.fill: parent
            source: cam1
            anchors.topMargin: 0
        }
        MediaPlayer {
            id: cam2
            source: "rtsp://192.168.88.17:554/live/0/Main"
            autoPlay: true
        }
        VideoOutput {
            height: parent.height/2
            width: parent.width
            anchors.bottom: parent.bottom
            //anchors.fill: parent
            source: cam2
            anchors.bottomMargin: 0
        }
//              MouseArea {
//                  id: playArea
//                  anchors.fill: parent
//                  onPressed: cam1.play();
//              }
      }

//    InputPanel {
//        id: inputPanel
//        z: 99
//        x: 0
//        y: window.height
//        width: window.width

//        states: State {
//            name: "visible"
//            when: inputPanel.active
//            PropertyChanges {
//                target: inputPanel
//                y: window.height - inputPanel.height
//            }
//        }
//        transitions: Transition {
//            from: ""
//            to: "visible"
//            reversible: true
//            ParallelAnimation {
//                NumberAnimation {
//                    properties: "y"
//                    duration: 250
//                    easing.type: Easing.InOutQuad
//                }
//            }
//        }
//    }
}
