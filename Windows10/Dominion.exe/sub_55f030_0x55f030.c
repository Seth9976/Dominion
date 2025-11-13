// 函数: sub_55f030
// 地址: 0x55f030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
int32_t edx = __chkstk(0x19a8)
__security_cookie
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48 = 0x3d.o
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
void arg_80
void arg_d08
__builtin_memcpy(&arg_d08, sub_568780(&arg_80, edx, 0x3ea, &arg_80), 0xc84)
int32_t* eax_4 = sub_563c40(&arg_48, 0x13, 0)
void* var_4 = nullptr
uint32_t eax_5 = sub_56b800()
void* eax_6 = sub_573400()
int32_t eax_7 = *(eax_6 + 4)
uint32_t eax_8 = eax_5
uint32_t ecx = zx.d(eax_8.w)

if (ecx u>= 0x320)
    sub_591930()
    eax_8 = eax_5

uint32_t result = sub_582d10(eax_7, *(ecx * 0x64 + eax_7 + 0x1a70), *(eax_6 + 4), eax_8, 0x3e9, 
    0xb, 0x460, nullptr, *(eax_6 + 0x28), *(eax_6 + 0x2c), *(eax_6 + 0x30), 0, 0, nullptr, 0, 
    nullptr, var_4)

if (eax_4 != 0)
    var_4 = nullptr
    void* eax_10 = sub_573400()
    uint32_t edi_1 = zx.d(eax_4.w)
    int32_t eax_11 = *(eax_10 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    result = sub_582d10(eax_11, *(edi_1 * 0x64 + eax_11 + 0x1a70), *(eax_10 + 4), eax_4, 0x3ea, 
        0xb, 0x460, nullptr, *(eax_10 + 0x28), *(eax_10 + 0x2c), *(eax_10 + 0x30), 0, 0, nullptr, 
        0, var_4, nullptr)

CookieCheckFunction(result)
return result
