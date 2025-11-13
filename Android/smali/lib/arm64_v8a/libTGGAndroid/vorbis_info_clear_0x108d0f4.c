// 函数: vorbis_info_clear
// 地址: 0x108d0f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *(arg1 + 0x30)

if (x20 != 0)
    int32_t x8_1 = *(x20 + 0x10)
    
    if (x8_1 s>= 1)
        int64_t i = 0
        
        do
            int64_t x0 = *(x20 + 0x28 + (i << 3))
            
            if (x0 != 0)
                free(x0)
                x8_1 = *(x20 + 0x10)
            
            i += 1
        while (i s< sx.q(x8_1))
    
    int32_t x8_2 = *(x20 + 0x14)
    
    if (x8_2 s>= 1)
        int64_t i_1 = 0
        
        do
            int64_t x0_1 = *(x20 + 0x328 + (i_1 << 3))
            
            if (x0_1 != 0)
                (*(_mapping_P[sx.q(*(x20 + 0x328 + (i_1 << 2) - 0x100))] + 0x10))(x0_1)
                x8_2 = *(x20 + 0x14)
            
            i_1 += 1
        while (i_1 s< sx.q(x8_2))
    
    int32_t x8_7 = *(x20 + 0x18)
    
    if (x8_7 s>= 1)
        int64_t i_2 = 0
        
        do
            int64_t x0_2 = *(x20 + 0x628 + (i_2 << 3))
            
            if (x0_2 != 0)
                (*(*(_floor_P + (sx.q(*(x20 + 0x628 + (i_2 << 2) - 0x100)) << 3)) + 0x18))(x0_2)
                x8_7 = *(x20 + 0x18)
            
            i_2 += 1
        while (i_2 s< sx.q(x8_7))
    
    int32_t x8_12 = *(x20 + 0x1c)
    
    if (x8_12 s>= 1)
        int64_t i_3 = 0
        
        do
            int64_t x0_3 = *(x20 + 0x928 + (i_3 << 3))
            
            if (x0_3 != 0)
                (*(*(_residue_P + (sx.q(*(x20 + 0x928 + (i_3 << 2) - 0x100)) << 3)) + 0x18))(x0_3)
                x8_12 = *(x20 + 0x1c)
            
            i_3 += 1
        while (i_3 s< sx.q(x8_12))
    
    int64_t x0_6
    
    if (*(x20 + 0x20) s<= 0)
        x0_6 = *(x20 + 0x1328)
        
        if (x0_6 != 0)
            free(x0_6)
    else
        int64_t x22_5 = 0
        int64_t i_4 = 0
        
        do
            int64_t x0_4 = *(x20 + 0xb28 + (i_4 << 3))
            
            if (x0_4 != 0)
                vorbis_staticbook_destroy(x0_4)
            
            int64_t x8_18 = *(x20 + 0x1328)
            
            if (x8_18 != 0)
                vorbis_book_clear(x8_18 + x22_5)
            
            i_4 += 1
            x22_5 += 0x60
        while (i_4 s< sx.q(*(x20 + 0x20)))
        
        x0_6 = *(x20 + 0x1328)
        
        if (x0_6 != 0)
            free(x0_6)
    
    if (*(x20 + 0x24) s>= 1)
        int64_t i_5 = 0
        
        do
            _vi_psy_free(*(x20 + 0x1330 + (i_5 << 3)))
            i_5 += 1
        while (i_5 s< sx.q(*(x20 + 0x24)))
    
    free(x20)

__builtin_memset(arg1, 0, 0x38)
return zx.o(0)
