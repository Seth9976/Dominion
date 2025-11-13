// 函数: _ZN5Botan8EAX_Mode9start_msgEPKhm
// 地址: 0xd20430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
int64_t entry_x2

if (((*(*arg1 + 0x68))(arg1, entry_x2) & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_16 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_16, &var_48)
    __cxa_throw(x0_16, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

int64_t x0_2 = (*(**(arg1 + 0x10) + 0x30))()
int64_t* x22 = *(arg1 + 0x20)
int64_t i_1 = x0_2 - 1

if (x0_2 != 1)
    int64_t i
    
    do
        var_48 = 0
        (*(*x22 + 0x18))(x22, &var_48, 1)
        i = i_1
        i_1 -= 1
    while (i != 1)

var_48 = 0
(*(*x22 + 0x18))(x22, &var_48, 1)
(*(*x22 + 0x18))(x22, arg2, entry_x2)
Botan::Buffered_Computation::final()
void* x0_7 = *(arg1 + 0x40)

if (x0_7 != 0)
    int64_t x8_10 = *(arg1 + 0x50)
    *(arg1 + 0x48) = x0_7
    Botan::deallocate_memory(x0_7, x8_10 - x0_7, 1)
    __builtin_memset(&arg1[0x40], 0, 0x18)

int64_t x1_5 = var_48.q
int64_t* x0_8 = *(arg1 + 0x18)
*(arg1 + 0x40) = x1_5
int128_t var_40
*(arg1 + 0x48) = var_40
(*(*x0_8 + 0x40))(x0_8, x1_5, var_40.q - x1_5)

if ((*(**(arg1 + 0x10) + 0x30))() != 1)
    int64_t x20_3 = 0
    int64_t x8_19
    
    do
        int64_t* x0_11 = *(arg1 + 0x20)
        var_48 = 0
        (*(*x0_11 + 0x18))(x0_11, &var_48, 1)
        x20_3 += 1
        x8_19 = (*(**(arg1 + 0x10) + 0x30))() - 1
    while (x20_3 != x8_19)

int64_t* x0_14 = *(arg1 + 0x20)
var_48 = 2
return (*(*x0_14 + 0x18))(x0_14, &var_48, 1)
