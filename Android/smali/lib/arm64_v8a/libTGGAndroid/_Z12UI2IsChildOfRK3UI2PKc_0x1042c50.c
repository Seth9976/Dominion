// 函数: _Z12UI2IsChildOfRK3UI2PKc
// 地址: 0x1042c50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x17d0) == 0)
    return 0

void* __offset(UI2, 0x17d0) x22 = arg1 + 0x17d0
int32_t x0_2
void* x9_1

do
    x0_2 = strcasecmp(XString::operator char const*(), arg2)
    
    if (x0_2 == 0)
        break
    
    x9_1 = *x22
    x22 = x9_1 + 0x17d0
while (*(x9_1 + 0x17d0) != 0)
return zx.q(x0_2 == 0 ? 1 : 0)
