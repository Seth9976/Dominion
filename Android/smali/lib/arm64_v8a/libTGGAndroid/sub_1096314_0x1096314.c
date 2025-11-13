// 函数: sub_1096314
// 地址: 0x1096314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = arg1[7]
int32_t x11

x11 = x9 s< 0xff ? x9.d : 0xff

if (arg1 == 0 || x11 == 0)
    return 

int64_t x8_1 = *arg1

if (x8_1 == 0)
    return 

int32_t x10_1 = *(arg1 + 0x174)
int64_t x11_1
int64_t i

if (x10_1 == 0)
    i = 0
    
    while (i s< sx.q(x11))
        int64_t x14_2 = i << 2
        i += 1
        
        if (zx.d(*(arg1[4] + x14_2)) != 0xff)
            break
    
    x11_1 = 0
    
    if (arg3 != 0)
        goto label_109643c
else if (x11 s< 1)
    i = 0
    x11_1 = -1
    
    if (arg3 != 0)
        goto label_109643c
else
    i = 0
    int32_t x17_1 = 0
    int32_t x13_1 = 0
    int64_t x14_1 = 0
    x11_1 = -1
    
    do
        if (x14_1 s> sx.q(arg4) && x17_1 s> 3)
            arg3 = 1
            
            if (i.d != 0xff)
                goto label_10963d0
            
            goto label_109642c
        
        uint64_t x17_3 = zx.q(*(arg1[4] + (i << 2)))
        x14_1 += x17_3
        
        if (x17_3.d != 0xff)
            x13_1 += 1
            x17_1 = x13_1
            x11_1 = *(arg1[5] + (i << 3))
        else
            x17_1 = 0
        
        i += 1
    while (i s< sx.q(x11))
    
    if (i.d == 0xff)
    label_109642c:
        i = 0xff
    label_109643c:
        __builtin_strncpy(&arg1[0xa], "OggS", 6)
        void* x0 = arg1[4]
        int64_t x21_1 = sx.q(i.d)
        uint32_t x10_2 = not.d(zx.d(*(x0 + 1)))
        char x10_3
        
        if (x10_1 == 0)
            x10_3 = 2 | (x10_2 & 1).b
        else
            x10_3 = x10_2.b & 1
        
        int64_t x9_1 = x9 - x21_1
        *(arg1 + 0x55) = x10_3
        
        if (x9 == x21_1 && arg1[0x2e].d != 0)
            *(arg1 + 0x55) = x10_3 | 4
        
        *(arg1 + 0x57) = (x11_1 u>> 8).b
        *(arg1 + 0x174) = 1
        *(arg1 + 0x59) = (x11_1 u>> 0x18).b
        arg1[0xb].b = (x11_1 u>> 0x10).b
        *(arg1 + 0x5b) = (x11_1 u>> 0x28).b
        int64_t x12_6 = arg1[0x2f]
        *(arg1 + 0x5a) = (x11_1 u>> 0x20).b
        *(arg1 + 0x5c) = (x11_1 u>> 0x30).b
        int64_t x10_8 = arg1[0x30]
        *(arg1 + 0x56) = (x11_1.d).b
        *(arg1 + 0x5d) = (x11_1 u>> 0x38).b
        *(arg1 + 0x5f) = (x12_6 u>> 8).b
        arg1[0xc].b = (x12_6 u>> 0x10).b
        *(arg1 + 0x5e) = (x12_6.d).b
        *(arg1 + 0x61) = (x12_6 u>> 0x18).b
        
        if (x10_8 == -1)
            x10_8 = 0
            arg1[0x30] = 0
        
        *(arg1 + 0x62) = (x10_8.d).b
        *(arg1 + 0x66) = 0
        arg1[0x30] = x10_8 + 1
        *(arg1 + 0x63) = (x10_8 u>> 8).b
        *(arg1 + 0x64) = (x10_8 u>> 0x10).b
        *(arg1 + 0x65) = (x10_8 u>> 0x18).b
        *(arg1 + 0x6a) = (x21_1.d).b
        uint64_t x22_1
        
        if (x21_1.d s< 1)
            x22_1 = 0
        else
            int32_t x10_10 = 0
            int64_t i_6 = x21_1 & 0xffffffff
            void* x12_8 = arg1 + 0x6b
            void* x14_5 = x0
            int64_t i_1
            
            do
                char x15_3 = (*x14_5).b
                x14_5 += 4
                i_1 = i_6
                i_6 -= 1
                *x12_8 = x15_3
                x12_8 += 1
                x10_10 += zx.d(x15_3)
            while (i_1 != 1)
            x22_1 = zx.q(x10_10)
        
        *arg2 = &arg1[0xa]
        *(arg1 + 0x16c) = x21_1.d + 0x1b
        arg2[1] = sx.q(x21_1.d + 0x1b)
        arg2[2] = x8_1 + arg1[3]
        arg2[3] = x22_1
        arg1[7] = x9_1
        memmove(x0, x0 + (x21_1 << 2), x9_1 << 2)
        int64_t x0_1 = arg1[5]
        memmove(x0_1, x0_1 + (x21_1 << 3), arg1[7] << 3)
        arg1[3] += x22_1
        
        if (arg2 != 0)
            *(*arg2 + 0x16) = 0
            *(*arg2 + 0x17) = 0
            *(*arg2 + 0x18) = 0
            *(*arg2 + 0x19) = 0
            int64_t i_4 = arg2[1]
            int32_t x8_10
            
            if (i_4 s< 1)
                x8_10 = 0
            else
                void* x10_14 = *arg2
                x8_10 = 0
                int64_t i_2
                
                do
                    uint32_t x12_9 = zx.d(*x10_14)
                    x10_14 += 1
                    i_2 = i_4
                    i_4 -= 1
                    x8_10 =
                        *(&data_877d30 + ((zx.q(x12_9) ^ zx.q(x8_10 u>> 0x18)) << 2)) ^ x8_10 << 8
                while (i_2 != 1)
            
            int64_t i_5 = arg2[3]
            
            if (i_5 s>= 1)
                char* x10_15 = arg2[2]
                int64_t i_3
                
                do
                    uint32_t x12_12 = zx.d(*x10_15)
                    x10_15 = &x10_15[1]
                    i_3 = i_5
                    i_5 -= 1
                    x8_10 =
                        *(&data_877d30 + ((zx.q(x12_12) ^ zx.q(x8_10 u>> 0x18)) << 2)) ^ x8_10 << 8
                while (i_3 != 1)
            
            *(*arg2 + 0x16) = x8_10.b
            *(*arg2 + 0x17) = (x8_10 u>> 8).b
            *(*arg2 + 0x18) = (x8_10 u>> 0x10).b
            *(*arg2 + 0x19) = (x8_10 u>> 0x18).b
    else
    label_10963d0:
        
        if (arg3 != 0)
            goto label_109643c
