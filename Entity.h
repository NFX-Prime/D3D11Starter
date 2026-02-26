#pragma once
#include <memory>
#include "Mesh.h"
#include "Transform.h"
class Entity
{
public:
	std::shared_ptr<Mesh> objMesh;
	std::shared_ptr<Transform> transform;

	Entity(std::shared_ptr<Mesh> mesh, std::shared_ptr<Transform> transform);
	~Entity();

	std::shared_ptr<Mesh> GetMesh();
	std::shared_ptr<Transform> GetTransform();
	
	void Draw();



};