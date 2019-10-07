#pragma once

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

#include <iostream>
#include <vector>
#include <string>

#include "Shader.h"
#include "Mesh.h"


using namespace std;

class Model
{
public:
	Model(string path);
	void Draw(Shader* shader);

private:
	vector<Mesh> meshes;
	string directory;
	void loadModel(string path);
	Mesh provessMesh(aiMesh* mesh, const aiScene* scene);
	void processNode(aiNode* node, const aiScene* scene);
	vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type, string typeName);
};

