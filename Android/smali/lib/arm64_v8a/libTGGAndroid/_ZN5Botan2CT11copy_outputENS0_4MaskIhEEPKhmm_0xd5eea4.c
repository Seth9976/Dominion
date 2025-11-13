// 函数: _ZN5Botan2CT11copy_outputENS0_4MaskIhEEPKhmm
// 地址: 0xd5eea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8

if (arg3 == 0)
    __builtin_memset(entry_x8, 0, 0x18)
    return 

char* var_58
__builtin_memset(&var_58, 0, 0x18)

if ((arg3 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    char* x8_5 = var_58
    
    if (x8_5 != 0)
        char* var_50_2 = x8_5
        int64_t var_48
        Botan::deallocate_memory(x8_5, var_48 - x8_5, 1)
    
    sub_1101e04(x0_3)
    noreturn

int32_t x20_1 = arg1.d
char* x0_1 = Botan::allocate_memory(arg3, 1)
uint64_t x8 = arg4 ^ arg3
void* x25_1 = &x0_1[arg3]
int64_t x24_1 = (x8 & ((((arg3 - arg4) ^ arg3) | x8) ^ arg3) s>> 0x3f) ^ arg4
int64_t x23_2 = arg3 - x24_1
var_58 = x0_1
int128_t v0_1
int128_t v1_1
int128_t v2_1
arg1, v0_1, v1_1, v2_1 = memset(x0_1, 0, arg3)
int64_t x8_2 = 0

do
    int64_t x10_1 = x8_2
    
    do
        char* x12_1 = var_58
        char x11_1 = arg2[x10_1]
        int64_t x13_1 = x10_1 ^ (x8_2 + x24_1)
        x10_1 += 1
        x12_1[x8_2] |= x11_1 & (((x13_1 - 1) & not.q(x13_1)) s>> 0x3f).b
    while (arg3 != x10_1)
    
    x8_2 += 1
while (x8_2 != arg3)

char* x8_3 = var_58
void* x9_6 = x25_1
int64_t x11_4 = x9_6 - x8_3
bool cond:2_1

if (x9_6 != x8_3)
    char x10_2 = (not.d(x20_1)).b
    void* i_6
    
    if (x11_4 u< 8)
        i_6 = nullptr
    label_d5f030:
        char* x8_4 = i_6 + x8_3
        void* i_3 = x8_4 - x9_6
        void* i
        
        do
            i = i_3
            i_3 += 1
            *x8_4 &= x10_2
            x8_4 = &x8_4[1]
        while (i u< -1)
    else if (x11_4 u>= 0x20)
        i_6 = x11_4 & 0xffffffffffffffe0
        v0_1.b = x10_2
        v0_1:1.b = x10_2
        v0_1:2.b = x10_2
        v0_1:3.b = x10_2
        v0_1:4.b = x10_2
        v0_1:5.b = x10_2
        v0_1:6.b = x10_2
        v0_1:7.b = x10_2
        v0_1:8.b = x10_2
        v0_1:9.b = x10_2
        v0_1:0xa.b = x10_2
        v0_1:0xb.b = x10_2
        v0_1:0xc.b = x10_2
        v0_1:0xd.b = x10_2
        v0_1:0xe.b = x10_2
        v0_1:0xf.b = x10_2
        void* x13_4 = &x8_3[0x10]
        void* i_4 = i_6
        void* i_1
        
        do
            i_1 = i_4
            i_4 -= 0x20
            v2_1 = *x13_4 & v0_1
            *(x13_4 - 0x10) &= v0_1
            *x13_4 = v2_1
            x13_4 += 0x20
        while (i_1 != 0x20)
        
        if (x11_4 != i_6)
            if ((x11_4 & 0x18) == 0)
                goto label_d5f030
            
            goto label_d5f000
    else
        i_6 = nullptr
    label_d5f000:
        void* i_7 = i_6
        i_6 = x11_4 & 0xfffffffffffffff8
        v0_1.b = x10_2
        v0_1:1.b = x10_2
        v0_1:2.b = x10_2
        v0_1:3.b = x10_2
        v0_1:4.b = x10_2
        v0_1:5.b = x10_2
        v0_1:6.b = x10_2
        v0_1:7.b = x10_2
        void* x13_5 = x8_3 + i_7
        void* i_5 = i_7 - i_6
        void* i_2
        
        do
            v1_1.q = *x13_5
            i_2 = i_5
            i_5 += 8
            *x13_5 = (v1_1 & v0_1).q
            x13_5 += 8
        while (i_2 != -8)
        
        if (x11_4 != i_6)
            goto label_d5f030
    x8_3 = var_58
    x9_6 = x25_1
    void* x10_4 = x9_6 - x8_3
    cond:2_1 = x23_2 u< x10_4
    
    if (x23_2 u<= x10_4)
        goto label_d5efac
    
    goto label_d5f060

cond:2_1 = x23_2 u< 0
void* x9_7

if (x23_2 u> 0)
label_d5f060:
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_58)
    x8_3 = var_58
    x9_7 = x25_1
else
label_d5efac:
    
    if (cond:2_1)
        x9_7 = &x8_3[x23_2]
    else
        x9_7 = x9_6

*entry_x8 = x8_3
entry_x8[1] = x9_7
entry_x8[2] = x25_1
