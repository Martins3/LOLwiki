import QtQuick 2.9
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.2
import QtQuick.Window 2.3
import show.summoner 1.0
import QtQuick.Controls.Styles 1.4
Page {
    title: qsTr("Summoner Spell")
    Summoner{id: summoner}
    Image{
        opacity: 1
        anchors.fill: parent
        smooth: true
        sourceSize.width: 1215
        sourceSize.height: 717
        source: "champion/Ahri_7.jpg"
     }

    Window {
        id: showWindow
        title: "Summoner Spell"
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
                        onClicked: {
                            summoner.summonerSpellhandler(editWindow.title, edit_name.text,
                                                         edit_cooldown.text, edit_description.text,
                                                          edit_image.source, false)
                            grid.model = summoner.listModel
                            editWindow.close()
                        }
                    }


                    Button{
                        text: "delete"
                        id: edit_delete
                        onClicked: {
                            summoner.summonerSpellhandler(editWindow.title, edit_name.text,
                                                         edit_cooldown.text, edit_description.text,
                                                          edit_image.source, true)
                            grid.model = summoner.listModel
                            editWindow.close()
                        }
                    }

                    Button{
                        text: "Cancel"
                        id: edit_cancel
                        onClicked: editWindow.close()
                    }
                }

        }
    }

    Window {
        id: addWindow
        title: "Create Summoner Spell"

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
                    text: "summoner spell name"
                }

                Label{
                    text: "Description"
                }

                TextEdit {
                    width: parent.width
                    height: parent.height / 4
                    id: add_description
                    color: "black"
                    wrapMode: Text.WrapAnywhere
                    font.pixelSize: 15
                    text: "des"
                }

                Label{
                    text: "Image"
                }

                Image {
                    id: add_image
                     MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            addFileDialog.open()
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

                Label{
                    text: "Cooldown"
                }
                TextEdit {
                    id: add_cooldown
                    text: "10"
                }

                Row{
                    Button{
                        text: "Ok"
                        id: add_ok
                        onClicked: {
                            console.log(addWindow.title, add_name.text,
                                                          add_cooldown.text, add_description.text,
                                                          add_image.source)

                            summoner.summonerSpellhandler(addWindow.title, add_name.text,
                                                          add_cooldown.text, add_description.text,
                                                          add_image.source, false)
                            grid.model = summoner.listModel
                            addWindow.close()
                        }
                    }

                    Button{
                        text: "Cancel"
                        id: add_cancel
                        onClicked: addWindow.close()
                    }
                }

        }
    }

    Rectangle {
        opacity: 0.8
        anchors.right: parent.right
        width: parent.width
        height: parent.height

        MouseArea {
            id: idMouseArea

            acceptedButtons: Qt.RightButton

            anchors.fill: parent

            onClicked: {
                if (mouse.button & Qt.RightButton) {
                    addWindow.title = -1;
                    addWindow.show()
                }
            }
        }


        GridView {
            id: grid
            anchors.fill: parent
            cellWidth: 80
            clip: true
            highlightFollowsCurrentItem: true
            highlight: Rectangle { color: "lightsteelblue"; radius: 5 }

            model: summoner.listModel
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
                                            editWindow.title = model.modelData.spellKey

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
            focus: true
        }
    }
}
