#include "Entity.h"
#include <memory>
#include "Mesh.h"

Entity::Entity(std::shared_ptr<Mesh> mesh, std::shared_ptr<Transform> transform) {
	this->transform = transform;
	this->objMesh = mesh;
}
Entity::~Entity() {

}

std::shared_ptr<Mesh> Entity::GetMesh() {
	return objMesh;
}
std::shared_ptr<Transform> Entity::GetTransform() {
	return transform;
}

void Entity::Draw() {
	objMesh->Draw();
}