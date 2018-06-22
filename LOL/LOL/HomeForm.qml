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
        console.log("home refresh itself")
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
        model: live_alertmodel

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

            Text {
                text: live_alertmodel.get(currentRow).image
            }

            Text {
                text: qsTr("text")
            }
        }


        onDoubleClicked : {
            console.log(currentRow)
            console.log(live_alertmodel.get(currentRow).image)
            showWindow.show()
        }

        TableViewColumn {
            role: "time"
            width: root.width/12
            delegate:textDelegate
        }

        TableViewColumn {
            role: "time"
            width: root.width/12
            delegate:textDelegate
        }

        TableViewColumn {
            role: "image"
            width: root.width/12
            delegate:imageDelegate
        }




        Component {
            id: textDelegate
            Item {
                id: f_item
                height: cell_txt.height
                Text {
                    id: cell_txt
                    width: parent.width
                    text: model.time
                }
            }
        }

        Component {
            id: imageDelegate
            Item {
                Image {
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                    fillMode: Image.PreserveAspectFit
                    height:20
                    cache : true;
                    asynchronous: true;
                    source: model.image
                }
            }
         }

        Component.onCompleted: {
                for(var i=0;i<10;i++){
                      live_alertmodel.append(
                          { time: "what !!! " + i + "!!!",
                            image: "./champion/Ashe.png"
                        })
                    }
                }

        ListModel {
            id: live_alertmodel
         }
   }
}
