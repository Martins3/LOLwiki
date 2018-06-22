import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Window 2.0
import QtQuick.Controls 1.5
import QtCharts 2.2
import show.summoner 1.0

Page {
    title: qsTr("Home")
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
        console.log("home refresh ffffffffff itself")
    }

    Row{
        anchors.top: parent.top
        width: parent.width
        height: parent.height / 2

        // user asset
        Column{
            width: parent.width / 3
            height: parent.height
            Text {
                horizontalAlignment: Text.AlignHCenter
                id:assetTitle
                width: parent.width
                font.pixelSize: 15
                text: qsTr("Mostly used champion")
            }

            GridView {
                id: asset
                width: parent.width
                height: parent.height - assetTitle.height
                cellWidth: width / 5
                anchors.centerIn: parent.Center
                model: assetModel
                delegate:
                     Column {
                        Image {
                            source: image;
                            width: 30
                            height: 30
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                        Text {
                            width: parent.width
                            wrapMode: Text.WrapAnywhere
                            text: name;
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                }


                Component.onCompleted: {
                    for(var i = 0; i < 10 ; i++){
                        assetModel.append({
                            name : "very very very long name" + i,
                            image : "champion/Ashe.png"
                        })
                    }
                }

                ListModel{
                    id:assetModel
                }
            }
        }

        Column{
            width: parent.width / 3
            height: parent.height
            Text {
                id:winRateTitle
                text: qsTr("Statistic Data")
            }

            Row{
                Text {
                    text: qsTr("Trible Kill!")
                }
                Text {
                    text: qsTr("None hhhhh!")
                }
            }

        }

        Column{
            width: parent.width / 3
            height: parent.height
            Text {
                text: qsTr("Glogry")
            }

            Row{
                Text {
                    text: qsTr("Trible Kill!")
                }
                Text {
                    text: qsTr("None hhhhh!")
                }
            }
        }
   }


        Window {
            id: showWindow
            width: 100
            height: 100
            Text {
                id: show_text
                text: qsTr("text")
            }
        }


    TableView {
        opacity: 0.9
        headerVisible: false
        anchors.bottom: parent.bottom
        width: parent.width
        height: parent.height / 2
        model: summoner.matchListModel
        id: tableView
        clip: true

        onDoubleClicked : {
            console.log(tableView.currentRow)
            show_text.text = summoner.matchData.champion_key_0
            showWindow.show()
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
