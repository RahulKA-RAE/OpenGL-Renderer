#pragma once
#include "GL/glew.h"
#include <iostream>
#include <string>
#include <fstream>

class Shader
{
public:
	//Constructor
	Shader();
	//Destructor
	~Shader();
	//Creates Shader from string
	void CreateShadersFromText(const char* vShaderCode, const char* fShaderCode);
	//Creates shaders from files
	void CreateShadersFromFiles(const char* vShaderPath, const char* fShaderPath);
	//Reads the shader file and returns cpp string
	std::string ReadFile(const char* FilePath);
	//Returns Uniform variable Model location ID
	GLuint GetUniformModel();
	//Returns uniform variable projection location ID
	GLuint GetUniformProjection();
	//Enables the shader
	void EnableShader();
	//Disables the shader
	void DisableShader();
	//Completely clears the shader
	void ClearShaders();

private:
	//Actually the program id to which the shaders are linked to
	GLuint ShaderId;
	//Uniform variable Model location ID
	GLuint  UniformModel;
	//Uniform variable projection location ID
	GLuint UniformProjection;
	//Adds the shader to the program
	GLuint AddShader(GLuint TheProgram, const char* ShaderCode, GLenum ShaderType);
	//Compiles the shader
	void CompileShaders(const char* vShaderCode, const char* fShaderCode);
};

