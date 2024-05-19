import QtQuick
import QtQuick.Controls

Rectangle {
    width: 600
    height: 600
    visible: true
    color: "#003285"

    Button {
        id: button
        text: "Frogurt Button"
        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            color: button.down ? "#d6d6d6" : "#f6f6f6"
            border.color: "#26282a"
            border.width: 1
            radius: 4
        }
    }

    Item {
        width: 320
        height: 480

        Rectangle {
            color: "#272822"
            width: 320
            height: 480
        }

        // TODO - Define a template where can pass these colors as arguments
        // Orange-y one
        Rectangle {
            x: 160
            y: 20
            width: 200
            height: 100
            radius: 12
            gradient: Gradient {
                GradientStop { position: 0.0; color: '#FF7F3E' }
                GradientStop { position: 1.0; color: '#FFDA78' }
            }
            border { width: 2; color: "white" }
        }

        // Greenish one
        Rectangle {
            x: 160
            y: 160
            width: 200
            height: 100
            radius: 12
            gradient: Gradient {
                GradientStop { position: 0.0; color: '#40A578' }
                GradientStop { position: 1.0; color: '#9DDE8B' }
            }
            border { width: 2; color: "white" }
        }
    }
}
