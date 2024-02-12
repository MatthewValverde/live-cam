#include <fx/FxRidersPirate.h>


FxRidersPirate::FxRidersPirate()
{
	auto textureShader = shaderManagerWrapper.LoadFromFile("./assets/shaders/vertex/simpleVertexShader.txt", "./assets/shaders/fragment/phongFragmentShader.txt");

	auto model = make_shared<OpenGL3DModel>();
	model->modelPath = "./assets/fx/riders/pirate/pirate_v1.obj";
	model->texturesPaths.fill( {"./assets/fx/riders/pirate/tex/pirate_low_polySurface_Color.png" });
	model->name = "pirate";

	auto renderParams1 = make_shared<ObjectRenderParams>();
	renderParams1->lightPos = { 0.2f, 0.4f, 1, 0 };
	renderParams1->cameraPos = { 0, 0, 0, 1 };
	renderParams1->ambientLight = { 0.6f, 0.6f, 0.6f };
	renderParams1->diffuseLight = { 0.6f, 0.6f, 0.6f };
	renderParams1->specularLight = { 0.5f, 0.5f, 0.5f };
	renderParams1->specularPower = 15;
	renderParams1->shader = textureShader;

	auto renderParams2 = make_shared<ObjectRenderParams>();
	renderParams2->lightPos = { 0.2f, -0.2f, 1, 0 };
	renderParams2->cameraPos = { 0, 0, 0, 1 };
	renderParams2->ambientLight = { 0.6f, 0.6f, 0.6f };
	renderParams2->diffuseLight = { 0.2f, 0.2f, 0.2f };
	renderParams2->specularLight = { 0.5f, 0.5f, 0.5f };
	renderParams2->specularPower = 15;
	renderParams2->shader = textureShader;

	model->objectRenderParams.fill( { renderParams1, renderParams1, renderParams2 } );

	//model->transformVersion = TransformVersion::V1;

	models.push_back(model);
}

FxRidersPirate::~FxRidersPirate()
{

}