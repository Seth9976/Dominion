// 函数: _Z28RollKingdom_ColoniesSheltersv
// 地址: 0xbfb8c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(gPregameContext + 0x28)
int32_t x10 = *(x9 + 0xbfc)
void* x8
bool cond:0
int32_t x9_1

if (x10 == 0)
    int32_t x0_2 = RandomInt(*(gPregameContext + 0x10), *(gPregameContext + 4))
    int32_t var_14
    int64_t x0 = DomCardExp(zx.q(*(*(gPregameContext + 0x20) + (sx.q(x0_2) << 2))), &var_14)
    x8 = *(gPregameContext + 0x20)
    *(x8 + 0x31c) = (x0.d == 6 ? 1 : 0).b
    x9_1 = *(*(gPregameContext + 0x28) + 0xc00)
    
    if (x9_1 != 0)
        cond:0 = x9_1 == 1
    else
    label_bfb940:
        int32_t x0_5 = RandomInt(*(gPregameContext + 0x10), *(gPregameContext + 4))
        int32_t var_18
        x0 = DomCardExp(zx.q(*(*(gPregameContext + 0x20) + (sx.q(x0_5) << 2))), &var_18)
        x8 = *(gPregameContext + 0x20)
        cond:0 = x0.d == 9
else
    x8 = *(gPregameContext + 0x20)
    *(x8 + 0x31c) = (x10 == 1 ? 1 : 0).b
    x9_1 = *(x9 + 0xc00)
    
    if (x9_1 == 0)
        goto label_bfb940
    
    cond:0 = x9_1 == 1
*(x8 + 0x31d) = (cond:0 ? 1 : 0).b
