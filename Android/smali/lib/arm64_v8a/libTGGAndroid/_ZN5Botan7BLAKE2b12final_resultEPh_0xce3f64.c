// 函数: _ZN5Botan7BLAKE2b12final_resultEPh
// 地址: 0xce3f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x28)
int64_t* entry_x1
int64_t* x20 = entry_x1

if (x8 != 0x80)
    memset(*(arg1 + 0x10) + x8, 0, 0x80 - x8)
    *(arg1 + 0x28)

uint64_t x1 = *(arg1 + 0x10)
*(arg1 + 0x58) = -1
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = Botan::BLAKE2b::compress(arg1, x1, 1)
int64_t x8_1 = *(arg1 + 8)
int64_t* x10 = *(arg1 + 0x30)
uint64_t i_2 = x8_1 u>> 3
int64_t* x9_5

if (x8_1 u< 0x40)
    x9_5 = x10
    
    if (i_2 != 0)
    label_ce4054:
        int64_t x10_2 = 0
        uint64_t i
        
        do
            int64_t x12_5 = x10_2 & 0x38
            i = i_2
            i_2 -= 1
            x10_2 += 8
            *x20 = (*x9_5 u>> x12_5).b
            x20 += 1
        while (i != 1)
else
    int64_t x9_3
    
    if (7 - i_2 != -8 && 7 - i_2 u>= -8)
        x9_3 = 7 - i_2
    else
        x9_3 = -8
    
    int64_t x9_4 = x9_3 + i_2
    int64_t x11_2
    
    if (x9_4 u>= 0x18)
        int64_t x11_1
        
        if (7 - i_2 != -8 && 7 - i_2 u>= -8)
            x11_1 = 7 - i_2
        else
            x11_1 = -8
        
        x11_2 = x11_1 + i_2
    
    if (x9_4 u>= 0x18 && ((x11_2 & 0xfffffffffffffff8) + x10 + 8 u<= x20
            || x20 + ((x11_2 + 8) & 0xfffffffffffffff8) u<= x10))
        int64_t i_4 = ((x9_4 u>> 3) + 1) & 0x3ffffffffffffffc
        void* x13_1 = &x20[2]
        x9_5 = &x10[i_4]
        i_2 -= i_4 << 3
        x20 = &x20[i_4]
        void* x10_4 = &x10[2]
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            v0 = *(x10_4 - 0x10)
            v1 = *x10_4
            i_1 = i_3
            i_3 -= 4
            x10_4 += 0x20
            *(x13_1 - 0x10) = v0
            *x13_1 = v1
            x13_1 += 0x20
        while (i_1 != 4)
        
        if ((x9_4 u>> 3) + 1 != i_4)
            goto label_ce4040
    else
        x9_5 = x10
    label_ce4040:
        
        do
            int64_t x10_1 = *x9_5
            x9_5 = &x9_5[1]
            i_2 -= 8
            *x20 = x10_1
            x20 = &x20[1]
        while (i_2 u> 7)
    
    if (i_2 != 0)
        goto label_ce4054
int64_t x8_2 = *(arg1 + 0x30)

if (x8_2 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    return Botan::BLAKE2b::name() __tailcall

__builtin_memcpy(x8_2, 
    "\x08\xc9\xbc\xf3\x67\xe6\x09\x6a\x3b\xa7\xca\x84\x85\xae\x67\xbb\x2b\xf8\x94\xfe\x72\xf3\x6e\x3c\x"
"f1\x36\x1d\x5f\x3a\xf5\x4f\xa5\xd1\x82\xe6\xad\x7f\x52\x0e\x51\x1f\x6c\x3e\x2b\x8c\x68\x05\x9b\x6b"
"bd\x41\xfb\xab\xd9\x83\x1f\x79\x21\x7e\x13\x19\xcd\xe0\x5b", 
    0x40)
int64_t* x8_3 = *(arg1 + 0x30)
*x8_3 ^= 0x1010000 | (*(arg1 + 8) & 0x7f8) u>> 3
*(arg1 + 0x28) = 0
__builtin_memset(&arg1[0x48], 0, 0x20)
return result
