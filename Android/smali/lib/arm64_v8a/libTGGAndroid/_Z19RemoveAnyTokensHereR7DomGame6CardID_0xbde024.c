// 函数: _Z19RemoveAnyTokensHereR7DomGame6CardID
// 地址: 0xbde024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x19ac)

if (x8 s< 1)
    return 

int64_t i = 0
void* __offset(DomGame, 0x15f70) x22_1 = arg1 + 0x15f70

do
    if (*x22_1 == 0x474 && *(x22_1 + 4) == arg2)
        ModifyToken(arg1, zx.q(i.d), neg.d(*(x22_1 + 0xc)), 0, 0)
        x8 = *(arg1 + 0x19ac)
    
    i += 1
    x22_1 += 0x20
while (i s< sx.q(x8))
