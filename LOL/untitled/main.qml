import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick 2.9
import QtCharts 2.2
import QtQuick.Dialogs 1.3
import QtQuick.Window 2.3
import QtQuick.Controls.Styles 1.4
import QtQuick.Controls 2.2

Window {
    id:mainWindow
    visible: true
    width: 308
    height: 560
    title: qsTr("Hello World")
    property bool showInfo : false


    Row{
        clip: false

        Column{
            width: 308
            Button{
                text: "click"
                onClicked: {
                    if(!showInfo){
                        mainWindow.width = mainWindow.width * 2
                    }else{
                        mainWindow.width = mainWindow.width / 2
                    }
                    showInfo = !showInfo
                }
            }

            Button{
                text: "click"
                onClicked: {
                    if(!showInfo){
                        mainWindow.width = mainWindow.width * 2
                    }else{
                        mainWindow.width = mainWindow.width / 2
                    }
                    showInfo = !showInfo
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
                    stepSize: 0.2
                    value: 0.2
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
                    text: "Attck"
                }
                Slider {
                    id: s2
                    stepSize: 0.2
                    value: 0.2
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
                    text: "Attck"
                }
                Slider {
                    id: s3
                    stepSize: 0.2
                    value: 0.2
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
                    text: "Attck"
                }
                Slider {
                    id: s4
                    stepSize: 0.2
                    value: 0.2
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
                Label{
                    width: parent.width / 6
                    id : l5
                    text: "Attck"
                }
                Slider {
                    id: s5
                    stepSize: 0.2
                    value: 0.2
                    enabled: true
                    wheelEnabled: true
                    onValueChanged: {
                        i1.text = parseInt(value * 5)
                    }
                }
                Label{
                    width: parent.width / 6
                    id : i5
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

    Component.onDestruction: {
       console.log(s1.value)
    }
}
