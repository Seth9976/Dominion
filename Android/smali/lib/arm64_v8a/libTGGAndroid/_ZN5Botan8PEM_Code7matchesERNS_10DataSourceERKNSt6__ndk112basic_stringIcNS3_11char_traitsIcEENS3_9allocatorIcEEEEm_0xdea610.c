// 函数: _ZN5Botan8PEM_Code7matchesERNS_10DataSourceERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEm
// 地址: 0xdea610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "-----BEGIN ", arg2)
void* var_60_1
__builtin_memset(&var_60_1, 0, 0x18)
void* var_50_1
void* x21
void* x22

if (arg3 == 0)
    x22 = nullptr
    x21 = nullptr
else
    if ((arg3 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x0_1 = Botan::allocate_memory(arg3, 1)
    x22 = x0_1 + arg3
    x21 = x0_1
    var_60_1 = x0_1
    var_50_1 = x22
    memset(x0_1, 0, arg3)
    void* var_58_1 = x22

int64_t x0_3 = (*(*arg1 + 0x10))(arg1, x21, x22 - x21, 0)
char var_48[0x8]
uint64_t x9 = zx.q(var_48[0])
int32_t x8_2 = x9.d & 1
uint64_t x11 = x9 u>> 1
uint64_t var_40
uint64_t x9_1

x9_1 = x8_2 == 0 ? x11 : var_40

void* var_38
int32_t x19_1
void* x0_4

if (x0_3 u< x9_1)
    x19_1 = 0
    x0_4 = var_60_1
    
    if (x0_4 != 0)
    label_dea780:
        void* var_58_2 = x0_4
        Botan::deallocate_memory(x0_4, var_50_1 - x0_4, 1)
        x8_2 = zx.d(var_48[0]) & 1
else if (x0_3 == 0)
    x19_1 = 0
    x0_4 = var_60_1
    
    if (x0_4 != 0)
        goto label_dea780
else
    char* x9_2 = var_60_1
    
    if ((x8_2 & 0xff) != 0)
        int64_t x11_1 = 0
        int64_t i_3 = x0_3 - 1
        int64_t i
        
        do
            uint32_t x14_2 = zx.d(*x9_2)
            x9_2 = &x9_2[1]
            
            if (x14_2 != zx.d(*(var_38 + x11_1)))
                x11_1 = 0
            else
                x11_1 += 1
            
            if (x11_1 == var_40)
                break
            
            i = i_3
            i_3 -= 1
        while (i != 0)
        x19_1 = (x11_1 != var_40 ? 1 : 0) ^ 1
        x0_4 = var_60_1
        
        if (x0_4 != 0)
            goto label_dea780
    else
        int64_t x10_1 = 0
        int64_t i_2 = x0_3 - 1
        int64_t i_1
        
        do
            uint32_t x14_1 = zx.d(*x9_2)
            x9_2 = &x9_2[1]
            
            if (x14_1 != zx.d(var_48[x10_1 + 1]))
                x10_1 = 0
            else
                x10_1 += 1
            
            if (x10_1 == x11)
                break
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 0)
        x19_1 = (x10_1 != x11 ? 1 : 0) ^ 1
        x0_4 = var_60_1
        
        if (x0_4 != 0)
            goto label_dea780

if ((x8_2 & 0xff) != 0)
    operator delete(var_38)

return zx.q(x19_1)
