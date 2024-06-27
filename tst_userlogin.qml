import QtQuick 2.15
import QtTest 1.2

TestCase {
    name: "UserLogin"

    function test_login() {
        var component = Qt.createComponent("UserLogin.qml");
        var item = component.createObject(root);
        compare(item.username, "", "Username should be empty by default");
        item.username = "testuser";
        compare(item.username, "testuser", "Username should be set to testuser");
    }
}
