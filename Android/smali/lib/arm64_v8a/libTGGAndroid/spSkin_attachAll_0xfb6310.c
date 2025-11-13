// 函数: spSkin_attachAll
// 地址: 0xfb6310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int32_t* i = *(arg3 + 0x28); i != 0; i = *(i + 0x18))
    int64_t x26_1 = sx.q(*i)
    void* x20_1 = *(*(arg2 + 0x28) + (x26_1 << 3))
    
    if (*(x20_1 + 0x28) == *(i + 0x10))
        int64_t* j = *(arg1 + 0x30 + (zx.q(x26_1.d u% 0x64) << 3))
        
        if (j != 0)
            int64_t x21_1 = *(i + 8)
            
            do
                int32_t* x28_1 = *j
                
                if (*x28_1 == x26_1.d && strcmp(*(x28_1 + 8), x21_1).d == 0)
                    int64_t x1_1 = *(x28_1 + 0x10)
                    
                    if (x1_1 != 0)
                        spSlot_setAttachment(x20_1, x1_1)
                    
                    break
                
                j = j[1]
            while (j != 0)
