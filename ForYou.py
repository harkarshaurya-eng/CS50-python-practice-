import math
import time
import os

WIDTH = 100
HEIGHT = 45

TEXT = "__HerName__❤️"

ASCII = " .:-=+*#%@"

def clear():
    os.system("cls" if os.name == "nt" else "clear")

angle = 0

while True:
    buffer = [[" " for _ in range(WIDTH)] for _ in range(HEIGHT)]
    zbuffer = [[-999 for _ in range(WIDTH)] for _ in range(HEIGHT)]

    for theta in range(0, 628, 2):

        t = theta / 100

        # Heart equation(someone is getting lucky tonight)
        x2d = 16 * math.sin(t) ** 3
        y2d = (
            13 * math.cos(t)
            - 5 * math.cos(2 * t)
            - 2 * math.cos(3 * t)
            - math.cos(4 * t)
        )

        for depth in range(-12, 13):

            z = depth

            # Rotation(Uffff.......)
            xr = x2d * math.cos(angle) - z * math.sin(angle)
            zr = x2d * math.sin(angle) + z * math.cos(angle)

            yr = y2d

            #perspective
            distance = 70
            scale = distance / (zr + distance)

            xp = int(WIDTH / 2 + xr * scale * 2)
            yp = int(HEIGHT / 2 - yr * scale)

            if 0 <= xp < WIDTH and 0 <= yp < HEIGHT:

                if zr > zbuffer[yp][xp]:
                    zbuffer[yp][xp] = zr

                    brightness = int(scale * 10)
                    brightness = max(0, min(brightness, len(ASCII) - 1))

                    buffer[yp][xp] = ASCII[brightness]

    #name inside the heart 
    text_x = WIDTH // 2 - len(TEXT) // 2
    text_y = HEIGHT // 2

    for i, ch in enumerate(TEXT):
        if 0 <= text_x + i < WIDTH:
            buffer[text_y][text_x + i] = ch

    clear()

    for row in buffer:
        print("".join(row))

    angle += 0.05
    time.sleep(0.03)
