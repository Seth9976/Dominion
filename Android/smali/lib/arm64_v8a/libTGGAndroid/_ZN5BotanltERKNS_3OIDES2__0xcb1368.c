// 函数: _ZN5BotanltERKNS_3OIDES2_
// 地址: 0xcb1368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg2 + 8)
int64_t x9 = *(arg2 + 0x10)

if (x8 != x9)
    int32_t* x11_1 = *(arg1 + 8)
    
    while (true)
        if (*(arg1 + 0x10) != x11_1)
            int32_t x12_1 = *x11_1
            int32_t x13_1 = *x8
            
            if (x12_1 u>= x13_1)
                if (x13_1 u< x12_1)
                    break
                
                x8 = &x8[1]
                x11_1 = &x11_1[1]
                
                if (x9 == x8)
                    break
                
                continue
        
        return 1

return 0
