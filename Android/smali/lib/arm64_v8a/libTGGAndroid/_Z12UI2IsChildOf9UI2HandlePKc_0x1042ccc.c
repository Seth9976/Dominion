// 函数: _Z12UI2IsChildOf9UI2HandlePKc
// 地址: 0x1042ccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_1 = *gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8)

if (*(x9_1 + 0x17d0) == 0)
    return 0

void* x22 = x9_1 + 0x17d0
int32_t x0_2
void* x9_2

do
    x0_2 = strcasecmp(XString::operator char const*(), arg2)
    
    if (x0_2 == 0)
        break
    
    x9_2 = *x22
    x22 = x9_2 + 0x17d0
while (*(x9_2 + 0x17d0) != 0)
return zx.q(x0_2 == 0 ? 1 : 0)
