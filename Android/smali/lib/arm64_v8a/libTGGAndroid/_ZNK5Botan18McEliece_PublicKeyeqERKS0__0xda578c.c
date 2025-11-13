// 函数: _ZNK5Botan18McEliece_PublicKeyeqERKS0_
// 地址: 0xda578c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 8)
int64_t x8_2 = *(arg1 + 0x10)
void* entry_x1
char* x10 = *(entry_x1 + 8)

if (x8_2 - x9 == *(entry_x1 + 0x10) - x10)
    if (x9 != x8_2)
        do
            if (zx.d(*x9) != zx.d(*x10))
                return 0
            
            x9 = &x9[1]
            x10 = &x10[1]
        while (x8_2 != x9)
    
    if (*(arg1 + 0x20) == *(entry_x1 + 0x20))
        return zx.q(*(arg1 + 0x28) == *(entry_x1 + 0x28) ? 1 : 0)

return 0
