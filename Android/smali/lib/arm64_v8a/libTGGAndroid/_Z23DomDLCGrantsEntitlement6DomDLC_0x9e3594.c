// 函数: _Z23DomDLCGrantsEntitlement6DomDLC
// 地址: 0x9e3594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (arg1 s<= 0xff)
    if (arg1 u> 0x11)
    label_9e37e4:
        pthread_kill(pthread_self(), 6)
        int64_t x0_2
        int64_t x1
        x0_2, x1 = XNoReturn()
        return DomEntitlementGrantsFirstEdition(x0_2, x1) __tailcall
    
    x8_1 = 0
    
    switch (arg1)
        case 1
            x8_1 = 3
        case 2
            x8_1 = 5
        case 3
            x8_1 = 7
        case 4
            x8_1 = 0xa
        case 5
            x8_1 = 0xb
        case 6
            x8_1 = 0xe
        case 7
            x8_1 = 0x11
        case 8
            x8_1 = 0x14
        case 9
            x8_1 = 0x15
        case 0xa
            x8_1 = 0x18
        case 0xb
            x8_1 = 0x19
        case 0xc
            x8_1 = 0x1a
        case 0xd
            x8_1 = 0x1b
        case 0xe
            x8_1 = 0x1c
        case 0xf
            x8_1 = 0x1d
        case 0x10
            x8_1 = 0x1e
        case 0x11
            x8_1 = 0x1f
else if (arg1 s>= 0x5000)
    if (arg1 s< 0x9000)
        if (arg1 s>= 0x8000)
            if (arg1 == 0x8000)
                x8_1 = 0x10
            else
                if (arg1 != 0x8001)
                    goto label_9e37e4
                
                x8_1 = 0xf
        else if (arg1 == 0x5000)
            x8_1 = 0x13
        else
            if (arg1 != 0x5001)
                goto label_9e37e4
            
            x8_1 = 0x12
    else if (arg1 s< 0x100000)
        if (arg1 == 0x9000)
            x8_1 = 0x17
        else
            if (arg1 != 0x9001)
                goto label_9e37e4
            
            x8_1 = 0x16
    else if (arg1 == 0x100000)
        x8_1 = 0x24
    else if (arg1 == 0x100001)
        x8_1 = 0x25
    else
        if (arg1 != 0x100002)
            goto label_9e37e4
        
        x8_1 = 0x26
else if (arg1 s< 0x2000)
    if (arg1 s> 0x101)
        if (arg1 == 0x102)
            x8_1 = 0x22
        else
            if (arg1 != 0x1000)
                goto label_9e37e4
            
            x8_1 = 4
    else if (arg1 == 0x100)
        x8_1 = 0x20
    else
        if (arg1 != 0x101)
            goto label_9e37e4
        
        x8_1 = 0x21
else if (arg1 s<= 0x3000)
    if (arg1 == 0x2000)
        x8_1 = 6
    else
        if (arg1 != 0x3000)
            goto label_9e37e4
        
        x8_1 = 9
else if (arg1 == 0x3001)
    x8_1 = 8
else if (arg1 == 0x4000)
    x8_1 = 0xd
else
    if (arg1 != 0x4001)
        goto label_9e37e4
    
    x8_1 = 0xc

return zx.q(*(&data_7a9764 + x8_1 * 0x10c))
