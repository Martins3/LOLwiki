import QtQuick 2.9
import QtQuick.Controls 2.2
import show.summoner 1.0

ApplicationWindow {
    id: window
    visible: true
    width: 550
    height: 358
    title: qsTr("最后的轻语")

    property bool loginOk: false
    Summoner{
        id: lolHandler
    }

    SummonerSpell{
        width: parent.width
        height: parent.height
        id: summoner
    }

    Login{
        width: parent.width
        height: parent.height
        id: login
    }

    HomeForm{
        width: parent.width
        height: parent.height
        id: homeForm
    }

    Champion{
        width: parent.width
        height: parent.height
        id: champion
    }

    Equipment{
        width: parent.width
        height: parent.height
        id: equipment
    }

    Rune{
        width: parent.width
        height: parent.height
        id: rune
    }


    header: ToolBar {
        contentHeight: toolButton.implicitHeight

        ToolButton {
            id: toolButton
            text: (stackView.depth > 1 && !loginOk) || (stackView.depth > 2 && loginOk)? "\u25C0" : "\u2630"
            font.pixelSize: Qt.application.font.pixelSize * 1.6
            onClicked: {
                if ((stackView.depth > 1 && !loginOk) || (stackView.depth > 2 && loginOk)) {
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
        width: window.width * 0.33
        height: window.height

        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("Summoner Spell")
                width: parent.width
                onClicked: {
                    stackView.push(summoner)
                    drawer.close()
                }
            }

            ItemDelegate {
                text: qsTr("Champion")
                width: parent.width
                onClicked: {
                    stackView.push(champion)
                    drawer.close()
                }
            }

            ItemDelegate {
                text: qsTr("Rune")
                width: parent.width
                onClicked: {
                    stackView.push(rune)
                    drawer.close()
                }
            }

            ItemDelegate {
                text: qsTr("Item")
                width: parent.width
                onClicked: {
                    stackView.push(equipment)
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
            lolHandler.userLogin(username, password, isLogin);
        }
    }

    Connections{
        target: lolHandler
        onListModelChanged:{
            loginOk = true
            stackView.push(homeForm)
            homeForm.refrshe()
        }
    }

}
