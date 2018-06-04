import QtQuick 2.9
import QtQuick.Controls 2.2
import example.backend 1.0
import QtQuick.Window 2.3

Page {
    title: qsTr("Champion")
    BackEnd {
        id: backend
    }

    Connections {
        target: backend
        onUserNameChanged: {
            var a = {name: "Sam Wise", portrait: "champion/Ashe.png"}
            listModel.append(a)
        }
    }

     Window {
        id: window2
        title: "window 2"
        width: 400
        height: 400
    }

Column {
    anchors.left: parent.left
    width: parent.width * 0.2
    height: parent.height
    CheckBox {
        text: qsTr("Breakfast")
        checked: true
        onClicked: {
           console.log("breakfast")
           window2.show()
        }
    }
    CheckBox {
        text: qsTr("Lunch")
    }
    CheckBox {
        text: qsTr("Dinner")
        checked: true
    }
}

Rectangle {
    anchors.right: parent.right
    width: parent.width * 0.8
    height: parent.height


    Component {
        id: contactDelegate
        Item {
            width: grid.cellWidth; height: grid.cellHeight
            Column {
                anchors.fill: parent
                Image {
                    width: 40
                    height: 40
                    source: portrait;
                    anchors.horizontalCenter: parent.horizontalCenter
                    }
                Text {
                    text: name;
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }
        }
    }

    GridView {

    MouseArea {
        anchors.fill: parent
        onClicked: {
            backend.userName = "name"
        }
    }
        id: grid
        anchors.fill: parent
        cellWidth: 80; cellHeight: 80

        model: listModel
        delegate: contactDelegate
        focus: true
    }

    ListModel {
        id:listModel
        ListElement {
            name: "Jim Williams"
            portrait: "champion/Ashe.png"
        }
        ListElement {
            name: "John Brown"
            portrait: "champion/Ashe.png"
        }
        ListElement {
            name: "Bill Smyth"
            portrait: "champion/Ashe.png"
        }
        ListElement {
            name: "Sam Wise"
            portrait: "champion/Ashe.png"
        }
    }
}
}
