// 函数: _Z15CardTypesInGameR7DomGameP11DomCardEnum
// 地址: 0xb19730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t j_3

if (*(arg1 + 0x1528) s< 1)
    j_3 = 0
else
    int64_t i = 0
    j_3 = 0
    
    do
        void* x28_1 = arg1 + i * 0x68
        int32_t x22_1 = *(x28_1 + 0x1a70)
        
        if (x22_1 != 0)
            if (*(GetClient() + 0x5068) == 0)
                if ((IsLandscape(zx.q(x22_1), 0x18) & 1) == 0)
                label_b197e8:
                    
                    if ((*(DomDefGet(zx.q(*(x28_1 + 0x1a70)), zx.q(*(arg1 + 0xd50))) + 0xc8)
                            & 0x10000003000000) == 0)
                        int32_t x8_4 = *(x28_1 + 0x1a70)
                        uint64_t j_2
                        
                        if (j_3 s<= 0)
                            j_2 = sx.q(j_3)
                        else
                            j_2 = zx.q(j_3)
                            DomCardEnum* x10_1 = arg2
                            uint64_t j_1 = j_2
                            uint64_t j
                            
                            do
                                if (*x10_1 == x8_4)
                                    goto label_b1978c
                                
                                j = j_1
                                j_1 -= 1
                                x10_1 += 4
                            while (j != 1)
                        
                        j_3 += 1
                        *(arg2 + (j_2 << 2)) = x8_4
            else if ((IsLandscape(zx.q(x22_1), zx.q(*(ActiveGame() + 0x30))) & 1) == 0)
                goto label_b197e8
        
    label_b1978c:
        i += 1
    while (i s< sx.q(*(arg1 + 0x1528)))

return zx.q(j_3)
