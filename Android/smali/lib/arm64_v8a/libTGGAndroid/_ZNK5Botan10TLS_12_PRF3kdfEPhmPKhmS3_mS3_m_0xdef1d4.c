// 函数: _ZNK5Botan10TLS_12_PRF3kdfEPhmPKhmS3_mS3_m
// 地址: 0xdef1d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* arg_0
void* fp = arg_0 + arg7
void* var_78
__builtin_memset(&var_78, 0, 0x18)
void* var_70
void* var_68

if (arg_0 != neg.q(arg7))
    void* x0_1 = Botan::allocate_memory(fp, 1)
    void* x27_1 = var_78
    size_t x2 = var_70 - x27_1
    void* fp_1 = x0_1 - x2
    
    if (x2 s>= 1)
        memcpy(fp_1, x27_1, x2)
    
    void* x8_2 = var_68
    var_78 = fp_1
    var_70 = x0_1
    var_68 = x0_1 + fp
    
    if (x27_1 != 0)
        Botan::deallocate_memory(x27_1, x8_2 - x27_1, 1)

uint64_t var_88 = arg8
void* var_80 = arg_0
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_78, &var_88)
var_88 = arg6
uint8_t const* var_80_1 = arg7
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_78, &var_88)
void* x5 = var_78
sub_deec04(arg2, arg3, *(arg1 + 8), arg4, arg5, x5, var_70 - x5)
void* x0_7 = var_78

if (x0_7 != 0)
    void* var_70_1 = x0_7
    Botan::deallocate_memory(x0_7, var_68 - x0_7, 1)

return arg3
