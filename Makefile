all:
	g++ -I/opt/local/include/SOIL -L/usr/local/include/ -w main.cpp camera.cpp Shader.cpp SkyBox.cpp pugixml.cpp -o mol.out -lSOIL -lglut -lGLU -lGL -lGLEW && ./mol.out

