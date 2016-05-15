#pragma once
#include "Model.h"
class Belt :
	public Model
{
private:
	const GLuint walls = 48;
	GLfloat centerX = 1.0f;
	GLfloat centerZ = 2.0f;
	GLfloat centerY = -1.512f;
	const GLfloat width=10.0f;
	const GLfloat height=0.2f;
	const GLfloat depth=2.0f;
	GLfloat red = 0.3f;
	GLfloat green = 0.5f;
	GLfloat blue = 0.5f;
	glm::vec3 position;
	bool on;
	GLfloat speed = 0.01f;
protected:
	void generateVertices();
public:
	bool isOn(){ return on; }
	GLfloat getSpeed(){ return speed; }
	void setPosition(glm::vec3& pos){ position = pos; }
	glm::vec3& getPosition(){ return position; }
	void repaint();
	Belt(ShaderProgram* program);
	~Belt();
};
