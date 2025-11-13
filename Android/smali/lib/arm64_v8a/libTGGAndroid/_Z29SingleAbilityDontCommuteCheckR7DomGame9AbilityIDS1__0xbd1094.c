// 函数: _Z29SingleAbilityDontCommuteCheckR7DomGame9AbilityIDS1_
// 地址: 0xbd1094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = arg2 & 0xffffffff
int64_t x22 = arg3
int32_t x0 = AbilitySource(arg1, x24)
int64_t x23 = x22 & 0xffffffff
int32_t x0_2 = AbilitySource(arg1, x23)

if (x0 != x0_2)
    int32_t* x8_1
    
    if ((arg2 & 0x30) == 0)
        x8_1 = AbilityGetRegistered(arg1, x24) + 0x94
    else
        x8_1 = AbilityGetStatic(arg1, x24) + 0xb8
    
    int32_t x24_1 = *x8_1
    int32_t x8_3
    
    if ((x22 & 0x30) == 0)
        x8_3 = *(AbilityGetRegistered(arg1, x23) + 0x94)
        
        if (x0 == 0xc13 || x0_2 == 0xc13)
        label_bd1160:
            
            if (x0 == 0xc39 && x24_1 == 0x1a)
                return 1
            
            if (x0_2 == 0xc39 && x8_3 == 0x1a)
                return 1
    else
        x8_3 = *(AbilityGetStatic(arg1, x23) + 0xb8)
        
        if (x0 == 0xc13 || x0_2 == 0xc13)
            goto label_bd1160

return 0
