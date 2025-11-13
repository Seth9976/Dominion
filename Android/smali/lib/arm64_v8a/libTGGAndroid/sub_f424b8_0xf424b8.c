// 函数: sub_f424b8
// 地址: 0xf424b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = operator new(0x18)
uint8_t* x0_1 = operator new(0x20)
char* x25 = *(arg1 + 0x20)
uint64_t x22 = *(arg1 + 0x10)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x23 = *(arg1 + 0x18)
size_t x0_3 = strlen(x25)
int64_t var_88
void* var_78

if (x0_3 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x26_1
    
    if (x0_3 u>= 0x17)
        uint64_t x27_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
        void* x0_5 = operator new(x27_1)
        x26_1 = x0_5
        size_t var_80_1 = x0_3
        var_78 = x0_5
        var_88 = x27_1 | 1
        memcpy(x26_1, x25, x0_3)
    else
        x26_1 = &var_88 | 1
        var_88.b = (x0_3.d << 1).b
        
        if (x0_3 != 0)
            memcpy(x26_1, x25, x0_3)
    
    *(x26_1 + x0_3) = 0
    *(arg1 + 0x28)
    int64_t x24_2 = *(arg1 + 0x30)
    Botan::HOTP::HOTP(x0_1, x22, x23, &var_88)
    int128_t v0_1 = data_71bd20
    *(x0_1 + 0x10) = x24_2
    int64_t var_60_1 = 0
    int128_t var_70_1 = v0_1
    int64_t x0_8 = Botan::calendar_point::to_std_timepoint()
    int64_t x8_4 = *(x0_1 + 0x10)
    *(x0_1 + 0x18) = x0_8
    
    if (x8_4 - 1 u< 0x12b)
        x0[2] = x0_1
        x0[1].d = 0x3d9d2cd1
        *x0 = _vtable_for_botan_totp_struct + 0x10
        **(arg1 + 8) = x0
        
        if ((zx.d(var_88.b) & 1) != 0)
            operator delete(var_78)
        
        return 0

int64_t* x0_11 = Botan::throw_invalid_argument("Invalid TOTP time step", "TOTP", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
int64_t* x0_12 = *x0_1
*x0_1 = 0

if (x0_12 != 0)
    (*(*x0_12 + 0x10))()

if ((zx.d(var_88.b) & 1) != 0)
    operator delete(var_78)

operator delete(x0_1)
operator delete(x0)
sub_1101e04(x0_11)
noreturn
