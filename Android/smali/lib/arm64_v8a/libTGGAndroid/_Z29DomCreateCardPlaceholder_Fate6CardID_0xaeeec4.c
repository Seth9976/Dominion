// 函数: _Z29DomCreateCardPlaceholder_Fate6CardID
// 地址: 0xaeeec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i_1 = *(gDomClient + 0x205e0)
int64_t x10_1
void* i

if (x9.d != 0)
    x10_1 = i_1 + x9 * 0x21d8
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x10_1)
            goto label_aeef94

void* i_2

if (x9.d == 0 || i == 0xffffffff)
label_aeef94:
    i_2 = nullptr
else
    do
        if (*(i + 0x2c) == 0 && *(i + 0x98) == x19 && zx.d(*(i + 0x168)) == 0)
            i_2 = i
            break
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x10_1)
            goto label_aeef94
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x10_1)
                goto label_aeef94
        
        i_2 = nullptr
    while (i != 0xffffffff)

uint64_t x24 = zx.q(*(gDomClient + 0x205f0))
int32_t x10_2

if (x24.d != x9.d)
    x10_2 = *(i_1 + x24 * 0x21d8 + 0x21d0)
    x9 = x24
else
    x10_2 = x9.d + 1
    *(gDomClient + 0x205e8) = x10_2

void* result = i_1 + x9 * 0x21d8
*(gDomClient + 0x205f0) = x10_2
memset(result, 0, 0x21d0)
*(result + 0x21d0) = x24.d | *(gDomClient + 0x205f8) << 0x10
int32_t x9_4 = *(gDomClient + 0x205f8)
int32_t x9_5

if (x9_4 == 0xffff)
    x9_5 = 1
else
    x9_5 = x9_4 + 1

*(gDomClient + 0x205f8) = x9_5
*(gDomClient + 0x205f4) += 1
*(result + 0x2c) = 0
*(result + 0x98) = x19
*(result + 0x168) = 1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = CurrentTransformWithMouseover(i_2)
*(result + 0x308) = 0
int128_t var_c4
*(result + 0x32c) = var_c4
int128_t var_d4
*(result + 0x31c) = var_d4
int128_t var_e4
*(result + 0x30c) = var_e4
int128_t var_a4
*(result + 0x34c) = var_a4
int128_t var_94
*(result + 0x35c) = var_94
int128_t var_84
*(result + 0x36c) = var_84
int128_t var_b4
*(result + 0x33c) = var_b4
int128_t var_f8
*(result + 0x3ac) = var_f8:0xc.d
int128_t var_64
*(result + 0x38c) = var_64
int128_t var_108
*(result + 0x39c) = var_108
int128_t var_74
*(result + 0x37c) = var_74
*(result + 0x3b0) = 0
*(result + 0x3c4) = var_d4
*(result + 0x3d4) = var_c4
*(result + 0x3b4) = var_e4
*(result + 0x404) = var_94
*(result + 0x414) = var_84
*(result + 0x3e4) = var_b4
*(result + 0x3f4) = var_a4
*(result + 0x454) = var_f8:0xc.d
*(result + 0x434) = var_64
*(result + 0x444) = var_108
*(result + 0x424) = var_74
*(result + 0x1f78) = 0
return result
