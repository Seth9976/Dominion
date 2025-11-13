// 函数: _ZN15OpenGLInterface14RenderStateSetEi14MaterialAttriblR24ShaderDynamicStateHolder
// 地址: 0xf8ecd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0xffffffff)
    return 

int32_t x20_1 = arg2
uint32_t x8_1 = arg3.d
ShaderDynamicStateHolder* entry_x4

if (arg3.d - 0x53 u> 6)
    return GLGraphicsSetSpecialRenderState(x20_1, 1, 0, zx.q(x8_1), entry_x4) __tailcall

uint32_t var_40 = x8_1
int32_t var_38_1 = arg3.d - 0x53
ShaderDynamicStateHolder& var_28_1 = arg4
int64_t var_30_1 = AttribTagGetDefMap(*gMaterialAttribTable, x8_1)
int32_t var_3c_1 = x20_1
GLGraphicsSetGenericRenderState(&var_40, entry_x4)
