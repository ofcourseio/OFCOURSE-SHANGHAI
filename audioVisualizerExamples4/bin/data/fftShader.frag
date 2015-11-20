#version 120

uniform sampler2DRect fftTex;
uniform vec2 windowSize;
uniform float scale;


void main( void )
{
    //this code tells us which pixel of our fft texture we want to use. gl_TexCoord[0].s is the x value of the texture, so this code maps the fft values to the x values of the pixels.
    vec2 texCoord;
    texCoord.s = gl_TexCoord[0].s;
    texCoord.t = 0;
    
//    This code maps the fft to the distance of each pixel from the center.
//    vec2 center = windowSize * 0.5;
//    float dist = distance(center, gl_FragCoord.xy);
//    vec2 texCoord;
//    texCoord.s = dist;
//    texCoord.t = 0;
    
    
//    This code maps the fft to the distance of each pixel from the center and uses pow to make the inner rings bigger than the outer rings.
//    vec2 center = windowSize * 0.5;
//    float dist = distance(center, gl_FragCoord.xy);
//    vec2 texCoord;
//    texCoord.s = pow(dist,2) / 1024.0;
//    texCoord.t = 0;
    
    //this code gets the red value of the pixel we chose above
    float fftBand = texture2DRect( fftTex, texCoord.st ).r * scale;
    
    //now use fftBand to choose your colors :)
    float r = fftBand;
    float g = fftBand;
    float b = fftBand;
    
	gl_FragColor = vec4(r, g, b, 1.0);
}