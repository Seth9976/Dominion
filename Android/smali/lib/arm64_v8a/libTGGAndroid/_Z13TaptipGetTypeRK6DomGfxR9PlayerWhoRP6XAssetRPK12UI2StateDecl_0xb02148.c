// 函数: _Z13TaptipGetTypeRK6DomGfxR9PlayerWhoRP6XAssetRPK12UI2StateDecl
// 地址: 0xb02148
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = *UI2_TAPTIP_SMALL
*arg4 = nullptr
int32_t x9_1 = *(arg1 + 0x2c)

if (x9_1 == 4)
    *arg2 = *(arg1 + 0x1c4)
    int32_t x9_4 = *(arg1 + 0x1b4)
    
    if (x9_4 s<= 0xaff)
        if (x9_4 == 0x400)
            *arg4 = &data_182c2f8
            return &data_182bfb0
        
        if (x9_4 == 0x401)
            *arg4 = &data_182c340
            return &data_182bff8
        
        if (x9_4 == 0x600)
            *arg4 = &data_182c310
            return &data_182bfc8
        
        if (x9_4 == 0x601)
            *arg4 = &data_182c2e0
            return &data_182bf98
        
        if (x9_4 == 0xa00)
            *arg4 = &data_182c2b0
            return &data_182bf68
    else if (x9_4 s<= 0xbff)
        uint64_t x9_5 = zx.q(x9_4 - 0xb00)
        
        if (x9_5.d u<= 0xa)
            switch (x9_5)
                case 0, 0xa
                    *arg4 = &data_182c3a0
                    return &data_182c058
                case 1
                    if (zx.d(*(arg1 + 0x1d0)) == 0)
                        *arg4 = &data_182c430
                        return &data_182c0e8
                    
                    *arg4 = &data_182c418
                    return &data_182c0d0
                case 3
                    *arg4 = &data_182c400
                    return &data_182c0b8
                case 4
                    *arg4 = &data_182c3e8
                    return &data_182c0a0
                case 5
                    *arg4 = &data_182c3b8
                    return &data_182c070
                case 6
                    *arg4 = &data_182c3d0
                    return &data_182c088
                case 7
                    *arg4 = &data_182c388
                    return &data_182c040
                case 8
                    *arg4 = &data_182c358
                    return &data_182c010
                case 9
                    *arg4 = &data_182c370
                    return &data_182c028
    else
        if (x9_4 == 0xe01)
            *arg4 = &data_182c448
            return &data_182c100
        
        if (x9_4 == 0x1000)
            *arg4 = &data_182c508
            return &data_182bfe0
        
        if (x9_4 == 0xc00)
            *arg4 = &data_182c2c8
            return &data_182bf80
        
        if (x9_4 == 0xe00)
            *arg4 = &data_182c298
            return &data_182bf50
else if (x9_1 != 6)
    *arg2 = 0xffffffff
else
    *arg2 = *(arg1 + 0x1e4)
    uint64_t x8_2 = zx.q(*(arg1 + 0x1e0) - 1)
    
    if (x8_2.d u> 0xe)
        return 0
    
    switch (x8_2)
        case 0
            *arg4 = &data_182c130
            return &data_182be00
        case 1
            *arg4 = &data_182c148
            return &data_182be18
        case 2
            *arg4 = &data_182c160
            return &data_182be30
        case 3
            *arg4 = &data_182c118
            return &data_182bde8
        case 4
            *arg4 = &data_182c1f0
            return &data_182bea8
        case 5
            *arg4 = &data_182c238
            return &data_182bef0
        case 6
            *arg4 = &data_182c208
            return &data_182bec0
        case 7
            *arg4 = &data_182c220
            return &data_182bed8
        case 8
            *arg4 = &data_182c178
            return &data_182be48
        case 9
            *arg4 = &data_182c190
            return &data_182be60
        case 0xa
            *arg4 = &data_182c1a8
            return &data_182be78
        case 0xb
            *arg4 = &data_182c1d8
            return &data_182be90
        case 0xc
            *arg4 = &data_182c250
            return &data_182bf08
        case 0xd
            *arg4 = &data_182c268
            return &data_182bf20
        case 0xe
            *arg4 = &data_182c280
            return &data_182bf38

return 0
