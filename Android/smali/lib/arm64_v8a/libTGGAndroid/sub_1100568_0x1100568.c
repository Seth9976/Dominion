// 函数: sub_1100568
// 地址: 0x1100568
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t x9 = *(arg2 + 8)
*(arg2 + 0x4d) = 1

if (x9 != arg4)
    return 

int64_t x9_1 = *(arg2 + 0x20)
*(arg2 + 0x4c) = 1

if (x9_1 == 0)
    *(arg2 + 0x20) = arg3
    *(arg2 + 0x30) = arg5
    *(arg2 + 0x3c) = 1
    
    if (arg5 == 1)
        int32_t x8_3 = *(arg2 + 0x48)
        
        if (x8_3 == 1)
            *(arg2 + 0x4e) = x8_3.b
else
    if (x9_1 != arg3)
        int32_t x8_1 = *(arg2 + 0x3c)
        *(arg2 + 0x4e) = 1
        *(arg2 + 0x3c) = x8_1 + 1
        return 
    
    int32_t x8_4 = *(arg2 + 0x30)
    
    if (x8_4 == 2)
        x8_4 = arg5
        *(arg2 + 0x30) = arg5
    
    if (*(arg2 + 0x48) == 1 && x8_4 == 1)
        *(arg2 + 0x4e) = x8_4.b
