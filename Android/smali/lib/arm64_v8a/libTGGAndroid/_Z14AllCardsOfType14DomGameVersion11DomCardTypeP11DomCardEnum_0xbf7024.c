// 函数: _Z14AllCardsOfType14DomGameVersion11DomCardTypeP11DomCardEnum
// 地址: 0xbf7024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
void* var_48
int32_t x0_1 = DomGetExpansions(&var_48)
int32_t x22

if (x0_1 s< 1)
    x22 = 0
else
    int64_t i = 0
    x22 = 0
    
    do
        void* var_50
        int32_t j_2 = DomExpGet(zx.q(*(var_48 + i * 0x28)), &var_50)
        
        if (j_2 s>= 1)
            uint64_t j_1 = zx.q(j_2)
            int64_t* x9_3 = var_50 + 0xc8
            uint64_t j
            
            do
                int64_t x10_1 = *x9_3
                
                if ((x10_1 & 0x10000) == 0 && *(x9_3 - 0xc4) s<= x21 && (x10_1 & arg2) != 0
                        && x9_3[-0x18].d s> x21)
                    *(arg3 + (sx.q(x22) << 2)) = x9_3[-1].d
                    x22 += 1
                
                j = j_1
                j_1 -= 1
                x9_3 = &x9_3[0xf0]
            while (j != 1)
        
        i += 1
    while (i != zx.q(x0_1))

return zx.q(x22)
