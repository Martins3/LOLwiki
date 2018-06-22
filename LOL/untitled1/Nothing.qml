import QtQuick 2.10
import QtQuick.Window 2.10
import QtCharts 2.0

Window {
    width: 640
    height: 480
    title: qsTr("Hello World")
    id:showWindow

    Rectangle{
        color: "red"
        width: 100
        height: 100
        MouseArea{
            anchors.fill: parent
            hoverEnabled: true
            onEntered: {
                mainWindow.visible = false
                console.log("AAAAAA")
            }

            onExited: {
                mainWindow.visible = true
                console.log("BBBBB")
            }
        }
    }
}
