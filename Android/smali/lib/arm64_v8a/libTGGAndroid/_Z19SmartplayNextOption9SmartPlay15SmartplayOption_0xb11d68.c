// 函数: _Z19SmartplayNextOption9SmartPlay15SmartplayOption
// 地址: 0xb11d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 - 1)

if (x8.d u> 0x1b)
    pthread_kill(pthread_self(), 6)
    return GetSmartplayDefault(XNoReturn()) __tailcall

void* const x8_1 = &data_1151610
int32_t x9
char x10_2

switch (x8)
    case 0
        x8_1 = &data_1151a18
        x9 = 2
    label_b11f9c:
        int32_t x12_1 = *(x8_1 + 0xb0)
        int32_t x10_1
        
        x10_1 = x9 != arg2 ? -1 : 0
        
        if (x12_1 == 0)
            x9 = 1
        label_b12038:
            x10_2 = x10_1.b + 1
            
            if (x10_1 u>= 0xffffffff)
                x10_2 = 1
        else
            int32_t x11_1 = *(x8_1 + 0xc8)
            
            if (x12_1 == arg2)
                x10_1 = 1
            
            x9 = 2
            
            if (x11_1 == 0)
                goto label_b12038
            
            int32_t x12_2 = *(x8_1 + 0xe0)
            
            if (x11_1 == arg2)
                x10_1 = 2
            
            x9 = 3
            
            if (x12_2 == 0)
                goto label_b12038
            
            int32_t x11_2 = *(x8_1 + 0xf8)
            
            if (x12_2 == arg2)
                x10_1 = 3
            
            x9 = 4
            
            if (x11_2 == 0)
                goto label_b12038
            
            int32_t x12_3 = *(x8_1 + 0x110)
            
            if (x11_2 == arg2)
                x10_1 = 4
            
            x9 = 5
            
            if (x12_3 == 0)
                goto label_b12038
            
            int32_t x11_3 = *(x8_1 + 0x128)
            
            if (x12_3 == arg2)
                x10_1 = 5
            
            x9 = 6
            
            if (x11_3 == 0)
                goto label_b12038
            
            int32_t x12_4 = *(x8_1 + 0x140)
            
            if (x11_3 == arg2)
                x10_1 = 6
            
            if (x12_4 == 0)
                x9 = 7
                x10_2 = x10_1.b + 1
                
                if (x10_1 u>= 0xffffffff)
                    x10_2 = 1
            else
                x9 = 0
                
                if (x12_4 != arg2)
                    goto label_b12038
                
                x10_2 = 8
    case 1
        x8_1 = &data_1151b70
        x9 = 2
        goto label_b11f9c
    case 2
        x8_1 = &data_1151cc8
        x9 = 2
        goto label_b11f9c
    case 3
        x8_1 = &data_1151e20
        x9 = 2
        goto label_b11f9c
    case 4
        x8_1 = &data_1151f78
        x9 = 1
        goto label_b11f9c
    case 5
        x8_1 = &data_11520d0
        x9 = 2
        goto label_b11f9c
    case 6
        x8_1 = &data_1151768
        x9 = 2
        goto label_b11f9c
    case 7
        x8_1 = &data_1152380
        x9 = 2
        goto label_b11f9c
    case 8
        x8_1 = &data_11528e0
        x9 = 2
        goto label_b11f9c
    case 9
        x8_1 = &data_1152a38
        x9 = 2
        goto label_b11f9c
    case 0xa
        x8_1 = &data_1152b90
        x9 = 2
        goto label_b11f9c
    case 0xb
        x8_1 = &data_1152ce8
        x9 = 2
        goto label_b11f9c
    case 0xc
        x8_1 = &data_1152e40
        x9 = 2
        goto label_b11f9c
    case 0xd
        x8_1 = &data_11530f0
        x9 = 2
        goto label_b11f9c
    case 0xe
        x8_1 = &data_1153248
        x9 = 2
        goto label_b11f9c
    case 0xf
        x8_1 = &data_11534f8
        x9 = 2
        goto label_b11f9c
    case 0x10
        x8_1 = &data_1153650
        x9 = 2
        goto label_b11f9c
    case 0x11
        x8_1 = &data_11537a8
        x9 = 2
        goto label_b11f9c
    case 0x12
        x8_1 = &data_1153900
        x9 = 2
        goto label_b11f9c
    case 0x13
        x8_1 = &data_1153a58
        x9 = 2
        goto label_b11f9c
    case 0x14
        x8_1 = &data_1152228
        x9 = 2
        goto label_b11f9c
    case 0x15
        goto label_b11f94
    case 0x16
        x8_1 = &data_11518c0
        x9 = 2
        goto label_b11f9c
    case 0x17
        x8_1 = &data_11524d8
        x9 = 2
        goto label_b11f9c
    case 0x18
        x8_1 = &data_1152630
        x9 = 2
        goto label_b11f9c
    case 0x19
        x8_1 = &data_1152788
        x9 = 2
        goto label_b11f9c
    case 0x1a
        x8_1 = &data_11533a0
    label_b11f94:
        x9 = *(x8_1 + 0x98)
        
        if (x9 != 0)
            goto label_b11f9c
        
        x10_2 = 1
    case 0x1b
        x8_1 = &data_1152f98
        x9 = 4
        goto label_b11f9c

return zx.q(*(x8_1 + mulu.dp.d(zx.d(x10_2) u% x9, 0x18) + 0x98))
