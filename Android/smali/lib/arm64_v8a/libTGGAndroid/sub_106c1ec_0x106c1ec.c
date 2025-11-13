// 函数: sub_106c1ec
// 地址: 0x106c1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_18 = 0
int32_t result

while (true)
    result = AInputQueue_getEvent()
    
    if ((result & 0x80000000) != 0)
        break
    
    if (AInputQueue_preDispatchEvent(*(arg1 + 0x40), var_18) == 0)
        int64_t x8_1 = *(arg1 + 0x10)
        uint64_t x2_1
        
        if (x8_1 != 0)
            x2_1 = zx.q(x8_1(arg1, var_18))
        else
            x2_1 = 0
        
        AInputQueue_finishEvent(*(arg1 + 0x40), var_18, x2_1)

return result
