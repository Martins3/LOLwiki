import QtQuick 2.9
import QtQuick.Controls 2.2

ApplicationWindow {
    id: window
    visible: true
    width: 607
    height: 358
    maximumHeight : 717
    maximumWidth : 1215
    title: qsTr("LOLWiki")
    property bool online: false
    Login{
        id:login
        width: window.width
        height: window.height
    }

    HomeForm{
        id:homeForm
        width: window.width
        height: window.height
    }

    header: ToolBar {
        contentHeight: toolButton.implicitHeight

        ToolButton {
            id: toolButton
            text: (online && stackView.depth > 2) || (!online && stackView.depth > 1) ? "\u25C0" : "\u2630"
            font.pixelSize: Qt.application.font.pixelSize * 1.6
            onClicked: {
                if ((stackView.depth > 1 && !online) || (stackView.depth > 2 && online)) {
                    stackView.pop()
                } else {
                    drawer.open()
                }
            }
        }

        Label {
            text: stackView.currentItem.title
            anchors.centerIn: parent
        }
    }

    Drawer {
        id: drawer
        width: window.width * 0.3
        height: window.height

        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("Champion")
                width: parent.width
                onClicked: {
                    stackView.push("Page1Form.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Match")
                width: parent.width
                onClicked: {
                    stackView.push("Summoner.qml")
                    drawer.close()
                }
            }
        }
    }

    StackView {
        id: stackView
        initialItem: login
        anchors.fill: parent
    }

    Connections{
        target: login
        onLogin:{
            stackView.push(homeForm)
            online = true
        }
    }
}
