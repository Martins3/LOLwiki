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
    property url defPath : "file:///home/martin/X-Brain/DbLab/LOL/LOL2/champion/Ahri.png"
                    FileDialog {

                        id: editFileDialog
                        title: "Please choose a file"
                        sidebarVisible: false
                        selectFolder: false
                        folder: defPath
                        nameFilters: [ "Image files (*.jpg *.png)"]
                        onAccepted: {
                            console.log("chose " + editFileDialog.fileUrls, editFileDialog.folder)
                            Qt.quit();
                        }
                        onRejected: {
                            Qt.quit()
                            console.log("Canceled")
                        }

                        Component.onCompleted: visible = true
                    }
}
