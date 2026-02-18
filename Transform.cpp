#include "Transform.h"
#include "DirectXMath.h"

Transform::Transform() {

	position = DirectX::XMFLOAT3(1, 1, 1);
	rotation = DirectX::XMFLOAT3(1, 1, 1);
	scale = DirectX::XMFLOAT3(1, 1, 1);

	DirectX::XMStoreFloat4x4(&world, DirectX::XMMatrixIdentity());
	DirectX::XMStoreFloat4x4(&worldInverseTranspose, DirectX::XMMatrixIdentity());
}
Transform::~Transform() {

}

// Setters
void Transform::SetPosition(float x, float y, float z) {
	position = DirectX::XMFLOAT3(x, y, z);
}
void Transform::SetPosition(DirectX::XMFLOAT3 position) {
	this->position = position;
}
void Transform::SetRotation(float pitch, float yaw, float roll) {
	rotation = DirectX::XMFLOAT3(pitch, yaw, roll);
}
void Transform::SetRotation(DirectX::XMFLOAT3 rotation) {
	this->rotation = rotation;
}

void Transform::SetScale(float x, float y, float z) {
	scale = DirectX::XMFLOAT3(x, y, z);
}
void Transform::SetScale(DirectX::XMFLOAT3 scale) {
	this->scale = scale;
}


// Getters
DirectX::XMFLOAT3 Transform::GetPosition() {
	return position;
}
DirectX::XMFLOAT3 Transform::GetPitchYawRoll() {
	// XMFLOAT4 GetRotation() for quaternion
	return rotation;
}
DirectX::XMFLOAT3 Transform::GetScale() {
	return scale;
}
DirectX::XMFLOAT4X4 Transform::GetWorldMatrix() {
	return world;
}
DirectX::XMFLOAT4X4 Transform::GetWorldInverseTransposeMatrix() {
	return worldInverseTranspose;
}

// Transformers
void Transform::MoveAbsolute(float x, float y, float z){
	position = DirectX::XMFLOAT3(position.x + x, position.y + y, position.z + z);
}
void Transform::MoveAbsolute(DirectX::XMFLOAT3 offset) {
	position = DirectX::XMFLOAT3(position.x + offset.x, position.y + offset.y, position.z + offset.z);
}
void Transform::Rotate(float pitch, float yaw, float roll) {
	rotation = DirectX::XMFLOAT3(rotation.x + pitch, rotation.y + yaw, rotation.z + roll);
}
void Transform::Rotate(DirectX::XMFLOAT3 rotation) {
	this->rotation = DirectX::XMFLOAT3(this->rotation.x + rotation.x, this->rotation.y + rotation.y, this->rotation.z + rotation.z);
}
void Transform::Scale(float x, float y, float z) {
	scale = DirectX::XMFLOAT3(scale.x + x, scale.y + y, scale.z + z);
}
void Transform::Scale(DirectX::XMFLOAT3 scale) {
	this->scale = DirectX::XMFLOAT3(this->scale.x + scale.x, this->scale.y + scale.y, this->scale.z + scale.z);
}