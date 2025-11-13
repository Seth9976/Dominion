// 函数: _Z11DomZoomCardR6DomGfxb
// 地址: 0xae89fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x1d01c) == *(arg1 + 0x21d0))
    return 

DomGfx& x19_1 = arg1
int32_t x8_1 = *(GetClient() + 0x5068)
void* x8_3

if (x8_1 == 1)
    int64_t var_28
    arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x8_2 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_2.d s< arg1.d)
        x8_3 = var_28 + x8_2 * 0xb0
    else
        x8_3 = nullptr

if (x8_1 == 1 && x8_3 != 0 && (arg2.d & 1) == 0 && *(x8_3 + 0x18) != 0x11)
    return 

bool var_2c

if ((CalcCardFaceup(x19_1, &var_2c).d & 1) != 0)
    DomZoom(x19_1)
    return 

int32_t x8_5 = *(x19_1 + 0xa4)

if (x8_5 == 2)
    DomZoom(x19_1)
    return 

int32_t x9_3 = *(gDomClient + 0x38)
int32_t x9_4

x9_4 = x9_3 == 0xffffffff ? 0 : x9_3

if (*(x19_1 + 0xa0) == x9_4 && x8_5 != 0x3eb && x8_5 != 0x3ed)
    DomZoom(x19_1)
