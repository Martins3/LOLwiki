import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Window 2.0
import QtQuick.Controls 1.0

Page{
    visible: true
    id: loginWindow
    title: qsTr("Login")
    signal login(string username, string password, bool isLogin)

    Image{
        anchors.fill: parent
        smooth: true
        sourceSize.width: 1215
        sourceSize.height: 717
        source: "champion/Ahri_7.jpg"
     }

Column {
    anchors.centerIn: parent
    objectName: "loginView"
    id: loginView
    property bool logining
    property bool  signUping


        Row {
            TextField {
                objectName: "usernameInput"
                id: usernameInput
                placeholderText: "UserName"
                inputMethodHints: Qt.ImhEmailCharactersOnly
                KeyNavigation.tab: passwordInput
                KeyNavigation.down: passwordInput
            }
        }

        Row {
            TextField {
                objectName: "passwordInput"
                id: passwordInput
                echoMode: TextInput.Password
                KeyNavigation.tab: usernameInput
            }
        }

        Row {
            spacing: 4
            CheckBox {
                objectName: "savePass"
                id: savePass
                checked: false
                onClicked: {
                    if(checked){
                        console.log('Remember you')
                    }else{
                        console.log('Forget you')
                    }
                }
            }
            Label{
                anchors.verticalCenter: parent.verticalCenter
                text: "Remember Me"
                color: "black"
            }
        }

        Row{
        Item {
            width: loginConfirm.width
            height: loginConfirm.height
            Button {
                width: passwordInput.width / 2
                objectName: "loginConfirm"
                id: loginConfirm
                text: "Login"
                visible: !loginView.logining
                onClicked: {
                    if (usernameInput.text.length >= 1 && passwordInput.text.length >= 1) {
                        loginView.logining = true
                        loginWindow.login(usernameInput.text, passwordInput.text, true)
                    }
                }
            }
            BusyIndicator{
                visible: true
                running: loginView.logining
            }
        }

        Item {
            width: signUpConfirm.width
            height: signUpConfirm.height
            Button {
                width: passwordInput.width / 2
                objectName: "signUpConfirm"
                id: signUpConfirm
                text: "Signup"
                visible: !loginView.logining
                onClicked: {
                    if (usernameInput.text.length >= 0 && passwordInput.text.length >= 0) {
                        loginView.logining = true
                        loginWindow.login(usernameInput.text, passwordInput.text, false)
                    }
                }
            }
            BusyIndicator{
                visible: true
                running: loginView.signUping
            }
        }
     }
}
}
