#pragma once
#include <gl_core_4_4.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "Application.h"

#include <Gizmos.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>



class GraphicsEngine
{
public:
	GraphicsEngine();
	~GraphicsEngine();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

	float m_timer;
};

