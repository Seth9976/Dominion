// 函数: _Z23AbilityCommutesWithSelfR7DomGame9AbilityIDS1_
// 地址: 0xbd0ccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = arg2 & 0x30
int64_t result = 0

if (x24 != 0x30)
    int64_t x23_1 = arg3 & 0x30
    
    if (x23_1 != 0x30)
        int64_t x22_1 = arg2 & 0xffffffff
        int32_t x0_1 = AbilitySource(arg1, x22_1)
        uint64_t x21_2 = zx.q(arg3.d)
        
        if (x0_1 != AbilitySource(arg1, x21_2))
            return 0
        
        if (x0_1 == 0x130b)
            DomGame& x0_6
            uint64_t x1_3
            int32_t x25_1
            
            if (x24 != 0)
                x25_1 = *(AbilityGetStatic(arg1, x22_1) + 0xb8)
                x0_6 = arg1
                x1_3 = x21_2
                
                if (x23_1 == 0)
                    goto label_bd0d8c
                
                goto label_bd0d60
            
            x25_1 = *(AbilityGetRegistered(arg1, x22_1) + 0x94)
            x0_6 = arg1
            x1_3 = x21_2
            
            if (x23_1 != 0)
            label_bd0d60:
                
                if (x25_1 == 0xe && *(AbilityGetStatic(x0_6, x1_3) + 0xb8) == 0xe)
                    return 1
            else
            label_bd0d8c:
                
                if (x25_1 == 0xe && *(AbilityGetRegistered(x0_6, x1_3) + 0x94) == 0xe)
                    return 1
        
        DomGame* x0_12
        uint64_t x1_5
        int32_t x22_2
        
        if (x24 != 0)
            x22_2 = *(AbilityGetStatic(arg1, x22_1) + 0xb8)
            x0_12 = arg1
            x1_5 = x21_2
            
            if (x23_1 == 0)
                goto label_bd0e40
            
            goto label_bd0dd8
        
        x22_2 = *(AbilityGetRegistered(arg1, x22_1) + 0x94)
        x0_12 = arg1
        x1_5 = x21_2
        
        if (x23_1 != 0)
        label_bd0dd8:
            
            if (x22_2 != *(AbilityGetStatic(x0_12, x1_5) + 0xb8))
                return 0
        else
        label_bd0e40:
            
            if (x22_2 != *(AbilityGetRegistered(x0_12, x1_5) + 0x94))
                return 0
        
        result = 2
        
        if (x0_1 s> 0x1009)
            int32_t x8_11
            
            if (x0_1 s> 0x1224)
                if ((x0_1 - 0x1302 u> 0xa || (1 << (x0_1 - 0x1302) & 0x601) == 0) && x0_1 != 0x1510)
                    x8_11 = 0x1225
                    goto label_bd0eec
            else if (x0_1 != 0x100a && x0_1 != 0x100e)
                x8_11 = 0x1121
            label_bd0eec:
                
                if (x0_1 != x8_11)
                    return 1
        else if (x0_1 s> 0xf16)
            uint64_t x8_12 = zx.q(x0_1 - 0xf17)
            
            if (x8_12.d u> 0x2d || (1 << x8_12 & 0x200800000081) == 0)
                return 1
        else if (x0_1 s> 0xd0c)
            uint64_t x8_16 = zx.q(x0_1 - 0xd0d)
            
            if (x8_16.d u> 0x22 || (1 << x8_16 & 0x400000201) == 0)
                return 1
        else if (x0_1 != 0x71f && x0_1 != 0xb08 && x0_1 != 0xc15)
            return 1

return result
