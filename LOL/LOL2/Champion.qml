import QtQuick 2.9
import QtCharts 2.2
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.2
import QtQuick.Window 2.3
import show.summoner 1.0
import QtQuick.Controls.Styles 1.4

Page{
    id: mainWindow
    Summoner{id: summoner}
    title: qsTr("Champion")

    Image{
        opacity: 1
        anchors.fill: parent
        smooth: true
        sourceSize.width: 1215
        sourceSize.height: 717
        source: "champion/Ahri_7.jpg"
     }

    Rectangle {
            opacity: 0.8
            width: parent.width
            height: parent.height
            anchors.fill: parent
            GridView{
                height: parent.height
                width: parent.width * 0.15
                anchors.left:  parent.left
                cellHeight: 25
                cellWidth: parent.width * 0.15
                clip: true

                model: summoner.championTagModel
                delegate:
                    Component {
                        CheckBox {
                            clip: true
                            text : model.modelData.name
                            checked: false
                            onClicked: {
                                if(checked){
                                    summoner.championSelect(model.modelData.name, true);
                                }else{
                                    summoner.championSelect(model.modelData.name, false);
                                }
                                grid.model = summoner.championModel
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

                model: summoner.championModel
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
                                                edit_name.placeholderText = model.modelData.name
                                                edit_image.source = model.modelData.image
                                                edit_blurb.placeholderText = model.modelData.blurb
                                                edit_title.placeholderText = model.modelData.title
                                                editWindow.title = model.modelData.champion_key

                                                var info = summoner.getChampionInfo(model.modelData.champion_key)
                                                var stat = summoner.getChampionStat(model.modelData.champion_key)


                                                s1.value = info.info_attack * 0.1
                                                s2.value = info.info_defense * 0.1
                                                s3.value = info.info_difficulty * 0.1
                                                s4.value = info.info_magic * 0.1

                                                stat_text_0.placeholderText = stat.armor
                                                stat_text_1.placeholderText = stat.armorperlevel
                                                stat_text_2.placeholderText = stat.attackdamage
                                                stat_text_3.placeholderText = stat.attackdamageperlevel
                                                stat_text_4.placeholderText = stat.attackrange
                                                stat_text_5.placeholderText = stat.attackspeedoffset
                                                stat_text_6.placeholderText = stat.attackspeedperlevel
                                                stat_text_7.placeholderText = stat.crit
                                                stat_text_8.placeholderText = stat.critperlevel
                                                stat_text_9.placeholderText = stat.hp
                                                stat_text_10.placeholderText = stat.hpperlevel
                                                stat_text_11.placeholderText = stat.hpregen
                                                stat_text_12.placeholderText = stat.hpregenperlevel
                                                stat_text_13.placeholderText = stat.movespeed
                                                stat_text_14.placeholderText = stat.mp
                                                stat_text_15.placeholderText = stat.mpperlevel
                                                stat_text_16.placeholderText = stat.mpregen
                                                stat_text_17.placeholderText = stat.mpregenperlevel
                                                stat_text_18.placeholderText = stat.spellblock
                                                stat_text_19.placeholderText = stat.spellblockperlevel


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

  Window {
        id:editWindow
        x:mainWindow.x + mainWindow.width
        y:mainWindow.y
        maximumWidth: 308
        maximumHeight: 560
        minimumWidth: 308
        minimumHeight:  560
        property bool showInfo : false

        Row{
            anchors.fill: parent
            spacing: 20
            Column{
                width: 308
                    spacing: 10
                    Label{
                        text : "名称"
                        width: parent.width
                        color: "#e5b91b"
                        font.bold: true
                        horizontalAlignment : Text.Center
                    }

                    TextField {
                        id: edit_name
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        horizontalAlignment : Text.Center
                        font.bold: true
                    }

                    Label{
                        text:"称号"
                        width: parent.width
                        color: "#e5b91b"
                        font.bold: true
                        horizontalAlignment : Text.Center
                    }

                    TextField {
                        id: edit_title
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        horizontalAlignment : Text.Center
                        font.bold: true
                    }

                    Label{
                        text:"图像"
                        width: parent.width
                        color: "#e5b91b"
                        font.bold: true
                        horizontalAlignment : Text.Center
                    }

                    Image {
                        id: edit_image
                        width: 80
                        height: 80
                        anchors.left: parent.left
                        anchors.leftMargin: (parent.width - width) / 2
                        MouseArea {
                            anchors.fill: parent
                            onClicked: {
                                editFileDialog.open()
                            }
                        }
                    }


                   Row{
                       width: parent.width
                       Column{
                           width: parent.width / 5
                           Text {
                                color: "#e5b91b"
                                font.bold: true
                                horizontalAlignment : Text.Center
                                text: qsTr("Passive")
                           }
                           Image {
                               id: spell_passive
                               width: parent.width
                               source: "qrc:/spell/AatroxE.png"
                           }
                       }

                       Column{
                           width: parent.width / 5
                           Text {
                                color: "#e5b91b"
                                font.bold: true
                                horizontalAlignment : Text.Center
                                text: qsTr("Q")
                           }
                           Image {
                               id: spell_q
                               width: parent.width
                               source: "qrc:/spell/AatroxE.png"
                           }
                       }

                       Column{
                           width: parent.width / 5
                           Text {
                                color: "#e5b91b"
                                font.bold: true
                                horizontalAlignment : Text.Center
                                text: qsTr("Passive")
                           }
                           Image {
                               id: spell_W
                               width: parent.width
                               source: "qrc:/spell/AatroxE.png"
                           }
                       }

                       Column{
                           width: parent.width / 5
                           Text {
                                color: "#e5b91b"
                                font.bold: true
                                horizontalAlignment : Text.Center
                                text: qsTr("Passive")
                           }
                           Image {
                               id: spell_E
                               width: parent.width
                               source: "qrc:/spell/AatroxE.png"
                           }
                       }

                       Column{
                           width: parent.width / 5
                           Text {
                                color: "#e5b91b"
                                font.bold: true
                                horizontalAlignment : Text.Center
                                text: qsTr("Passive")
                           }
                           Image {
                               id: spell_R
                               width: parent.width
                               source: "qrc:/spell/AatroxE.png"
                           }
                       }



                   }

                    Label{
                        text:"故事背景"
                        width: parent.width
                        color: "#e5b91b"
                        font.bold: true
                        horizontalAlignment : Text.Center

                    }

                    TextField {
                        id: edit_blurb
                        color: "#e8661b"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        font.bold: true
                        horizontalAlignment : Text.Center
                    }

                    FileDialog {
                        id: editFileDialog
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

                        Button {
                            id: control
                            text: qsTr("<b>Details<b>")

                            width: parent.width
                            onClicked: {
                                if(! editWindow.showInfo){
                                    editWindow.maximumWidth = 308 * 3
                                    editWindow.minimumWidth = 308 * 3
                                }else{
                                    editWindow.maximumWidth = 308
                                    editWindow.minimumWidth = 308
                                }
                                editWindow.showInfo = !editWindow.showInfo
                            }

                            contentItem: Text {
                                text: control.text
                                font: control.font
                                opacity: enabled ? 1.0 : 0.3
                                color: control.down ?"#21be2b": "#e82e5c"
                                horizontalAlignment: Text.AlignHCenter
                                verticalAlignment: Text.AlignVCenter
                                elide: Text.ElideRight
                            }

                            background: Rectangle {
                                implicitWidth: 100
                                implicitHeight: 40
                                opacity: enabled ? 1 : 0.3
                                color: "#eacf20"
                                border.color: control.down ? "black" : "red"
                                border.width: 1
                                radius: 2
                            }
                        }


                    Row{
                        width: parent.width
                        Button{
                            text: "Ok"
                            id: edit_ok
                            width: parent.width / 3
                            onClicked: {
                                editWindow.close()
                            }
                        }

                        Button {
                            text: qsTr("<b>Delete<b>")
                            width: parent.width / 3
                            onClicked: {
                                editWindow.close()
                            }
                        }


                        Button{
                            text: "Cancel"
                            id: edit_cancel
                            width: parent.width / 3
                            onClicked: editWindow.close()
                        }
                    }
            }
        Column{
            width: 308
            Row{
                Label{
                    width: parent.width / 6
                    id : l1
                    text: "Attck"
                }
                Slider {
                    id: s1
                    stepSize: 0.1
                    value: 0
                    enabled: true
                    wheelEnabled: true
                    onValueChanged: {
                        i1.text = parseInt(value * 5)
                    }
                }
                Label{
                    width: parent.width / 6
                    id : i1
                }
            }

            Row{
                Label{
                    width: parent.width / 6
                    id : l2
                    text: "Defense"
                }
                Slider {
                    id: s2
                    stepSize: 0.1
                    value: 0
                    enabled: true
                    wheelEnabled: true
                    onValueChanged: {
                        i2.text = parseInt(value * 5)
                    }
                }
                Label{
                    width: parent.width / 6
                    id : i2
                }
            }

            Row{
                Label{
                    width: parent.width / 6
                    id : l3
                    text: "Difficulty"
                }
                Slider {
                    id: s3
                    stepSize: 0.1
                    value: 0
                    enabled: true
                    wheelEnabled: true
                    onValueChanged: {
                        i3.text = parseInt(value * 5)
                    }
                }
                Label{
                    width: parent.width / 6
                    id : i3
                }
            }

            Row{
                Label{
                    width: parent.width / 6
                    id : l4
                    text: "Magic"
                }
                Slider {
                    id: s4
                    stepSize: 0.1
                    value: 0
                    enabled: true
                    wheelEnabled: true
                    onValueChanged: {
                        i4.text = parseInt(value * 5)
                    }
                }
                Label{
                    width: parent.width / 6
                    id : i4
                }
            }

            Row{
                    width: parent.width
                    Label{
                        id: stat_label_0
                        text: "armor"
                    }

                    TextField {
                        id : stat_text_0
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_1
                        text: "armorperlevel"
                    }

                    TextField {
                        id : stat_text_1
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_2
                        text: "attackdamage"
                    }

                    TextField {
                        id : stat_text_2
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_3
                        text: "attackdamageperlevel"
                    }

                    TextField {
                        id : stat_text_3
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_4
                        text: "attackrange"
                    }

                    TextField {
                        id : stat_text_4
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_5
                        text: "attackspeedoffset"
                    }

                    TextField {
                        id : stat_text_5
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_6
                        text: "attackspeedperlevel"
                    }

                    TextField {
                        id : stat_text_6
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_7
                        text: "crit"
                    }

                    TextField {
                        id : stat_text_7
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_8
                        text: "critperlevel"
                    }

                    TextField {
                        id : stat_text_8
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
        }

            Column{
            width: 308

            Row{
                    width: parent.width
                    Label{
                        id: stat_label_9
                        text: "hp"
                    }

                    TextField {
                        id : stat_text_9
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_10
                        text: "hpperlevel"
                    }

                    TextField {
                        id : stat_text_10
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_11
                        text: "hpregen"
                    }

                    TextField {
                        id : stat_text_11
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_12
                        text: "hpregenperlevel"
                    }

                    TextField {
                        id : stat_text_12
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_13
                        text: "movespeed"
                    }

                    TextField {
                        id : stat_text_13
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_14
                        text: "mp"
                    }

                    TextField {
                        id : stat_text_14
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_15
                        text: "mpperlevel"
                    }

                    TextField {
                        id : stat_text_15
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_16
                        text: "mpregen"
                    }

                    TextField {
                        id : stat_text_16
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_17
                        text: "mpregenperlevel"
                    }

                    TextField {
                        id : stat_text_17
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_18
                        text: "spellblock"
                    }

                    TextField {
                        id : stat_text_18
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
            Row{
                    width: parent.width
                    Label{
                        id: stat_label_19
                        text: "spellblockperlevel"
                    }

                    TextField {
                        id : stat_text_19
                        color: "black"
                        background: Rectangle { color: "white" }
                        width: parent.width
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "123"
                    }
             }
        }

        }

    }
  }
