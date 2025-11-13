// 函数: sub_507530
// 地址: 0x507530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1998)
__security_cookie
int32_t var_1c = 0
void arg_70
uint32_t eax_3 = sub_5685f0(&arg_70, 0, 0x3ea, &arg_70, 8)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0x20.o
int32_t* arg_cf8
__builtin_memcpy(&arg_cf8, eax_3, 0xc84)
int128_t arg_48 = arg2.o
int128_t arg_58 = arg3.o
int32_t* eax_4 = sub_563c40(&arg_38, 0xe, 0)

if (eax_4 == 0)
    sub_56e9c0(nullptr)
    uint32_t eax_14 = sub_566800(arg1)
    CookieCheckFunction(eax_14)
    return eax_14

sub_5669b0(eax_4, 0x3ee, eax_4, 0)
int32_t eax_7 = *(*(sub_573400() + 4) + 0x1504)

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    sub_61b1b0(eax_7, 7, eax_7 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

sub_56e9c0(1)
void* __saved_ebp = nullptr
void* eax_8 = sub_573400()
int32_t eax_9 = *(eax_8 + 4)
uint32_t eax_10 = zx.d(eax_4.w)

if (eax_10 u>= 0x320)
    sub_591930()

uint32_t eax_12 = sub_582d10(eax_9, *(eax_10 * 0x64 + eax_9 + 0x1a70), *(eax_8 + 4), eax_4, 0x3ee, 
    0xb, 0x3eb, 2, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, nullptr, 
    __saved_ebp)
arg_cf8 = eax_4
int32_t arg_1978 = 1
int32_t eax_13 = sub_56f1a0(eax_12, &arg_cf8, 0x1b, 0)
CookieCheckFunction(eax_13)
return eax_13
