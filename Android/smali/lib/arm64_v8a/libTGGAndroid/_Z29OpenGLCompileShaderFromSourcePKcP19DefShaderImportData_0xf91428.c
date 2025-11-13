// 函数: _Z29OpenGLCompileShaderFromSourcePKcP19DefShaderImportData
// 地址: 0xf91428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XTrace("Compiling opengl memory shader")
char var_18
XString::XString(&var_18)
char var_28
XString::XString(&var_28)
int32_t x0_3 = XString::Length() + 1
*(arg2 + 0x30) = x0_3
int64_t x0_4 = XMalloc(x0_3)
*(arg2 + 0x38) = x0_4
memcpy(x0_4, XString::GetString(), zx.q(*(arg2 + 0x30)))
int32_t x0_8 = XString::Length() + 1
*(arg2 + 0x40) = x0_8
int64_t x0_9 = XMalloc(x0_8)
*(arg2 + 0x48) = x0_9
memcpy(x0_9, XString::GetString(), zx.q(*(arg2 + 0x40)))
XString::~XString()
XString::~XString()
return 1
