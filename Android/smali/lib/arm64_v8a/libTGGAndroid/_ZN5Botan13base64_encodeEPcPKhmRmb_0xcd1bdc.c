// 函数: _ZN5Botan13base64_encodeEPcPKhmRmb
// 地址: 0xcd1bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i = arg3
uint64_t x25 = 0
*arg4 = 0
int64_t result

if (arg3 u< 3)
    result = 0
    
    if (i != 0)
    label_cd1dfc:
        
        if ((arg5.d & 1) != 0)
            char* x0_8 = operator new(3)
            memset(&x0_8[i], 0, 3 - i)
            memcpy(x0_8, &arg2[x25], i)
            uint32_t x15_4 = zx.d(*x0_8)
            uint32_t x14_9 = zx.d(x0_8[1])
            uint32_t x8_1 = zx.d(x0_8[2])
            uint32_t x10_1 = x15_4 u>> 2
            int32_t x8_2 = x8_1 & 0x3f
            int32_t x11_2 = (0xffffffcf & x14_9 u>> 4) | (3 & x15_4) << 4
            int32_t x9_2 = (0xffffffc3 & x8_1 u>> 6) | (0xf & x14_9) << 2
            char x16_11 = ((x10_1.b - 4) ^ (x10_1.b + 0x47) ^ (((x10_1.b + 0x41) ^ (x10_1.b + 0x47))
                & (((0x33 - x10_1) | (x10_1 - 0x1a)) u>> 7).b))
                & (((0x3d - x10_1) | (x10_1 - 0x34)) u>> 7).b
            char x17_16 = ((x11_2.b - 4) ^ (x11_2.b + 0x47) ^ (((x11_2.b + 0x41) ^ (x11_2.b + 0x47))
                & (((0x33 - x11_2) | (x11_2 - 0x1a)) u>> 7).b))
                & (((0x3d - x11_2) | (x11_2 - 0x34)) u>> 7).b
            char x12_11 = ((x9_2.b - 4) ^ (x9_2.b + 0x47) ^
                (((x9_2.b + 0x41) ^ (x9_2.b + 0x47)) & (((0x33 - x9_2) | (x9_2 - 0x1a)) u>> 7).b))
                & (((0x3d - x9_2) | (x9_2 - 0x34)) u>> 7).b
            int32_t x10_4 = ((x10_1 ^ 0x3e) - 1) s>> 7
            char x15_9 = ((x8_2.b - 4) ^ (x8_2.b + 0x47) ^
                (((x8_2.b + 0x41) ^ (x8_2.b + 0x47)) & (((0x33 - x8_2) | (x8_2 - 0x1a)) u>> 7).b))
                & (((0x3d - x8_2) | (x8_2 - 0x34)) u>> 7).b
            int32_t x1_14 = ((x11_2 ^ 0x3e) - 1) s>> 7
            int32_t x0_16 = ((x8_2 ^ 0x3e) - 1) s>> 7
            int32_t x14_15 = ((x9_2 ^ 0x3e) - 1) s>> 7
            void* x16_12 = &arg1[result]
            char x10_7
            
            if (x10_1 == 0x3f)
                x10_7 = 0x2f
            else
                x10_7 = (x10_4.b & 0x2b) | ((x16_11 ^ (x10_1.b - 4)) & (not.d(x10_4)).b)
            
            *x16_12 = x10_7
            char x10_8
            
            if (x11_2 == 0x3f)
                x10_8 = 0x2f
            else
                x10_8 = (x1_14.b & 0x2b) | ((x17_16 ^ (x11_2.b - 4)) & (not.d(x1_14)).b)
            
            char x14_16 = (i.d << 3).b
            char x9_3
            
            if (x9_2 == 0x3f)
                x9_3 = 0x2f
            else
                x9_3 = (x14_15.b & 0x2b) | ((x12_11 ^ (x9_2.b - 4)) & (not.d(x14_15)).b)
            
            char x8_3
            
            if (x8_2 == 0x3f)
                x8_3 = 0x2f
            else
                x8_3 = (x0_16.b & 0x2b) | ((x15_9 ^ (x8_2.b - 4)) & (not.d(x0_16)).b)
            
            *(x16_12 + 3) = x8_3
            char x8_4
            
            if (i u> 1)
                x8_4 = x14_16 - 0x12
            else
                x8_4 = -7
            
            uint64_t x8_9 = zx.q(zx.d(x8_4 - x14_16 + 0x17) u/ 6)
            *(x16_12 + 2) = x9_3
            *(x16_12 + 1) = x10_8
            memset(&arg1[(result | 3) - x8_9], 0x3d, x8_9 + 1)
            *arg4 += i
            operator delete(x0_8)
            return result + 4
else
    result = 0
    
    do
        void* x12_1 = &arg2[x25]
        uint32_t x17_1 = zx.d(*x12_1)
        uint32_t x13_1 = zx.d(*(x12_1 + 2))
        uint32_t x16_1 = zx.d(*(x12_1 + 1))
        i -= 3
        uint32_t x14_1 = x17_1 u>> 2
        int32_t x13_2 = x13_1 & 0x3f
        int32_t x12_3 = (0xffffffc3 & x13_1 u>> 6) | (0xf & x16_1) << 2
        int32_t x15_2 = (0xffffffcf & x16_1 u>> 4) | (3 & x17_1) << 4
        char x0_4 = ((x14_1.b - 4) ^ (x14_1.b + 0x47) ^
            (((x14_1.b + 0x41) ^ (x14_1.b + 0x47)) & (((0x33 - x14_1) | (x14_1 - 0x1a)) u>> 7).b))
            & (((0x3d - x14_1) | (x14_1 - 0x34)) u>> 7).b
        char x0_5 = ((x15_2.b - 4) ^ (x15_2.b + 0x47) ^
            (((x15_2.b + 0x41) ^ (x15_2.b + 0x47)) & (((0x33 - x15_2) | (x15_2 - 0x1a)) u>> 7).b))
            & (((0x3d - x15_2) | (x15_2 - 0x34)) u>> 7).b
        char x17_6 = ((x13_2.b - 4) ^ (x13_2.b + 0x47) ^
            (((x13_2.b + 0x41) ^ (x13_2.b + 0x47)) & (((0x33 - x13_2) | (x13_2 - 0x1a)) u>> 7).b))
            & (((0x3d - x13_2) | (x13_2 - 0x34)) u>> 7).b
        char x2_6 = ((x12_3.b - 4) ^ (x12_3.b + 0x47) ^
            (((x12_3.b + 0x41) ^ (x12_3.b + 0x47)) & (((0x33 - x12_3) | (x12_3 - 0x1a)) u>> 7).b))
            & (((0x3d - x12_3) | (x12_3 - 0x34)) u>> 7).b
        int32_t x14_4 = ((x14_1 ^ 0x3e) - 1) s>> 7
        int32_t x1_5 = ((x15_2 ^ 0x3e) - 1) s>> 7
        int32_t x6_8 = ((x12_3 ^ 0x3e) - 1) s>> 7
        void* x5_6 = &arg1[result]
        int32_t x3_7 = ((x13_2 ^ 0x3e) - 1) s>> 7
        char x14_7
        
        if (x14_1 == 0x3f)
            x14_7 = 0x2f
        else
            x14_7 = (x14_4.b & 0x2b) | ((x0_4 ^ (x14_1.b - 4)) & (not.d(x14_4)).b)
        
        *x5_6 = x14_7
        char x14_8
        
        if (x15_2 == 0x3f)
            x14_8 = 0x2f
        else
            x14_8 = (x1_5.b & 0x2b) | ((x0_5 ^ (x15_2.b - 4)) & (not.d(x1_5)).b)
        
        char x12_4
        
        if (x12_3 == 0x3f)
            x12_4 = 0x2f
        else
            x12_4 = (x6_8.b & 0x2b) | ((x2_6 ^ (x12_3.b - 4)) & (not.d(x6_8)).b)
        
        *(x5_6 + 2) = x12_4
        char x12_5
        
        if (x13_2 == 0x3f)
            x12_5 = 0x2f
        else
            x12_5 = (x3_7.b & 0x2b) | ((x17_6 ^ (x13_2.b - 4)) & (not.d(x3_7)).b)
        
        *(x5_6 + 1) = x14_8
        *(x5_6 + 3) = x12_5
        result += 4
        x25 = *arg4 + 3
        *arg4 = x25
    while (i u> 2)
    
    if (i != 0)
        goto label_cd1dfc

return result
