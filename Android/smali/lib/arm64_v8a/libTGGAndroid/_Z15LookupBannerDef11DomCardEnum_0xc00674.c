// 函数: _Z15LookupBannerDef11DomCardEnum
// 地址: 0xc00674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s<= 0xc29)
    switch (arg1)
        case 0x209
            return &data_1154208
        case 0x311
            return &data_1154230
        case 0x502
            return &data_1154258
        case 0x70c
            return &data_1154280
        case 0x80b
            return &data_11542d0
        case 0x90c
            return &data_11542a8
else if (arg1 s> 0xd23)
    if (arg1 == 0xd24)
        return &data_1154500
    
    if (arg1 == 0x1022)
        return &data_1154528
    
    if (arg1 == 0x130e)
        return &data_11541e0
else
    uint64_t x8_1 = zx.q(arg1 - 0xc2a)
    
    if (x8_1.d u<= 0x1c)
        switch (x8_1)
            case 0
                return &data_11542f8
            case 7
                return &data_1154320
            case 0xa
                return &data_1154348
            case 0x10
                return &data_1154370
            case 0x11
                return &data_1154398
            case 0x14
                return &data_11543c0
            case 0x15
                return &data_11543e8
            case 0x16
                return &data_1154410
            case 0x17
                return &data_1154438
            case 0x19
                return &data_1154460
            case 0x1a
                return &data_1154488
            case 0x1b
                return &data_11544b0
            case 0x1c
                return &data_11544d8

return 0
