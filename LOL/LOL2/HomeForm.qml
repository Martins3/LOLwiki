import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Window 2.0
import QtQuick.Controls 1.5
import QtCharts 2.2
import show.summoner 1.0
import QtQuick 2.10
import QtQuick.Window 2.10
import QtCharts 2.0
import QtQuick 2.9
import QtCharts 2.2
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.2
import QtQuick.Window 2.3
import QtQuick.Controls.Styles 1.4


Page {
    title: qsTr("Match")
    id:root
    Image{
        opacity: 0.9
        anchors.fill: parent
        smooth: true
        sourceSize.width: 1215
        sourceSize.height: 717
        source: "champion/Ahri_7.jpg"
    }

    Summoner{
        id:summoner
    }

    function refrshe(){
//        listView.model = summoner.matchListModel
    }




        Window {
            id: red_damage_receive
            width: 800
            height: 480
            x :root.x + root.width
            y: root.y

            Row{
                anchors.fill: parent
                ChartView {
                    width: parent.width / 2
                    height: parent.height
                    title: "Damage"

                    PieSeries {
                        PieSlice {
                            id: damage_0
                            color: "#4286f4"
                        }

                        PieSlice {
                              id: damage_1
                              color: "#f4ee41"
                        }

                        PieSlice {
                              id: damage_2
                              color: "#a8124e"
                        }

                        PieSlice {
                              id: damage_3
                              color: "#e57010"
                        }

                        PieSlice {
                              id: damage_4
                              color: "#62f252"
                        }
                    }
                }

                ChartView {
                    title: "Receive"
                    width: parent.width / 2
                    height: parent.height

                    PieSeries {
                        id: pieSeries
                        PieSlice {
                            id: receive_0
                            color: "#4286f4"
                        }

                        PieSlice {
                              id: receive_1
                              color: "#f4ee41"
                        }

                        PieSlice {
                              id: receive_2
                              color: "#a8124e"
                        }

                        PieSlice {
                              id: receive_3
                              color: "#e57010"
                        }

                        PieSlice {
                              id: receive_4
                              color: "#62f252"
                        }
                    }
            }

            }
        }

        Window {
            id: kda
            width: 640
            height: 480
            x :root.x + root.width
            y: root.y


            ChartView {
                title: "KDA"
                anchors.fill: parent
                antialiasing: true

                BarSeries {
                    id: mySeries
                    axisX:
                        BarCategoryAxis {
                            id : categorie
                        }

                    BarSet {
                        color: "black"
                        id: kill
                        label: "Kill";
                    }
                    BarSet {
                        color: "red"
                        id : death
                        label: "Death";
                    }
                    BarSet {
                        color: "green"
                        id : assit
                        label: "Assit";
                        values: [40]
                    }
                }
            }
        }

  Menu {
    id: chooseMenu
    width: 100
    MenuItem {
        Text {
            text: qsTr("<b>红方伤害<b>")
        }
        onTriggered: {
            console.log(tableView.model[tableView.currentRow].match_id)
            var i = tableView.model[tableView.currentRow].match_id
            var a = summoner.getMatchData(i)
            console.log("a piece of match data ", a)

            red_damage_receive.show();
            damage_0.value = a.damage_0
            damage_1.value = a.damage_1
            damage_2.value = a.damage_2
            damage_3.value = a.damage_3
            damage_4.value = a.damage_4

            receive_0.value = a.received_damage_0
            receive_1.value = a.received_damage_1
            receive_2.value = a.received_damage_2
            receive_3.value = a.received_damage_3
            receive_4.value = a.received_damage_4

            damage_0.label= a.champion_key_0
            damage_1.label= a.champion_key_1
            damage_2.label= a.champion_key_2
            damage_3.label= a.champion_key_3
            damage_4.label= a.champion_key_4

            receive_0.label= a.champion_key_0
            receive_1.label= a.champion_key_1
            receive_2.label= a.champion_key_2
            receive_3.label= a.champion_key_3
            receive_4.label= a.champion_key_4
        }
    }

    MenuItem {
        Text {
            text: qsTr("<b>蓝方伤害<b>")
        }
        onTriggered: {
            var i = tableView.model[tableView.currentRow].match_id
            var a = summoner.getMatchData(i)

            red_damage_receive.show();
            damage_0.value = a.damage_5
            damage_1.value = a.damage_6
            damage_2.value = a.damage_7
            damage_3.value = a.damage_8
            damage_4.value = a.damage_9

            receive_0.value = a.received_damage_5
            receive_1.value = a.received_damage_6
            receive_2.value = a.received_damage_7
            receive_3.value = a.received_damage_8
            receive_4.value = a.received_damage_9

            damage_0.label= a.champion_key_5
            damage_1.label= a.champion_key_6
            damage_2.label= a.champion_key_7
            damage_3.label= a.champion_key_8
            damage_4.label= a.champion_key_9

            receive_0.label= a.champion_key_5
            receive_1.label= a.champion_key_6
            receive_2.label= a.champion_key_7
            receive_3.label= a.champion_key_8
            receive_4.label= a.champion_key_9
        }
    }


    MenuItem {
        Text {
            text: qsTr("<b>红方KDA<b>")

        }
        onTriggered: {
          console.log(tableView.model[tableView.currentRow].match_id)
          var i = tableView.model[tableView.currentRow].match_id
          var a = summoner.getMatchData(i)
          categorie.categories = [a.champion_key_0,
                                  a.champion_key_1,
                                  a.champion_key_2,
                                  a.champion_key_3,
                                  a.champion_key_4]
          kill.values = [a.kill_num_0,
                         a.kill_num_1,
                         a.kill_num_2,
                         a.kill_num_3,
                         a.kill_num_4]

          death.values = [a.death_num_0,
                         a.death_num_1,
                         a.death_num_2,
                         a.death_num_3,
                         a.death_num_4]

          assit.values = [a.assit_num_0,
                         a.assit_num_1,
                         a.assit_num_2,
                         a.assit_num_3,
                         a.assit_num_4]
          kda.show();
            kda.show();
        }
    }

    MenuItem {
        Text {
            text: qsTr("<b>蓝方KDA<b>")
        }

        onTriggered: {
          console.log(tableView.model[tableView.currentRow].match_id)
          var i = tableView.model[tableView.currentRow].match_id
          var a = summoner.getMatchData(i)
          categorie.categories = [a.champion_key_5,
                                  a.champion_key_5,
                                  a.champion_key_6,
                                  a.champion_key_8,
                                  a.champion_key_9]
          kill.values = [a.kill_num_5,
                         a.kill_num_6,
                         a.kill_num_7,
                         a.kill_num_8,
                         a.kill_num_9]

          death.values = [a.death_num_5,
                         a.death_num_6,
                         a.death_num_7,
                         a.death_num_8,
                         a.death_num_9]

          assit.values = [a.assit_num_5,
                         a.assit_num_6,
                         a.assit_num_7,
                         a.assit_num_8,
                         a.assit_num_9]
          kda.show();
        }
    }
}


    TableView {
        opacity: 0.9
        headerVisible: false
        anchors.fill: parent
        model: summoner.matchListModel
        id: tableView
        clip: true

        onClicked: {
            chooseMenu.popup()
        }
            TableViewColumn {
                id: col_a
                role: "match_id"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Text {
                        color: "#dd5533"
                        width: parent.width
                        font.pointSize: 16
                        textFormat: Text.RichText
                        wrapMode: Text.WrapAnywhere
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        text: model.modelData.match_id
                    }
                }
            }

            TableViewColumn {
                id: col_b
                role: "red_win"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Text {
                        color: model.modelData.red_win ? "#434440" : "#b71924"
                        width: parent.width
                        font.pointSize: 16
                        textFormat: Text.RichText
                        wrapMode: Text.WrapAnywhere
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        text: model.modelData.red_win ? "<b>失败<b>" : "<b>成功<b>"
                    }
                }
            }
                TableViewColumn {
                id: col_0
                role: "champion_key_1"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_0
                    }
                }
            }
                TableViewColumn {
                id: col_1
                role: "champion_key_1"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_1
                    }
                }
            }
                TableViewColumn {
                id: col_2
                role: "champion_key_2"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_2
                    }
                }
            }
                TableViewColumn {
                id: col_3
                role: "champion_key_3"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_3
                    }
                }
            }
                TableViewColumn {
                id: col_4
                role: "champion_key_4"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_4
                    }
                }
            }
                TableViewColumn {
                id: col_5
                role: "champion_key_5"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_5
                    }
                }
            }
                TableViewColumn {
                id: col_6
                role: "champion_key_6"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_6
                    }
                }
            }
                TableViewColumn {
                id: col_7
                role: "champion_key_7"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_7
                    }
                }
            }
                TableViewColumn {
                id: col_8
                role: "champion_key_8"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_8
                    }
                }
            }
                TableViewColumn {
                id: col_9
                role: "champion_key_9"
                width: root.width / 12
                delegate:
                    Rectangle {
                    Image {
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        cache : true
                        asynchronous: true
                        source: model.modelData.champion_key_9
                    }
                }
            }


        rowDelegate:  Rectangle {
            height: root.height / 12
        }

        Component.onCompleted: {
            console.log(model)
        }
   }
}
