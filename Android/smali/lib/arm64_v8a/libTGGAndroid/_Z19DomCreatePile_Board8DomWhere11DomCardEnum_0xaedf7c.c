// 函数: _Z19DomCreatePile_Board8DomWhere11DomCardEnum
// 地址: 0xaedf7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((IsBoardPile(arg1) & 1) != 0)
    uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))
    
    if (x9_1.d != 0)
        void* i_1 = *(gDomClient + 0x205e0)
        int64_t x9_2 = i_1 + x9_1 * 0x21d8
        void* i = i_1
        
        do
            if (zx.d(*(i + 0x21d2)) != 0)
                while (i != 0xffffffff)
                    if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff && *(i + 0x5c) == x19
                            && *(i + 0x60) == 0)
                        if (i != 0)
                            UI2Free(i + 0x2148)
                            UI2Free(i + 0x214c)
                            UI2Free(i + 0x2150)
                            UI2Free(i + 0x2154)
                            uint32_t x0_7 = *(i + 0x1f90)
                            
                            if (x0_7 != 0)
                                SpineDestroy(x0_7)
                            
                            int32_t x10_7 = *(gDomClient + 0x205f0)
                            *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                            *(i + 0x21d0) = x10_7
                            *(gDomClient + 0x205f4) -= 1
                        
                        break
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x21d8
                    
                    if (i u>= x9_2)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x9_2)
                            goto label_aee070
                
                break
            
            i += 0x21d8
        while (i u< x9_2)

label_aee070:
uint64_t x24 = zx.q(*(gDomClient + 0x205f0))
int64_t x8_3
int32_t x9_3

if (x24.d != *(gDomClient + 0x205e8))
    x8_3 = *(gDomClient + 0x205e0)
    x9_3 = *(x8_3 + x24 * 0x21d8 + 0x21d0)
else
    x8_3 = *(gDomClient + 0x205e0)
    x9_3 = x24.d + 1
    *(gDomClient + 0x205e8) = x9_3

void* result = x8_3 + x24 * 0x21d8
*(gDomClient + 0x205f0) = x9_3
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = memset(result, 0, 0x21d0)
v0.q = 0
v0:8.q = 0
*(result + 0x21d0) = x24.d | *(gDomClient + 0x205f8) << 0x10
int32_t x10_2 = *(gDomClient + 0x205f8)
int32_t x10_3

if (x10_2 == 0xffff)
    x10_3 = 1
else
    x10_3 = x10_2 + 1

*(gDomClient + 0x205f8) = x10_3
*(gDomClient + 0x205f4) += 1
*(result + 0x2c) = 3
*(result + 0x30) = arg2
*(result + 0x58) = 0xffffffff
*(result + 0x5c) = x19
*(result + 0x70) = 0
void* result_1 = result
int128_t var_150
__builtin_memset(&var_150, 0, 0x78)
var_150.d = 6
var_150:4.d = x19
var_150:8.d = 0xffffffff
var_150:0xc.q = 0
int128_t var_140
var_140:4.q = 0
int64_t var_e0
int128_t var_50 = var_e0.o
int128_t var_c0 = var_150
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x50)
*(result + 0x260) = 1
int128_t var_c4
*(result + 0x264) = var_c4
v0 = var_a0
*(result + 0x274) = var_c0
int128_t var_90
*(result + 0x2a4) = var_90
*(result + 0x294) = v0
*(result + 0x284) = var_140
*(result + 0x2e4) = var_50:0xc.d
int128_t var_60
*(result + 0x2d4) = var_60
int128_t var_70
*(result + 0x2c4) = var_70
int128_t var_80
*(result + 0x2b4) = var_80
*(result + 0x308) = 1
*(result + 0x30c) = var_c4
v0 = var_a0
*(result + 0x34c) = var_90
*(result + 0x33c) = v0
*(result + 0x32c) = var_140
*(result + 0x31c) = var_c0
*(result + 0x38c) = var_50:0xc.d
*(result + 0x36c) = var_70
*(result + 0x37c) = var_60
*(result + 0x35c) = var_80
*(result + 0x3b0) = 1
*(result + 0x3b4) = var_c4
*(result + 0x3c4) = var_c0
*(result + 0x3e4) = var_a0
*(result + 0x3f4) = var_90
*(result + 0x3d4) = var_140
*(result + 0x434) = var_50:0xc.d
*(result + 0x414) = var_70
*(result + 0x424) = var_60
*(result + 0x404) = var_80
*(result + 0x1f78) = 0
return result
