// 函数: _Z12DomZoomExtraR6DomGfx
// 地址: 0xaf5db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(gDomClient + 0x1f0a0))
int64_t (* i)()

if (x9.d == 0)
    i = nullptr
else
    i = gDomClient + 0x1d020
    void* x9_1 = i + x9
    
    do
        uint64_t x11_2 = zx.q(*i)
        
        if (x11_2.d s>= 1)
            int64_t x12_1 = 0
            
            while (*(i + x12_1 + 0xc) != *(arg1 + 0x21d0))
                x12_1 += 0xc
                
                if (x11_2 * 0xc == x12_1)
                    goto label_af5e08
            
            break
        
    label_af5e08:
        void* i_2 = i + sx.q(8 + x11_2.d * 0xc)
        
        i = i_2 == x9_1 ? nullptr : i_2
    while (i != 0)

if (i != *(gDomClient + 0x1f0a8))
    if (*i != 1)
        *(gDomClient + 0x1f0a8) = i
        int32_t x8_4 = *(gDomClient + 0x1d00c)
        int32_t x8_5
        
        x8_5 = x8_4 == 3 ? x8_4 : 1
        
        *(gDomClient + 0x1d010) = x8_5
        *(gDomClient + 0x1d00c) = 4
        
        if (*i s>= 1)
            int64_t i_1 = 0
            int64_t (* x22_1)() = i + 0xc
            
            do
                uint64_t x8_7 = zx.q(*x22_1)
                x22_1 += 0xc
                void* x8_8 = *(gDomClient + 0x205e0) + x8_7 * 0x21d8
                int128_t var_130_1
                __builtin_memset(&var_130_1, 0, 0x20)
                var_130_1:8.d = 2
                int128_t var_120_1
                var_120_1:8.d = 0
                int32_t var_108 = 1
                int32_t var_100_1 = 0x24
                var_130_1.q = x8_8
                int32_t var_f8_1 = 0xffffffff
                int32_t var_f4_1 = i_1.d
                MoveComponent<DomLoc, DomMoveCallback>::Move(x8_8 + 0x258, &var_108, 6, 1)
                i_1 += 1
            while (i_1 s< sx.q(*i))
        
        return 
    
    arg1 = *(gDomClient + 0x205e0) + zx.q(*(i + 0xc)) * 0x21d8

return DomZoom(arg1) __tailcall
