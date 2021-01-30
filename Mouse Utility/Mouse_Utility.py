
#Imports
import mouse
import keyboard

while True:
	try:
		print("\rX: " + str(mouse.get_position()[0]) + ", Y: " + str(mouse.get_position()[1]), end="")
	except KeyboardInterrupt:
		print("\nBye!\n")
		break

	mouse.click()
	if (keyboard.is_pressed("alt")):
		break