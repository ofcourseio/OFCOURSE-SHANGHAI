#version 120

uniform float width;
uniform float height;
uniform float time;
uniform vec2 mouse;

void main( void )
{
    float x = gl_FragCoord.x;
    float y = gl_FragCoord.y;
    
    vec2 pos;
    pos.x = x;
    pos.y = y;
    
    vec2 center;
    center.x = width / 2.0;
    center.y = height / 2.0;
    
    float dist = distance(center, pos);
    float size = distance(center, mouse);
    
    float red = 0.0;//1.0 - dist / (width / 8);//x / width;
    float green = 0.0;
    float blue = 0.0;
   

    blue = sin(dist/50+time);

    
    
    gl_FragColor = vec4(red, green, blue, 1.0);
}