// 函数: _Z14DomModifyToken7TokenIDii12DomTokenType8DomWhere6CardID9PlayerWhob9ContextId
// 地址: 0xb4a7fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg8.d
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
int64_t i = arg9.q
int32_t x19 = arg7
int32_t x20 = arg4
void* x8_1
int64_t x9_1
void* x23_1

if (x9.d != 0)
    x8_1 = *(gDomClient + 0x205e0)
    x9_1 = x8_1 + x9 * 0x21d8
    x23_1 = x8_1
    
    while (zx.d(*(x23_1 + 0x21d2)) == 0)
        x23_1 += 0x21d8
        
        if (x23_1 u>= x9_1)
            goto label_b4a8f8

if (x9.d == 0 || x23_1 == 0xffffffff)
label_b4a8f8:
    x23_1 = DomCreateToken(arg1, zx.q(x20), zx.q(arg5), zx.q(x19), zx.q(arg6), 0, x21.b & 1, i)
else
    while (*(x23_1 + 0x2c) != 4 || *(x23_1 + 0x1b0) != arg1.d || *(x23_1 + 0x1c8) != i)
        if (x23_1 == 0)
            x23_1 = x8_1
        else
            x23_1 += 0x21d8
        
        if (x23_1 u>= x9_1)
            goto label_b4a8f8
        
        while (zx.d(*(x23_1 + 0x21d2)) == 0)
            x23_1 += 0x21d8
            
            if (x23_1 u>= x9_1)
                goto label_b4a8f8
        
        if (x23_1 == 0xffffffff)
            goto label_b4a8f8

int32_t x8_2 = *(x23_1 + 0x1d8)
*(x23_1 + 0x1d4) = arg3
*(x23_1 + 0x1d8) = x8_2 + arg2

if (x8_2 == neg.d(arg2))
    int32_t x8_4 = *(x23_1 + 0x1bc)
    
    if (x8_4 != 0x474)
        if (x8_4 == 0x3f1)
            PlayerAreaRemove(x23_1)
        else if (x8_4 != 6)
            uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
            DomGfx* i_3
            int64_t x10_2
            DomGfx* i_1
            
            if (x10_1.d != 0)
                i_3 = *(gDomClient + 0x205e0)
                x10_2 = i_3 + x10_1 * 0x21d8
                i_1 = i_3
                
                while (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u>= x10_2)
                        goto label_b4aa1c
            
            DomGfx* i_2
            
            if (x10_1.d == 0 || i_1 == 0xffffffff)
            label_b4aa1c:
                i_2 = nullptr
            else
                do
                    if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x58) == 0xffffffff && *(i_1 + 0x5c) == x8_4
                            && *(i_1 + 0x60) == 0)
                        i_2 = i_1
                        break
                    
                    if (i_1 == 0)
                        i_1 = i_3
                    else
                        i_1 += 0x21d8
                    
                    if (i_1 u>= x10_2)
                        goto label_b4aa1c
                    
                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x10_2)
                            goto label_b4aa1c
                    
                    i_2 = nullptr
                while (i_1 != 0xffffffff)
            
            PileRemoveToken(x23_1, i_2)
        else
            BoardAreaRemove(x23_1)
    
    UI2Free(x23_1 + 0x2148)
    UI2Free(x23_1 + 0x214c)
    UI2Free(x23_1 + 0x2150)
    UI2Free(x23_1 + 0x2154)
    arg1 = zx.q(*(x23_1 + 0x1f90))
    
    if (arg1.d != 0)
        SpineDestroy(arg1.d)
    
    int32_t x10_3 = *(gDomClient + 0x205f0)
    *(gDomClient + 0x205f0) = zx.d(*(x23_1 + 0x21d0))
    *(x23_1 + 0x21d0) = x10_3
    *(gDomClient + 0x205f4) -= 1
    
    if ((x21 & 1) != 0)
        return 
else if ((x21 & 1) != 0)
    return 

return DomSoundToken(zx.q(x19), zx.q(x20), arg2) __tailcall
