import turtle

# Setup
t = turtle.Turtle()
t.speed(10)        # Fast drawing
t.color("cyan")    # Star color
turtle.bgcolor("black")  # Background color

# Draw diamond star pattern
for i in range(40):       # 36 diamonds to form a circular pattern
    for j in range(6):
        t.forward(130)
        t.right(40)
        t.forward(150)
        t.right(60)
        t.forward(150)
    t.right(10)  # Turn a bit for next diamond

t.hideturtle()
turtle.done()
