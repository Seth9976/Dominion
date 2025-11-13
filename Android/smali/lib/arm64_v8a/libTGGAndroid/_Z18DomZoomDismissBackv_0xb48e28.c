// 函数: _Z18DomZoomDismissBackv
// 地址: 0xb48e28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x20
uint64_t var_10 = entry_x20
uint64_t x8_1 = zx.q(*(gDomClient + 0x1d00c) - 1)
int32_t* x8_3

if (x8_1.d u> 3)
label_b48f14:
    pthread_kill(pthread_self(), 6)
    int64_t x0
    x0, x8_3 = XNoReturn()
label_b48f24:
    
    if (*x8_3 s>= 1)
        int64_t i = 0
        int64_t x22_1 = 0xc
        
        do
            void* x8_5 = *(gDomClient + 0x205e0) + zx.q(*(x8_3 + x22_1)) * 0x21d8
            int128_t var_130_1
            __builtin_memset(&var_130_1, 0, 0x20)
            var_130_1:8.d = 3
            int128_t var_120_1
            var_120_1:8.d = 0
            int32_t var_108 = 1
            int32_t var_100_1 = 0x23
            var_130_1.q = x8_5
            int32_t var_f8_1 = 0xffffffff
            int32_t var_f4_1 = i.d | entry_x20.d
            MoveComponent<DomLoc, DomMoveCallback>::Move(x8_5 + 0x258, &var_108, 6, 1)
            x8_3 = *(gDomClient + 0x1f0a8)
            i += 1
            x22_1 += 0xc
        while (i s< sx.q(*x8_3))
    
    *(gDomClient + 0x1f0a8) = 0
    int32_t x8_6 = *(gDomClient + 0x1d010)
    int32_t x8_7
    
    x8_7 = x8_6 == 3 ? x8_6 : 1
    
    *(gDomClient + 0x1d00c) = x8_7
    return 

switch (x8_1)
    case 0
        return DomZoomDismissAll() __tailcall
    case 1, 2
        *(gDomClient + 0x1d00c) = 1
        return 
    case 3
        int64_t x9_2 = sx.q(*(gDomClient + 0x1f0a0))
        
        if (x9_2.d == 0)
            goto label_b48f14
        
        x8_3 = *(gDomClient + 0x1f0a8)
        int64_t (* x10_3)() = gDomClient + 0x1d020
        entry_x20 = 0
        void* x9_3 = x10_3 + x9_2
        
        while (x10_3 != x8_3)
            entry_x20 = zx.q(entry_x20.d + 0x10000)
            void* x10_4 = x10_3 + sx.q(8 + *x10_3 * 0xc)
            
            x10_3 = x10_4 == x9_3 ? nullptr : x10_4
            
            if (x10_3 == 0)
                goto label_b48f14
        
        goto label_b48f24
