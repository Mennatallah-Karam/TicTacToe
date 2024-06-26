import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "UserLoginTests"

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

    function test_clickGrid() {
        // Wait for the game to load
        waitForSignal(gameLoader, "loaded")

        // Find the grid cell component
        var cell = testGame.children[0].findChild("gridCell_0_0")
        verify(cell !== null, "Cell should be found")

        // Simulate a mouse click on the cell
        QTest.mouseClick(cell, Qt.LeftButton)

        // Check if the cell is marked with "X"
        compare(cell.text, "X", "Cell should be marked with X after click")
    }

    function test_login() {
        // Wait for the game to load
        waitForSignal(gameLoader, "loaded")

        // Find the login components
        var usernameField = testGame.children[0].findChild("usernameField")
        var passwordField = testGame.children[0].findChild("passwordField")
        var loginButton = testGame.children[0].findChild("loginButton")

        // Verify the components are found
        verify(usernameField !== null, "Username field should be found")
        verify(passwordField !== null, "Password field should be found")
        verify(loginButton !== null, "Login button should be found")

        // Set username and password
        usernameField.text = "testUser"
        passwordField.text = "testPassword"

        // Simulate a mouse click on the login button
        QTest.mouseClick(loginButton, Qt.LeftButton)

        // Find the welcome label
        var welcomeLabel = testGame.children[0].findChild("welcomeLabel")
        verify(welcomeLabel !== null, "Welcome label should be found")

        // Check the welcome message
        compare(welcomeLabel.text, "Welcome, testUser!", "User should be welcomed after login")
    }
}
