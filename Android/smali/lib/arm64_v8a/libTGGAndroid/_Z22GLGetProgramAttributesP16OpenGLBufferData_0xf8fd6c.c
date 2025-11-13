// 函数: _Z22GLGetProgramAttributesP16OpenGLBufferData
// 地址: 0xf8fd6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg1
*(arg1 + 0x108) = glGetAttribLocation(zx.q(x20), "Position")
*(arg1 + 0x10c) = glGetAttribLocation(zx.q(x20), "Normal")
*(arg1 + 0x110) = glGetAttribLocation(zx.q(x20), "Tangent")
*(arg1 + 0x114) = glGetAttribLocation(zx.q(x20), "Binormal")
*(arg1 + 0x118) = glGetAttribLocation(zx.q(x20), "Color0")
*(arg1 + 0x11c) = glGetAttribLocation(zx.q(x20), "Color1")
*(arg1 + 0x120) = glGetAttribLocation(zx.q(x20), "TexCoord0")
*(arg1 + 0x124) = glGetAttribLocation(zx.q(x20), "TexCoord1")
*(arg1 + 0x128) = glGetAttribLocation(zx.q(x20), "BlendIndices")
*(arg1 + 0x12c) = glGetAttribLocation(zx.q(x20), "BlendWeights")
*(arg1 + 0x130) = glGetAttribLocation(zx.q(x20), "gWorld")
int64_t result = glGetAttribLocation(zx.q(x20), "gWorldViewProj")
*(arg1 + 0x134) = result.d
return result
