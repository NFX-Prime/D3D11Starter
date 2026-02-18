#pragma once
#include <DirectXMath.h>

using namespace DirectX;

struct VertexShaderData {
	XMFLOAT4 colorTint;
	XMFLOAT4X4 world;
};