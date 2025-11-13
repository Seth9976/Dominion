// 函数: _Z12PileIsCurved9PlayerWho8DomWhere
// 地址: 0xaecebc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1

if ((zx.d(*(GetActiveProfile() + 0x432c)) & 1) == 0)
    int64_t (* x8_2)()
    
    if (x20 == 0xffffffff)
        x8_2 = gDomClient + 0x48
    else
        x8_2 = gDomClient + 0x48 + muls.dp.d(x20, 0x4d48)
    
    if (zx.d(*(x8_2 + 0x4d25)) == 0)
        uint64_t x9_2 = zx.q(*(gDomClient + 0x205e8))
        void* i_2
        int64_t x9_3
        void* i
        
        if (x9_2.d != 0)
            i_2 = *(gDomClient + 0x205e0)
            x9_3 = i_2 + x9_2 * 0x21d8
            i = i_2
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x9_3)
                    goto label_aecfe0
        
        int32_t x2_1
        
        if (x9_2.d == 0 || i == 0xffffffff)
        label_aecfe0:
            x2_1 = 0
        else
            x2_1 = 0
            
            do
                if (*(i + 0x2c) == 0 && *(i + 0xa0) == x20 && *(i + 0xa4) == x19
                        && *(i + 0xc8) == 0)
                    x2_1 += 1
                
                if (i == 0)
                    i = i_2
                else
                    i += 0x21d8
                
                if (i u>= x9_3)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x9_3)
                        goto label_aecfec
            while (i != 0xffffffff)
        
    label_aecfec:
        
        if ((PileIsStacked(zx.q(x20), zx.q(x19), x2_1) & 1) == 0)
            return 1
        
        uint64_t x9_4 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_4.d == 0)
            return 1
        
        void* x8_6 = *(gDomClient + 0x205e0)
        int64_t x9_5 = x8_6 + x9_4 * 0x21d8
        void* x10_1 = x8_6
        
        while (zx.d(*(x10_1 + 0x21d2)) == 0)
            x10_1 += 0x21d8
            
            if (x10_1 u>= x9_5)
                return 1
        
        if (x10_1 == 0xffffffff)
            return 1
        
        while (*(x10_1 + 0x2c) != 3 || *(x10_1 + 0x58) != x20 || *(x10_1 + 0x5c) != x19
                || *(x10_1 + 0x60) != 0)
            if (x10_1 == 0)
                x10_1 = x8_6
            else
                x10_1 += 0x21d8
            
            if (x10_1 u>= x9_5)
                return 1
            
            while (zx.d(*(x10_1 + 0x21d2)) == 0)
                x10_1 += 0x21d8
                
                if (x10_1 u>= x9_5)
                    return 1
            
            if (x10_1 == 0xffffffff)
                return 1
        
        if (x10_1 == 0)
            return 1
        
        int32_t i_1 = *(x10_1 + 0x70)
        
        if (i_1 == 0)
            return 1
        
        int32_t x9_6 = 0
        
        do
            void* x11_2 = x8_6 + mulu.dp.d(i_1 & 0xffff, 0x21d8)
            i_1 = *(x11_2 + 0x213c)
            
            if (*(x11_2 + 0xc0) != 0)
                x9_6 += 1
        while (i_1 != 0)
        
        if (x9_6 u< 8)
            return 1
        
        *(x8_2 + 0x4d25) = 1

return 0
