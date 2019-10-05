#version 330 core
in vec4 vertexColor;
in vec2 TexCoord;

uniform sampler2D TextBufferA;
uniform sampler2D TextBufferB;

out vec4 FragColor;
void main() {							
	//FragColor = vertexColor;
	FragColor = mix(texture(TextBufferA, TexCoord), texture(TextBufferB, TexCoord), 0.2);
}