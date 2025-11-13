// 函数: _Z17IncludesExpansionPK19DomExpansionEditioni12DomExpansion
// 地址: 0xb411b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

int64_t x8 = 0
uint64_t x9 = zx.q(arg2)
int32_t x10 = 1

do
    int64_t x12_1 = sx.q(*(arg1 + (x8 << 2)))
    
    if (x12_1.d u>= 0x19)
        pthread_kill(pthread_self(), 6)
        uint64_t x0_3
        int64_t x1
        int32_t x2
        DomExpansionEdition* x3
        int32_t x4
        x0_3, x1, x2, x3, x4 = XNoReturn()
        return GetNumSetPages(x0_3, x1, x2, x3, x4) __tailcall
    
    if (*(&data_801cdc + (x12_1 << 2)) == arg3)
        break
    
    x8 += 1
    x10 = x8 u< x9 ? 1 : 0
while (x9 != x8)

return zx.q(x10) & 1
