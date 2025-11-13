// 函数: _Z16ReplaceDeckCardsR7DomGame9PlayerWho11DomCardEnumS2_i
// 地址: 0xbc0fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x1528))

if (x8.d s< 1)
    return 

int32_t x19_1 = arg4
DomGame& x22_1 = arg1
int32_t x20_1 = arg2
int64_t x21_1 = 0
void* __offset(DomGame, 0x1a68) x25_1 = arg1 + 0x1a68

do
    if (*(x25_1 + 0xc) == 0x3eb && *(x25_1 + 8) == arg3 && *(x25_1 + 0x2c) == x20_1)
        *(x25_1 + 8) = x19_1
        int32_t x23_1 = *(x22_1 + 0xd50)
        int32_t x8_5 = (x19_1 + (x23_1 << 0x10)) s% 0x3e5
        int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_5) << 3))
        
        if (x9_4 != 0)
            while (*x9_4 != x19_1 || x9_4[1] != x23_1)
                x9_4 = *(x9_4 + 0x10)
                
                if (x9_4 == 0)
                    goto label_bc108c
            
            arg1 = *(x9_4 + 8)
        else
        label_bc108c:
            DomDefGetSlow(zx.q(x19_1), zx.q(x23_1))
            int32_t* x0_1 = malloc(0x18)
            int64_t x8_6 = sx.q(x8_5) << 3
            int64_t x9_5 = *(&data_1838a20 + x8_6)
            *x0_1 = x19_1
            x0_1[1] = x23_1
            *(&data_1838a20 + x8_6) = x0_1
            *(x0_1 + 0x10) = x9_5
            arg1 = DomDefGetSlow(zx.q(x19_1), zx.q(x23_1))
            *(x0_1 + 8) = arg1
        
        *x25_1 = arg1
        int32_t x8_7 = *(x22_1 + 0x150c)
        
        if (x8_7 - 3 u>= 4)
            int64_t var_58_1 = 0
            int32_t var_60_1 = 0
            int32_t var_68_1 = 0
            int32_t var_70_1 = 0
            DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x2d, zx.q(x20_1), zx.q(x21_1.d), zx.q(x19_1), 
                0, 0, 0)
        
        break
    
    x21_1 += 1
    x25_1 += 0x68
while (x8 != x21_1)
