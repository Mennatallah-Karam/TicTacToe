import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "ResetTests"

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

    function test_resetGame() {
        // Wait for the game to load
        waitForSignal(gameLoader, "loaded")

        // Find the reset button
        var resetButton = testGame.children[0].findChild("resetButton")
        verify(resetButton !== null, "Reset button should be found")

        // Simulate a mouse click on the reset button
        QTest.mouseClick(resetButton, Qt.LeftButton)

        // Verify that the game has been reset
        var cell = testGame.children[0].findChild("gridCell_0_0")
        compare(cell.text, "", "Cell should be empty after reset")
    }
}
