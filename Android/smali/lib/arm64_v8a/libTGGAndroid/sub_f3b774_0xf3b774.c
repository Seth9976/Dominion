// 函数: sub_f3b774
// 地址: 0xf3b774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x24 = *(arg1 + 8)
char* x21 = *x24
int64_t* x19 = **(arg1 + 0x10)
size_t x0_1 = strlen(x21)
void* var_70
void* var_58
void* var_48
int64_t* var_38

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    size_t var_50
    void* x22_1
    
    if (x0_1 u>= 0x17)
        uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x23_1)
        x22_1 = x0_3
        var_50 = x0_1
        var_48 = x0_3
        var_58 = x23_1 | 1
        memcpy(x22_1, x21, x0_1)
    else
        x22_1 = &var_58 | 1
        var_58.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x22_1, x21, x0_1)
    
    *(x22_1 + x0_1) = 0
    var_70.w = 0
    Botan::HashFunction::create(&var_58, &var_70)
    void* var_60
    
    if ((zx.d(var_70.b) & 1) != 0)
        operator delete(var_60)
    
    if ((zx.d(var_58.b) & 1) != 0)
        operator delete(var_48)
    
    int64_t x20_2 = x24[1]
    size_t* x22_2 = x24[2]
    (*(*x19 + 0x40))(x19)
    void* x1_3 = var_70
    int64_t var_68
    (*(*var_38 + 0x18))(var_38, x1_3, var_68 - x1_3)
    Botan::Buffered_Computation::final()
    void* x0_12
    int32_t x19_1
    
    if (x22_2 == 0)
        x19_1 = -0x1f
        x0_12 = var_58
        
        if (x0_12 == 0)
            goto label_f3b8fc
        
    label_f3b8ec:
        void* var_50_1 = x0_12
        Botan::deallocate_memory(x0_12, var_48 - x0_12, 1)
    label_f3b8fc:
        void* x0_14 = var_70
        
        if (x0_14 != 0)
            void* var_68_1 = x0_14
            operator delete(x0_14)
        
        int64_t var_38_1 = 0
        
        if (var_38 != 0)
            (*(*var_38 + 0x10))()
        
        return zx.q(x19_1)
    
    void* x1_4 = var_58
    uint64_t x2_3 = *x22_2
    size_t x8_10 = var_50 - x1_4
    *x22_2 = x8_10
    
    if (x20_2 == 0 || x2_3 u< x8_10)
        x19_1 = -0xa
        
        if (x2_3 != 0 && x20_2 != 0)
            memset(x20_2, 0, x2_3)
            x19_1 = -0xa
        
        x0_12 = var_58
        
        if (x0_12 == 0)
            goto label_f3b8fc
        
        goto label_f3b8ec
    
    if (x8_10 == 0)
        x19_1 = 0
        x0_12 = var_58
        
        if (x0_12 != 0)
            goto label_f3b8ec
        
        goto label_f3b8fc
    
    if (x1_4 != 0)
        memmove(x20_2, x1_4, x8_10)
        x19_1 = 0
        x0_12 = var_58
        
        if (x0_12 != 0)
            goto label_f3b8ec
        
        goto label_f3b8fc

int64_t* x0_17 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
void* x8_14 = var_58

if (x8_14 != 0)
    void* var_50_2 = x8_14
    Botan::deallocate_memory(x8_14, var_48 - x8_14, 1)

void* x0_19 = var_70

if (x0_19 != 0)
    void* var_68_2 = x0_19
    operator delete(x0_19)

int64_t var_38_2 = 0

if (var_38 != 0)
    (*(*var_38 + 0x10))()

sub_1101e04(x0_17)
noreturn
