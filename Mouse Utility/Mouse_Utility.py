
#Imports
import mouse

while True:
	try:
		print("\rX: " + str(mouse.get_position()[0]) + ", Y: " + str(mouse.get_position()[1]), end="")
	except KeyboardInterrupt:
		print("\nBye!\n")
		break