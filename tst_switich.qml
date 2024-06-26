import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "SwitchTests"

    Item {
        id: testGame
        width: 300
        height: 300

        // Include the main QML file for the game
        Loader {
            id: gameLoader
            source: "qrc:/Main.qml"
        }
    }

    function test_switchViews() {
        // Wait for the game to load
        waitForSignal(gameLoader, "loaded")

        // Find the view switch buttons
        var switchToLoginButton = testGame.children[0].findChild("switchToLoginButton")
        var switchToRegisterButton = testGame.children[0].findChild("switchToRegisterButton")
        verify(switchToLoginButton !== null, "Switch to login button should be found")
        verify(switchToRegisterButton !== null, "Switch to register button should be found")

        // Switch to the login view
        QTest.mouseClick(switchToLoginButton, Qt.LeftButton)
        var loginView = testGame.children[0].findChild("loginView")
        verify(loginView !== null && loginView.visible, "Login view should be visible")

        // Switch to the register view
        QTest.mouseClick(switchToRegisterButton, Qt.LeftButton)
        var registerView = testGame.children[0].findChild("registerView")
        verify(registerView !== null && registerView.visible, "Register view should be visible")
    }
}
