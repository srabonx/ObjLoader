
#include "ObjLoader.h"
#include <iostream>
#include <cstring>
#include <string>

int main()
{
    Model model;
    ObjLoader loader;
    model = loader.LoadFromFile("C:/Users/letsd/OneDrive/Documents/Untitled.obj");

    std::cout << "Vertices: " << std::endl;
    for(auto& v: model.Vertices)
    {
        std::cout<<v.Position[0]<< " "<< v.Position[1] << " " << v.Position[2]<<std::endl;
    }

    std::cout << "TexCoord: " << std::endl;
    for (auto& v : model.UVs)
    {
        std::cout << v.UV[0] << " " << v.UV[1]<< std::endl;
    }

    std::cout << "Normals: " << std::endl;
    for (auto& v : model.VertexNormals)
    {
        std::cout << v.Normal[0] << " " << v.Normal[1] << " " << v.Normal[2] << std::endl;
    }

    std::cout << "VertexIndices: " << std::endl;
    for (auto& v : model.VertexIndices)
    {
        std::cout << v << std::endl;
    }
}
