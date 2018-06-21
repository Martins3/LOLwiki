import QtQuick 2.9
import QtCharts 2.2
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.2
import QtQuick.Window 2.3
import show.summoner 1.0
import QtQuick.Controls.Styles 1.4

Page{
    id: page
    Summoner{id: summoner}
    title: qsTr("Equipment")
    Image{
        opacity: 1
        anchors.fill: parent
        smooth: true
        sourceSize.width: 1215
        sourceSize.height: 717
        source: "champion/Ahri_7.jpg"
     }

    Row {
        opacity: 0.8
        anchors.fill: parent
        Window {
            Image{
                opacity: 0.4
                anchors.fill: parent
                smooth: true
                sourceSize.width: 1215
                sourceSize.height: 717
                source: "champion/Aatrox_0.jpg"
             }

            id: showWindow
            title: "Summoner Spell"
            maximumWidth: 308
            maximumHeight: 560
            minimumWidth: 308
            minimumHeight:  560

            Column{
                anchors.fill: parent
                Text {
                id: show_name
            }

            Text {
                width: parent.width
                id: show_plaintext
                wrapMode: Text.WrapAnywhere
                height: parent / 5
                font.pixelSize: 23
            }

            Image {
                id: show_image
            }
        }
     }

        Window {
        id: editWindow

        maximumWidth: 308
        maximumHeight: 560
        minimumWidth: 308
        minimumHeight:  560

        Image{
            opacity: 0.4
            anchors.fill: parent
            smooth: true
            sourceSize.width: 1215
            sourceSize.height: 717
            source: "champion/Aatrox_0.jpg"
         }

        Column{
                anchors.fill: parent
                Label{
                    text: "Name"
                }
                TextEdit {
                    id: edit_name
                }

                Label{
                    text: "Plain text"
                }
                TextEdit {
                    width: parent.width
                    height: parent.height / 5
                    id: edit_plaintext
                    color: "black"
                    wrapMode: Text.WrapAnywhere
                    font.pixelSize: 15
                }

                Label{
                    text: "Image"
                }

                Image {
                    id: edit_image
                     MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            fileDialog.open()
                        }
                    }
                }

                FileDialog {
                    id: fileDialog
                    title: "Please choose a file"
                    folder: shortcuts.home
                    nameFilters: [ "Image files (*.jpg *.png)"]
                    onAccepted: {
                        console.log("chose " + fileDialog.fileUrls)
                        console.log("Send the message to backend !")
                    }
                    onRejected: {
                        Qt.quit()
                        console.log("Canceled")
                    }
                    Component.onCompleted: visible = false
                }

                Row{
                    Button{
                        text: "Ok"
                        onClicked:{
                            summoner.itemHandler(editWindow.title, edit_image.source, edit_name.text,
                                                 edit_plaintext.text, false)
                            grid.model = summoner.itemListModel
                            editWindow.close()
                        }
                    }

                    Button{
                        text: "Delete"
                        onClicked: {
                            summoner.itemHandler(editWindow.title, edit_image.source, edit_name.text,
                                                 edit_plaintext.text, true)
                            grid.model = summoner.itemListModel
                            editWindow.close()
                        }
                    }

                    Button{
                        text: "Cancel"
                        onClicked: {
                            editWindow.close()
                            editWindow.close()
                        }
                    }
                }
        }
    }

        Window {
        id: addWindow

        maximumWidth: 308
        maximumHeight: 560
        minimumWidth: 308
        minimumHeight:  560

        Image{
            opacity: 0.4
            anchors.fill: parent
            smooth: true
            sourceSize.width: 1215
            sourceSize.height: 717
            source: "champion/Aatrox_0.jpg"
         }

        Column{
                anchors.fill: parent
                Label{
                    text: "Name"
                }
                TextEdit {
                    id: add_name
                    text: "item name"
                }
                Label{
                    text: "Plain text"
                }
                TextEdit {
                    width: parent.width
                    height: parent.height / 5
                    id: add_plaintext
                    color: "black"
                    wrapMode: Text.WrapAnywhere
                    font.pixelSize: 15
                    text : "desc"
                }

                Label{
                    text: "Image"
                }

                Image {
                    id: add_image
                     MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            fileDialog.open()
                        }
                    }
                }

                FileDialog {
                    id: addFileDialog
                    title: "Please choose a file"
                    folder: shortcuts.home
                    nameFilters: [ "Image files (*.jpg *.png)"]
                    onAccepted: {
                        console.log("chose " + fileDialog.fileUrls)
                        console.log("Send the message to backend !")
                    }
                    onRejected: {
                        Qt.quit()
                        console.log("Canceled")
                    }
                    Component.onCompleted: visible = false
                }

                Row{
                    Button{
                        text: "Ok"
                        onClicked:{
                            summoner.itemHandler(addWindow.title, add_image.source, add_name.text,
                                                 add_plaintext.text, false)
                            grid.model = summoner.itemListModel
                            addWindow.close()
                        }
                    }
                    Button{
                        text: "Cancel"
                        onClicked: {
                            addWindow.close()
                        }
                    }
                }
        }
    }

        Rectangle {
            width: parent.width
            height: parent.height

            GridView{
                height: parent.height
                width: parent.width * 0.15
                anchors.left:  parent.left
                cellHeight: 25
                cellWidth: parent.width * 0.15
                clip: true

                model: summoner.itemTagModel
                delegate:
                    Component {
                        CheckBox {
                            clip: true
                            text : model.modelData.name
                            checked: false
                            onClicked: {
                                if(checked){
                                    summoner.itemSelect(model.modelData.name, true);
                                }else{
                                    summoner.itemSelect(model.modelData.name, false);
                                }
                                grid.model = summoner.itemListModel
                            }
                        }
                    }
            }

            MouseArea {
                id: idMouseArea
                acceptedButtons: Qt.RightButton
                anchors.fill: parent
                onClicked: {
                    if (mouse.button & Qt.RightButton) {
                        addWindow.title = -1
                        addWindow.show()
                    }
                }
        }

            GridView {
                id: grid
                width: parent.width * 0.85
                height: parent.height
                anchors.right: parent.right
                focus: true
                cellWidth: 80
                clip: true
                highlightFollowsCurrentItem: true
                highlight: Rectangle { color: "lightsteelblue"; radius: 5 }

                model: summoner.itemListModel
                delegate:
                    Component {
                        id: contactDelegate
                        Item {
                            width: grid.cellWidth
                            height: grid.cellHeight
                            Column {
                                anchors.fill: parent
                                Image {
                                    MouseArea {
                                        anchors.fill: parent
                                        acceptedButtons: Qt.LeftButton | Qt.RightButton
                                        onClicked:  {
                                            grid.currentIndex = index
                                            console.log(index)
                                            if (mouse.button & Qt.RightButton) {
                                                edit_name.text = model.modelData.name
                                                edit_image.source = model.modelData.image
                                                edit_plaintext.text = model.modelData.description
                                                editWindow.title = model.modelData.key
                                                editWindow.show()
                                            } else if (mouse.button & Qt.LeftButton) {
                                                show_name.text = model.modelData.name
                                                show_image.source = model.modelData.image
                                                show_plaintext.text = model.modelData.description
                                                showWindow.title = model.modelData.key
                                                showWindow.show()
                                            }
                                        }
                                    }
                                    width: 40
                                    height: 40
                                    source: model.modelData.image
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    }
                                Text {
                                    horizontalAlignment: Text.Center
                                    width: parent.width
                                    wrapMode: Text.WrapAnywhere
                                    text: model.modelData.name
                                    anchors.horizontalCenter: parent.horizontalCenter
                                }
                            }
                        }
                    }
            }
        }
    }
}

