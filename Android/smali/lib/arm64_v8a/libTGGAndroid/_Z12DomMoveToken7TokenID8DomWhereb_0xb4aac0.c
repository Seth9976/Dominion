// 函数: _Z12DomMoveToken7TokenID8DomWhereb
// 地址: 0xb4aac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x24
int128_t* var_30 = entry_x24
uint64_t entry_x21
uint64_t var_18 = entry_x21
uint64_t entry_x20
uint64_t var_10 = entry_x20
void* entry_x19
void* var_8 = entry_x19
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
int128_t var_b0
void* x8_1
int64_t x9_1

if (x9.d != 0)
    x8_1 = *(gDomClient + 0x205e0)
    entry_x21 = zx.q(arg3.d)
    entry_x20 = zx.q(arg2)
    entry_x24 = &var_b0
    x9_1 = x8_1 + x9 * 0x21d8
    entry_x19 = x8_1
    
    while (zx.d(*(entry_x19 + 0x21d2)) == 0)
        entry_x19 += 0x21d8
        
        if (entry_x19 u>= x9_1)
            goto label_b4ab98

if (x9.d == 0 || entry_x19 == 0xffffffff)
label_b4ab98:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
else
    while (*(entry_x19 + 0x2c) != 4 || *(entry_x19 + 0x1b0) != arg1)
        if (entry_x19 == 0)
            entry_x19 = x8_1
        else
            entry_x19 += 0x21d8
        
        if (entry_x19 u>= x9_1)
            goto label_b4ab98
        
        while (zx.d(*(entry_x19 + 0x21d2)) == 0)
            entry_x19 += 0x21d8
            
            if (entry_x19 u>= x9_1)
                goto label_b4ab98
        
        if (entry_x19 == 0xffffffff)
            goto label_b4ab98

int32_t x8_2 = *(entry_x19 + 0x1bc)
*(entry_x19 + 0x1bc) = entry_x20.d
void* result
int32_t x22
int128_t v2
int128_t v3

if (x8_2 != 0x3f1)
    if (x8_2 == 6)
        result, v2, v3 = BoardAreaRemove(entry_x19)
        x22 = *(entry_x19 + 0x1c4)
        
        if (entry_x20.d != 0x3f1)
            goto label_b4ace0
        
        goto label_b4abd8
    
    uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
    DomGfx* i_4
    int64_t x10_2
    DomGfx* i
    
    if (x10_1.d != 0)
        i_4 = *(gDomClient + 0x205e0)
        x10_2 = i_4 + x10_1 * 0x21d8
        i = i_4
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x10_2)
                goto label_b4acc4
    
    DomGfx* i_3
    
    if (x10_1.d == 0 || i == 0xffffffff)
    label_b4acc4:
        i_3 = nullptr
    else
        do
            if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff && *(i + 0x5c) == x8_2
                    && *(i + 0x60) == 0)
                i_3 = i
                break
            
            if (i == 0)
                i = i_4
            else
                i += 0x21d8
            
            if (i u>= x10_2)
                goto label_b4acc4
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_2)
                    goto label_b4acc4
            
            i_3 = nullptr
        while (i != 0xffffffff)
    
    result, v2, v3 = PileRemoveToken(entry_x19, i_3)
    x22 = *(entry_x19 + 0x1c4)
    
    if (entry_x20.d == 0x3f1)
        goto label_b4abd8
    
    goto label_b4ace0

result, v2, v3 = PlayerAreaRemove(entry_x19)
x22 = *(entry_x19 + 0x1c4)
int32_t x23
int32_t x25
int32_t x26

if (entry_x20.d != 0x3f1)
label_b4ace0:
    
    if (entry_x20.d != 6)
        uint64_t x9_6 = zx.q(*(gDomClient + 0x205e8))
        void* x8_5 = *(gDomClient + 0x205e0)
        int64_t x9_7
        void* x10_3
        
        if (x9_6.d != 0)
            x9_7 = x8_5 + x9_6 * 0x21d8
            x10_3 = x8_5
            
            while (zx.d(*(x10_3 + 0x21d2)) == 0)
                x10_3 += 0x21d8
                
                if (x10_3 u>= x9_7)
                    goto label_b4ae10
        
        int32_t i_1
        void* x10_4
        void* x11_7
        
        if (x9_6.d != 0 && x10_3 != 0xffffffff)
            while (true)
                if (*(x10_3 + 0x2c) == 3 && *(x10_3 + 0x58) == 0xffffffff
                        && *(x10_3 + 0x5c) == entry_x20.d && *(x10_3 + 0x60) == 0)
                    x11_7 = x10_3
                    x10_4 = x11_7 + 0x74
                    i_1 = *x10_4
                    
                    if (i_1 != 0)
                        break
                    
                    goto label_b4ae60
                
                if (x10_3 == 0)
                    x10_3 = x8_5
                else
                    x10_3 += 0x21d8
                
                if (x10_3 u>= x9_7)
                    goto label_b4ae10
                
                while (zx.d(*(x10_3 + 0x21d2)) == 0)
                    x10_3 += 0x21d8
                    
                    if (x10_3 u>= x9_7)
                        goto label_b4ae10
                
                x11_7 = nullptr
                
                if (x10_3 == 0xffffffff)
                    goto label_b4ae18
            
            goto label_b4ae20
        
    label_b4ae10:
        x11_7 = nullptr
    label_b4ae18:
        x10_4 = 0x74
        i_1 = *0x74
        
        if (i_1 == 0)
        label_b4ae60:
            x23 = 0
        else
        label_b4ae20:
            x23 = 0
            void* x13_6
            
            do
                x13_6 = x8_5 + mulu.dp.d(i_1 & 0xffff, 0x21d8)
                i_1 = *(x13_6 + 0x213c)
                x23 += 1
            while (i_1 != 0)
            
            x10_4 = x13_6 + 0x213c
        
        x25 = 7
        *x10_4 = *(entry_x19 + 0x21d0)
        *(entry_x19 + 0x2140) = x23
        *(entry_x19 + 0x1b8) = *(x11_7 + 0x21d0)
    else
        result, v2, v3 = BoardAreaPile(0x603)
        void* x9_4 = result + 0x74
        int32_t i_2 = *x9_4
        
        if (i_2 == 0)
            x23 = 0
        else
            x23 = 0
            void* x12_2
            
            do
                x12_2 = *(gDomClient + 0x205e0) + mulu.dp.d(i_2 & 0xffff, 0x21d8)
                i_2 = *(x12_2 + 0x213c)
                x23 += 1
            while (i_2 != 0)
            
            x9_4 = x12_2 + 0x213c
        
        x25 = 7
        *x9_4 = *(entry_x19 + 0x21d0)
        *(entry_x19 + 0x2140) = x23
        *(entry_x19 + 0x1b8) = *(result + 0x21d0)
        entry_x20 = zx.q(*(result + 0x5c))
    
    x26 = -1
else
label_b4abd8:
    result, v2, v3 = PlayerAreaAdd(entry_x19, zx.q(x22), 0xffffffff)
    x26 = *(entry_x19 + 0x1c4)
    x23 = result.d
    x25 = 0x13

int128_t var_110
__builtin_memset(&var_110, 0, 0x5c)

if ((entry_x21.d & 1) == 0)
    result, v2, v3 = DomSoundToken(zx.q(x22), zx.q(*(entry_x19 + 0x1b4)), 0)

*(entry_x24 + 0x4c) = zx.o(0)
__builtin_memset(&var_b0, 0, 0x50)
*(entry_x19 + 0x260) = 1
*(entry_x19 + 0x268) = x25
*(entry_x19 + 0x26c) = entry_x20.d
*(entry_x19 + 0x270) = x26
*(entry_x19 + 0x274) = x23
*(entry_x19 + 0x278) = 0
*(entry_x19 + 0x280) = 0
*(entry_x19 + 0x294) = zx.o(0)
*(entry_x19 + 0x284) = zx.o(0)
__builtin_memset(entry_x19 + 0x2d0, 0, 0x18)
*(entry_x19 + 0x2c4) = zx.o(0)
*(entry_x19 + 0x2b4) = zx.o(0)
*(entry_x19 + 0x2a4) = zx.o(0)
*(entry_x19 + 0x308) = 1
*(entry_x19 + 0x310) = x25
*(entry_x19 + 0x314) = entry_x20.d
*(entry_x19 + 0x318) = x26
*(entry_x19 + 0x31c) = x23
*(entry_x19 + 0x320) = 0
*(entry_x19 + 0x328) = 0
int128_t v1 = var_b0
int128_t var_a0
*(entry_x19 + 0x33c) = var_a0
*(entry_x19 + 0x32c) = v1
*(entry_x19 + 0x378) = *(entry_x24 + 0x4c)
int128_t var_70
*(entry_x19 + 0x36c) = var_70
int128_t var_80
*(entry_x19 + 0x35c) = var_80
int128_t var_90
*(entry_x19 + 0x34c) = var_90
*(entry_x19 + 0x388) = 0
*(entry_x19 + 0x3b0) = 1
*(entry_x19 + 0x3b8) = x25
*(entry_x19 + 0x3bc) = entry_x20.d
*(entry_x19 + 0x3c0) = x26
*(entry_x19 + 0x3c4) = x23
*(entry_x19 + 0x3c8) = 0
*(entry_x19 + 0x3d0) = 0
int128_t v0 = var_b0
*(entry_x19 + 0x3e4) = var_a0
*(entry_x19 + 0x3d4) = v0
v1 = *(entry_x24 + 0x4c)
*(entry_x19 + 0x404) = var_80
*(entry_x19 + 0x420) = v1
*(entry_x19 + 0x414) = var_70
*(entry_x19 + 0x3f4) = var_90
*(entry_x19 + 0x430) = 0
*(entry_x19 + 0x1f78) = 0
return result
