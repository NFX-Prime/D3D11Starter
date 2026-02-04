#pragma once



#include <d3d11.h>
#include <wrl/client.h> 

#include "Vertex.h"

class Mesh
{
public:
	Mesh(Vertex vertices[], int numVertices, unsigned int indices[], int numIndices);
	~Mesh();

	Microsoft::WRL::ComPtr<ID3D11Buffer> GetVertexBuffer();
	Microsoft::WRL::ComPtr<ID3D11Buffer> GetIndexBuffer();
	int GetIndexCount();
	int GetVertexCount();
	void Draw();


private:
	Microsoft::WRL::ComPtr<ID3D11Buffer> vertexBuffer;
	Microsoft::WRL::ComPtr<ID3D11Buffer> indexBuffer;

	int numIndices;
	int numVertices;
};
