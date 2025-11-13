// 函数: _Z25CalcPlayerInPlayTransform9UI2HandleR6DomLoc
// 地址: 0xaf6e14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1

if (*(arg2 + 8) == *(gDomClient + 0x205c4))
    return CalcPlayerInPlayTransformNewPlayer(zx.q(x21), arg2) __tailcall

int32_t x22 = *(arg2 + 0xc)
int32_t x0_3

if (*(arg2 + 0x40) == "tbl_global_play" && *(arg2 + 0x38) == x21 && *(arg2 + 0x48) == x22
        && *(arg2 + 0x50) == 0)
    x0_3 = UI2Exists(zx.q(*(arg2 + 0x70)))

uint64_t x0_4

if (*(arg2 + 0x40) != "tbl_global_play" || *(arg2 + 0x38) != x21 || *(arg2 + 0x48) != x22
        || *(arg2 + 0x50) != 0 || (x0_3 & 1) == 0)
    x0_4 = UI2GetHandle(zx.q(x21), "tbl_global_play", x22)
    *(arg2 + 0x70) = x0_4.d
    
    if (x0_4.d != 0)
        *(arg2 + 0x40) = "tbl_global_play"
        *(arg2 + 0x38) = x21
        *(arg2 + 0x48) = x22
        *(arg2 + 0x50) = 0
else
    x0_4 = zx.q(*(arg2 + 0x70))

return UI2GetTransform(x0_4) __tailcall
