// 函数: _Z16GLSetRenderStateP11RenderStateiP24ShaderDynamicStateHolder
// 地址: 0xf8eac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

RenderState* x20_1 = arg1
uint64_t i_1 = zx.q(arg2)
uint64_t i

do
    if ((GLGraphicsSetSpecialRenderState(*(x20_1 + 4), *(x20_1 + 8), *(x20_1 + 0x18), zx.q(*x20_1), 
            arg3).d & 1) == 0)
        GLGraphicsSetGenericRenderState(x20_1, arg3)
    
    i = i_1
    i_1 -= 1
    x20_1 += 0x20
while (i != 1)
