// 函数: _Z20GameSpecific_GetRankR8GameSave9PlayerWhobRiS2_
// 地址: 0xb23c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
ActiveGame()
int64_t (* x8_1)()

if (x21 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(x21, 0x4d48)

int32_t x20 = *(x8_1 + 0x20)
*arg4 = *(x8_1 + 0x24)
*arg5 = *(x8_1 + 0x28)

if ((arg3.d & 1) == 0)
    if ((PlayerResigned(arg1, zx.q(x21)) & 1) != 0)
        x20 = -1
    else if (*(arg1 + 0x11b4) s>= 1)
        int64_t i = 0
        int64_t (* x22_1)() = gDomClient + 0x68
        
        do
            if ((PlayerResigned(arg1, zx.q(i.d)) & 1) != 0)
                x20 -= *x22_1 s< x20 ? 1 : 0
            
            i += 1
            x22_1 += 0x4d48
        while (i s< sx.q(*(arg1 + 0x11b4)))

return zx.q(x20)
