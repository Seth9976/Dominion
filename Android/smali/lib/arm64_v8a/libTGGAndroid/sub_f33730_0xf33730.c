// 函数: sub_f33730
// 地址: 0xf33730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x1 = *(arg1 + 8)
*(arg1 + 0x10)
void* var_48
__builtin_memset(&var_48, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(&var_48, x1)
int64_t x21 = *(arg1 + 0x18)
uint64_t x20 = *(arg1 + 0x20)
void* var_60
__builtin_memset(&var_60, 0, 0x18)

if (x20 == 0)
    goto label_f337a0

void* var_78
int64_t var_68
void* var_50_1
int64_t var_38

if ((x20 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x0_2 = Botan::allocate_memory(x20, 1)
    void* x22_1 = x0_2 + x20
    var_60 = x0_2
    void* var_58_1 = x0_2
    var_50_1 = x22_1
    memcpy(x0_2, x21, x20)
    void* var_58_2 = x22_1
label_f337a0:
    Botan::rfc3394_keyunwrap(&var_60, &var_48)
    int64_t* x9_1 = *(arg1 + 0x30)
    void* x0_5
    int32_t x19_1
    
    if (x9_1 == 0)
        x19_1 = -0x1f
        x0_5 = var_78
        
        if (x0_5 == 0)
            goto label_f33830
        
    label_f33820:
        void* var_70_1 = x0_5
        Botan::deallocate_memory(x0_5, var_68 - x0_5, 1)
    label_f33830:
        void* x0_6 = var_60
        
        if (x0_6 != 0)
            void* var_58_3 = x0_6
            Botan::deallocate_memory(x0_6, var_50_1 - x0_6, 1)
        
        void* x0_7 = var_48
        
        if (x0_7 != 0)
            void* var_40_1 = x0_7
            Botan::deallocate_memory(x0_7, var_38 - x0_7, 1)
        
        return zx.q(x19_1)
    
    int64_t x0_4 = *(arg1 + 0x28)
    size_t x2_2 = *x9_1
    int64_t var_70
    size_t x8_2 = var_70 - var_78
    *x9_1 = x8_2
    
    if (x0_4 == 0 || x2_2 u< x8_2)
        x19_1 = -0xa
        
        if (x2_2 != 0 && x0_4 != 0)
            memset(x0_4, 0, x2_2)
            x19_1 = -0xa
        
        x0_5 = var_78
        
        if (x0_5 == 0)
            goto label_f33830
        
        goto label_f33820
    
    if (x8_2 == 0)
        x19_1 = 0
        x0_5 = var_78
        
        if (x0_5 != 0)
            goto label_f33820
        
        goto label_f33830
    
    if (var_78 != 0)
        memmove(x0_4, var_78, x8_2)
        x19_1 = 0
        x0_5 = var_78
        
        if (x0_5 != 0)
            goto label_f33820
        
        goto label_f33830

int64_t* x0_9 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if (var_78 != 0)
    void* var_70_2 = var_78
    Botan::deallocate_memory(var_78, var_68 - var_78, 1)

void* x0_11 = var_60

if (x0_11 != 0)
    void* var_58_4 = x0_11
    Botan::deallocate_memory(x0_11, var_50_1 - x0_11, 1)

void* x0_12 = var_48

if (x0_12 != 0)
    void* var_40_2 = x0_12
    Botan::deallocate_memory(x0_12, var_38 - x0_12, 1)

sub_1101e04(x0_9)
noreturn
