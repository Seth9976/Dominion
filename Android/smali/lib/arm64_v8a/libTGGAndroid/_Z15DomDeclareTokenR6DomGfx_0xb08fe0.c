// 函数: _Z15DomDeclareTokenR6DomGfx
// 地址: 0xb08fe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomCurrentTransform(arg1)
Transform var_40
DomDeclareTokenInt(arg1, arg1 + 0x2148, &var_40, zx.q(GetTokenLayer(arg1)))
int32_t x8 = *(arg1 + 0x2c)

if (x8 != 3 && x8 != 6 && (x8 != 4 || *(arg1 + 0x1bc) != 0x3f1))
    UI2SetState(zx.q(*(arg1 + 0x2148)), &data_182c658, 0xffffffff, 0)

return UI2UpdateRoot(zx.q(*(arg1 + 0x2148)), false, *gSecondsPerUpdate)
