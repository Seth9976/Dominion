// 函数: _Z16DomCreateAbilityR9DomClient9PlayerWho9AbilityIDRK13DomActiveItemRK14DomAbilityType6CardID
// 地址: 0xb495b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t var_64
void* x0_1 = FindAbilityStack(zx.q(arg2), arg5, zx.q(arg6), &var_64)
uint64_t x25 = zx.q(*(arg1 + 0x205f0))
int32_t x8_1
int64_t x27

if (x25.d != *(arg1 + 0x205e8))
    x27 = *(arg1 + 0x205e0)
    x8_1 = *(x27 + x25 * 0x21d8 + 0x21d0)
else
    x27 = *(arg1 + 0x205e0)
    x8_1 = x25.d + 1
    *(arg1 + 0x205e8) = x8_1

*(arg1 + 0x205f0) = x8_1
void* x24 = x27 + x25 * 0x21d8
memset(x24, 0, 0x21d0)
*(x24 + 0x21d0) = x25.d | *(arg1 + 0x205f8) << 0x10
int32_t x9 = *(arg1 + 0x205f8)
int32_t x9_1

if (x9 == 0xffff)
    x9_1 = 1
else
    x9_1 = x9 + 1

*(arg1 + 0x205f4) += 1
*(arg1 + 0x205f8) = x9_1
*(x24 + 0x2c) = 5
*(x24 + 0x1f0) = x19
*(x24 + 0x1f4) = arg3
*(x24 + 0x1f8) = *arg4
int32_t x9_3 = *(arg5 + 0x10)
int128_t v0 = *arg5
*(x24 + 0x218) = 0
*(x24 + 0x210) = x9_3
*(x24 + 0x200) = v0

if (x0_1 == 0)
    void* x9_5 = x27 + x25 * 0x21d8
    *(x9_5 + 0x21c) = 1
    *(x9_5 + 0x214) = 0
    int32_t x11_1 = var_64
    *(x9_5 + 0x260) = 1
    *(x9_5 + 0x270) = x19
    *(x9_5 + 0x268) = 0x1f
    *(x9_5 + 0x274) = x11_1
    *(x9_5 + 0x278) = zx.o(0)
    *(x9_5 + 0x288) = zx.o(0)
    *(x9_5 + 0x298) = zx.o(0)
    *(x9_5 + 0x2a8) = zx.o(0)
    *(x9_5 + 0x2b8) = zx.o(0)
    *(x9_5 + 0x2c8) = zx.o(0)
    *(x9_5 + 0x2d8) = zx.o(0)
    *(x9_5 + 0x308) = 1
    *(x9_5 + 0x3b0) = 1
    *(x9_5 + 0x31c) = x11_1
    *(x9_5 + 0x3c4) = x11_1
    *(x9_5 + 0x310) = 0x1f
    *(x9_5 + 0x318) = x19
    __builtin_memset(x9_5 + 0x320, 0, 0x70)
    *(x9_5 + 0x3b8) = 0x1f
    *(x9_5 + 0x3c0) = x19
    *(x9_5 + 0x1f78) = 0
    __builtin_memset(x9_5 + 0x3c8, 0, 0x70)
else
    void* x8_6 = x27 + x25 * 0x21d8
    *(x8_6 + 0x21c) = 0
    *(x8_6 + 0x214) = *(x0_1 + 0x214)
    *(x0_1 + 0x21c) += 1
    *(x0_1 + 0x214) = *(x24 + 0x21d0)

uint64_t x13 = zx.q(*(gDomClient + 0x205e8))
void* i_2
void* i

if (x13.d != 0)
    i_2 = *(gDomClient + 0x205e0)
    i = i_2
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= i_2 + x13 * 0x21d8)
            goto label_b49890

DomGfx* var_868[0x100]
int32_t x20_1

if (x13.d == 0 || i == 0xffffffff)
label_b49890:
    x20_1 = 0
else
    x20_1 = 0
    int64_t x13_1 = i_2 + x13 * 0x21d8
    
    do
        if (*(i + 0x2c) == 5 && *(i + 0x1f0) == x19 && *(i + 0x21c) s>= 1)
            var_868[sx.q(x20_1)] = i
            x20_1 += 1
        
        if (i == 0)
            i = i_2
        else
            i += 0x21d8
        
        if (i u>= x13_1)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x13_1)
                goto label_b498ac
    while (i != 0xffffffff)

label_b498ac:
bool (* var_58)(DomGfx const*, DomGfx const*) = SortAbilities
int64_t result = std::__ndk1::__sort<bool (*&)(DomGfx const*, DomGfx const*), DomGfx**>(&var_868, 
    &var_868[sx.q(x20_1)], &var_58)

if (x20_1 s>= 1)
    int64_t i_1 = 0
    
    do
        void* x11_5 = var_868[i_1]
        *(x11_5 + 0x260) = 1
        *(x11_5 + 0x268) = 0x1f
        *(x11_5 + 0x270) = x19
        *(x11_5 + 0x274) = i_1.d
        *(x11_5 + 0x278) = zx.o(0)
        *(x11_5 + 0x288) = zx.o(0)
        *(x11_5 + 0x298) = zx.o(0)
        *(x11_5 + 0x2a8) = zx.o(0)
        *(x11_5 + 0x2b8) = zx.o(0)
        *(x11_5 + 0x2c8) = zx.o(0)
        *(x11_5 + 0x2d8) = zx.o(0)
        *(x11_5 + 0x308) = 1
        *(x11_5 + 0x310) = 0x1f
        *(x11_5 + 0x318) = x19
        *(x11_5 + 0x31c) = i_1.d
        __builtin_memset(x11_5 + 0x320, 0, 0x70)
        *(x11_5 + 0x3b0) = 1
        *(x11_5 + 0x3b8) = 0x1f
        *(x11_5 + 0x3c0) = x19
        *(x11_5 + 0x3c4) = i_1.d
        *(x11_5 + 0x1f78) = 0
        __builtin_memset(x11_5 + 0x3c8, 0, 0x70)
        i_1 += 1
    while (zx.q(x20_1) != i_1)

return result
