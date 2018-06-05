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
                id: show_description
                wrapMode: Text.WrapAnywhere
                height: parent / 4
                font.pixelSize: 23
            }


            Text {
                id: show_cooldown
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
                    text: "Description"
                }
                TextEdit {
                    width: parent.width
                    height: parent.height / 4
                    id: edit_description
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

                Label{
                    text: "Cooldown"
                }
                TextEdit {
                    id: edit_cooldown
                }

                Row{
                    Button{
                        text: "Ok"
                        id: edit_ok
                    }

                    Button{
                        text: "Cancel"
                        id: edit_cancel
                    }
                }

        }

        Connections{
            target: editWindow
            onClosing:{
               summoner.handler(editWindow.title, edit_name.text)
               grid.model = summoner.listModel
            }
        }
    }

        Window {
        id: addWindow
        title: "Create Summoner Spell"
        width: 400
        height: 400
    }

        Rectangle {
            width: parent.width
            height: parent.height

            Column{
                width: parent.width * 0.1
                height: parent.height
                anchors.left:  parent.left


                CheckBox {
                    checked: true
                    onClicked: {
                        console.log("breakfast")
                        if(checked){
                           summoner.handler("", edit_name.text)
                        }else{
                        }
                        grid.model = summoner.listModel
                    }
                }
                Text {
                    text: qsTr("Mana")
                }


                CheckBox {
                    signal login(string username, string password, string status)
                }
                Text {
                    text: qsTr("Mana")
                }

                CheckBox {
                    signal login(string username, string password, string status)
                    checked: true
                }
                Text {
                    text: qsTr("Mana")
                }

            }

            MouseArea {
                id: idMouseArea

                acceptedButtons: Qt.RightButton

                anchors.fill: parent

                onClicked: {
                    if (mouse.button & Qt.RightButton) {
                        addWindow.show()
                    }
                }
        }

            GridView {
                id: grid
                width: parent.width * 0.9
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
                                                edit_description.text = model.modelData.description
                                                edit_cooldown.text = model.modelData.cooldown
                                                editWindow.title = model.modelData.name
                                                editWindow.show()
                                                console.log(grid.currentIndex)
                                            } else if (mouse.button & Qt.LeftButton) {
                                                show_name.text = model.modelData.name
                                                show_image.source = model.modelData.image
                                                show_description.text = model.modelData.description
                                                show_cooldown.text = model.modelData.cooldown
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

