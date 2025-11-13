// 函数: sub_540690
// 地址: 0x540690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x1998)
__security_cookie
int32_t var_1c = 0
void arg_70
uint32_t eax_3 = sub_5685f0(&arg_70, 0, 0x462, &arg_70, 4)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0xd3.o
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_3, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* result = sub_563c40(&arg_38, 0xe, 3)

if (result != 0)
    sub_56e9c0(1)
    var_4 = nullptr
    void* eax_4 = sub_573400()
    uint32_t edi_1 = zx.d(result.w)
    int32_t eax_5 = *(eax_4 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    result = sub_582d10(eax_5, *(edi_1 * 0x64 + eax_5 + 0x1a70), *(eax_4 + 4), result, 0x462, 0xb, 
        0x3eb, 2, *(eax_4 + 0x28), *(eax_4 + 0x2c), *(eax_4 + 0x30), 0, 0, nullptr, 0, nullptr, 
        var_4)

CookieCheckFunction(result)
return result
