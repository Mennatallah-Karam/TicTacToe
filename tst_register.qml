import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "RegistrationTests"

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

    function test_registration() {
        // Wait for the game to load
        waitForSignal(gameLoader, "loaded")

        // Find the registration components
        var usernameField = testGame.children[0].findChild("regUsernameField")
        var passwordField = testGame.children[0].findChild("regPasswordField")
        var emailField = testGame.children[0].findChild("regEmailField")
        var registerButton = testGame.children[0].findChild("registerButton")

        // Verify the components are found
        verify(usernameField !== null, "Username field should be found")
        verify(passwordField !== null, "Password field should be found")
        verify(emailField !== null, "Email field should be found")
        verify(registerButton !== null, "Register button should be found")

        // Set registration details
        usernameField.text = "newUser"
        passwordField.text = "newPassword"
        emailField.text = "newUser@example.com"

        // Simulate a mouse click on the register button
        QTest.mouseClick(registerButton, Qt.LeftButton)

        // Find the success label
        var successLabel = testGame.children[0].findChild("regSuccessLabel")
        verify(successLabel !== null, "Registration success label should be found")

        // Check the success message
        compare(successLabel.text, "Registration successful!", "User should see a success message after registration")
    }
}
