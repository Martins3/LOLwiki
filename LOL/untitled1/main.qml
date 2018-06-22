import QtQuick 2.10
import QtQuick.Window 2.10
import QtCharts 2.0
import QtQuick 2.9
import QtCharts 2.2
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.2
import QtQuick.Window 2.3
import QtQuick.Controls.Styles 1.4

Window {

    Window {
        id: editWindow

      x :mainWindow.x + mainWindow.width
       y: mainWindow.y
        maximumWidth: 308
        maximumHeight: 560
        minimumWidth: 308
        minimumHeight:  560

        Column{
                anchors.fill: parent
                Label{
                    width: parent.width
                    text: "Name"
                    color: "#e5b91b"
                    font.bold: true
                    horizontalAlignment : Text.Center
                }

                TextField {
                    color: "black"
                    background: Rectangle { color: "white" }
                    width: parent.width
                    placeholderText: qsTr("Enter name")
                    wrapMode: Text.WrapAnywhere
                }

                 Text {
                    color: "#dd5533"
                    width: parent.width
                    font.pointSize: 16
                    textFormat: Text.RichText
                    wrapMode: Text.WrapAnywhere
                    text: "<b>Hellaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao</b> <i>World!</i>"
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
                    spacing: 5
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
                        id: control
                        text: qsTr("<b>Delete<b>")

                        width: parent.width / 3
                        onClicked: {
//                            editWindow.close()
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


                    Button{
                        text: "Cancel"
                        id: edit_cancel
                        width: parent.width / 3
                        onClicked: editWindow.close()
                    }
                }

        }
    }
    id:mainWindow
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    ChartView {
    id: chart
    title: "Top-5 car brand shares in Finland"
    width: 400
    height: 400
    antialiasing: true

    PieSeries {
        id: pieSeries


    PieSlice {
      label: "Volkswagen";
      value: 10
      onClicked:{

                        editWindow.show()
      }
    }
                    ListModel{
                        id: gridModel
                    }

                    Component.onCompleted: {
                        for(var i = 0; i < 10; i ++){
                            gridModel.append({
                                 name : "hh" + i,
                                 value : 1
                            })
                        }

                        for(var i = 0; i < 10; i ++){
                            pieSeries.append(gridModel.get(i).name, gridModel.get(i).value);
                        }
                    }


    }
}
//    ChartView {
//    visible: false
//    title: "Bar series"
//    antialiasing: true

//    BarSeries {
//        id: mySeries
//        axisX: BarCategoryAxis { categories: ["2007", "2008", "2009", "2010", "2011", "2012" ] }
//        BarSet { label: "Bob"; values: [2, 2, 3, 4, 5, 6] }
//        BarSet { label: "Susan"; values: [5, 1, 2, 4, 1, 7] }
//        BarSet { label: "James"; values: [3, 5, 8, 13, 5, 8] }
//    }
//}

}
