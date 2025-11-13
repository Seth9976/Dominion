// 函数: _Z11DomZoomPileR6DomGfxb
// 地址: 0xae8ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) == 1)
    int64_t var_18
    int64_t result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    void* x8_2
    
    if (x8_1.d s< result.d)
        x8_2 = var_18 + x8_1 * 0xb0
    else
        x8_2 = nullptr
    
    if (x8_2 != 0 && (arg2.d & 1) == 0 && (*(x8_2 + 0x18) | 2) != 0x13)
        return result

int32_t x8_5 = *(arg1 + 0x30)

if (x8_5 s> 0xd3c)
    if (x8_5 != 0xd3d && x8_5 != 0x1301 && x8_5 != 0x1128)
        return DomZoom(arg1)
else if (x8_5 != 0x70d && x8_5 != 0x718 && x8_5 != 0xd30)
    return DomZoom(arg1)

return DomExpandPile(arg1, false)
