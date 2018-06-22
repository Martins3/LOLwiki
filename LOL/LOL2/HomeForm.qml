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





    TableView {
        opacity: 0.9
        headerVisible: false
        anchors.bottom: parent.bottom
        width: parent.width
        height: parent.height / 2
        model: summoner.matchListModel
        id: tableView
        clip: true


        Component.onCompleted: {
            console.log("nffffffffffffffffff")
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

        onDoubleClicked : {
            console.log(currentRow)
//            console.log(summoner.matchListModel.get(tableView.currentRow).champion_key_0)
//            show_text.text = summoner.matchListModel.get(tableView.currentRow).champion_key_0
//            showWindow.show()
        }


        TableViewColumn {
            role: "champion_key_1"
            width: root.width/12
            delegate:imageDelegate
        }


//        Component {
//            id: textDelegate
//            Item {
//                id: f_item
//                height: cell_txt.height
//                Text {
//                    id: cell_txt
//                    width: parent.width
//                    text: model.modelData.champion_key_0
//                }
//            }
//        }

        Component {
            id: imageDelegate
            Rectangle {
                height: image.height
                Image {
                    id: image
                    height: 30
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                    fillMode: Image.PreserveAspectFit
                    cache : true;
                    asynchronous: true;
                    source: model.modelData.champion_key_1
                }
            }
         }
   }
}
