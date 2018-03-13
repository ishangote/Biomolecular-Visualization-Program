#pragma once


#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include "GL/glew.h"
#include <GL/glut.h>
#endif

#include "camera.h"
#include "Shader.h"

class SkyBox {
public:
	SkyBox(void);
	~SkyBox(void);
	int loadSkybox(char ** texFileName);
	void displaySkybox(Camera cam);
	GLuint getTexHandle(void);

private:
	GLuint texHandle;  // this is the texture handle
	GLuint shaderProg;	// shader for drawing the skybox
	Shader s;			// shader class object
	GLuint vboCube;		// consider removing to a static global in the cpp file
	GLuint iboCube;		// consider removing to a static global in the cpp file
	GLuint texCube;		// consider removing to a static global in the cpp file

	int createCube(void);

public:
	int init(void);
	int loadColourTexture(void);
};
