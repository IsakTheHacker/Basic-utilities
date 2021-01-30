
#Imports
import mouse

while True:
	print("\rX: " + str(mouse.get_position()[0]) + ", Y: " + str(mouse.get_position()[1]), end="")