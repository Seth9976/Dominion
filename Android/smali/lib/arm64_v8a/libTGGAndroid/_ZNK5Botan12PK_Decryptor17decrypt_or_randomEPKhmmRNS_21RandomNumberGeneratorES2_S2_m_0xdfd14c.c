// 函数: _ZNK5Botan12PK_Decryptor17decrypt_or_randomEPKhmmRNS_21RandomNumberGeneratorES2_S2_m
// 地址: 0xdfd14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_i
int64_t i_7 = entry_i
uint64_t x22 = arg7
uint8_t const* x23 = arg6
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* result_4
int64_t x8

if (arg4 == 0)
    result_4 = nullptr
    x8 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
    result_4 = result_1
    int64_t var_60
    x8 = var_60

(*(*arg5 + 0x10))(arg5, result_4, x8 - result_4)
char var_6c = 0
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
v0, v1, v2, v3, v4 = (*(*arg1 + 0x18))(arg1, &var_6c, arg2, arg3)
int64_t* entry_x8
void* x8_3 = *entry_x8
char x24_1 = var_6c
void* x25_1 = entry_x8[1] - x8_3

if (x25_1 u< arg4)
    v0, v1, v2, v3, v4 =
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x8)
else if (x25_1 u> arg4)
    entry_x8[1] = x8_3 + arg4

int64_t x10 = x25_1 ^ arg4
void* x9_4 = *entry_x8
int32_t x8_8 = (((x10 - 1) & not.q(x10)) s>> 0x3f).d & sx.d((-2 - x24_1) & x24_1) s>> 7
int64_t var_58

if (i_7 != 0)
    int64_t i
    
    do
        uint64_t x10_3 = zx.q(*x22)
        
        if (x10_3 u>= arg4)
            int64_t* x0_4 = Botan::assertion_failure("off < expected_pt_len", 
                "Offset in range of plaintext", "decrypt_or_random", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x10240)
            void* x0_5 = *entry_x8
            
            if (x0_5 != 0)
                int64_t x8_10 = entry_x8[2]
                entry_x8[1] = x0_5
                Botan::deallocate_memory(x0_5, x8_10 - x0_5, 1)
            
            void* result_3 = result_1
            
            if (result_3 != 0)
                void* result_5 = result_3
                Botan::deallocate_memory(result_3, var_58 - result_3, 1)
            
            sub_1101e04(x0_4)
            noreturn
        
        uint32_t x11_1 = zx.d(*x23)
        x23 = &x23[1]
        i = i_7
        i_7 -= 1
        x22 += 1
        uint32_t x10_5 = zx.d(*(x9_4 + x10_3)) ^ x11_1
        x8_8 &= sx.d((x10_5.b - 1) & (not.d(x10_5)).b) s>> 7
    while (i != 1)

void* result = result_1

if (arg4 != 0)
    void* i_8
    
    if (arg4 u< 8 || (x9_4 u< result + arg4 && result u< x9_4 + arg4))
        i_8 = nullptr
    label_dfd2a4:
        int64_t i_4 = arg4 - i_8
        char* x12_1 = result + i_8
        char* x9_5 = x9_4 + i_8
        int64_t i_1
        
        do
            char x13_1 = *x12_1
            x12_1 = &x12_1[1]
            i_1 = i_4
            i_4 -= 1
            *x9_5 = (*x9_5 & x8_8.b) | (x13_1 & (not.d(x8_8)).b)
            x9_5 = &x9_5[1]
        while (i_1 != 1)
    else if (arg4 u>= 0x20)
        i_8 = arg4 & 0xffffffffffffffe0
        v0.b = x8_8.b
        v0:1.b = x8_8.b
        v0:2.b = x8_8.b
        v0:3.b = x8_8.b
        v0:4.b = x8_8.b
        v0:5.b = x8_8.b
        v0:6.b = x8_8.b
        v0:7.b = x8_8.b
        v0:8.b = x8_8.b
        v0:9.b = x8_8.b
        v0:0xa.b = x8_8.b
        v0:0xb.b = x8_8.b
        v0:0xc.b = x8_8.b
        v0:0xd.b = x8_8.b
        v0:0xe.b = x8_8.b
        v0:0xf.b = x8_8.b
        void* x11_3 = x9_4 + 0x10
        void* x12_2 = result + 0x10
        void* i_5 = i_8
        void* i_2
        
        do
            v2 = *x11_3
            v3 = *(x12_2 - 0x10)
            v4 = *x12_2
            i_2 = i_5
            i_5 -= 0x20
            x12_2 += 0x20
            v1 = vbslq_s8(v0, *(x11_3 - 0x10), v3)
            v2 = vbslq_s8(v0, v2, v4)
            *(x11_3 - 0x10) = v1
            *x11_3 = v2
            x11_3 += 0x20
        while (i_2 != 0x20)
        
        if (i_8 != arg4)
            if ((arg4 & 0x18) == 0)
                goto label_dfd2a4
            
            goto label_dfd360
    else
        i_8 = nullptr
    label_dfd360:
        void* i_9 = i_8
        i_8 = arg4 & 0xfffffffffffffff8
        v0.b = x8_8.b
        v0:1.b = x8_8.b
        v0:2.b = x8_8.b
        v0:3.b = x8_8.b
        v0:4.b = x8_8.b
        v0:5.b = x8_8.b
        v0:6.b = x8_8.b
        v0:7.b = x8_8.b
        int64_t* x11_4 = x9_4 + i_9
        void* x12_3 = result + i_9
        void* i_6 = i_9 - i_8
        void* i_3
        
        do
            v1.q = *x11_4
            v2.q = *x12_3
            x12_3 += 8
            i_3 = i_6
            i_6 += 8
            *x11_4 = vbsl_s8(v0, v1, v2).q
            x11_4 = &x11_4[1]
        while (i_3 != -8)
        
        if (i_8 != arg4)
            goto label_dfd2a4
    result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_58 - result, 1)
