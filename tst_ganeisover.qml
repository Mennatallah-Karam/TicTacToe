import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "GaneIsOverTests"

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

    function test_gameOver() {
        // Wait for the game to load
        waitForSignal(gameLoader, "loaded")

        // Simulate a game over condition by filling the grid
        for (var i = 0; i < 3; i++) {
            for (var j = 0; j < 3; j++) {
                var cell = testGame.children[0].findChild("gridCell_" + i + "_" + j)
                QTest.mouseClick(cell, Qt.LeftButton)
            }
        }

        // Check the game over message
        var gameOverLabel = testGame.children[0].findChild("gameOverLabel")
        verify(gameOverLabel !== null, "Game Over label should be found")
        compare(gameOverLabel.text, "Game Over!", "User should see a game over message when the game ends")
    }
}
