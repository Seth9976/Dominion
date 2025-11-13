// 函数: sub_557e60
// 地址: 0x557e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int32_t edx = __chkstk(0x1998)
__security_cookie
void arg_70
int32_t eax_3 = sub_568780(&arg_70, edx, 0x44d, &arg_70)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0xbd.o
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_3, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* result = sub_563c40(&arg_38, 0xe, 0)

if (result != 0)
    var_4 = nullptr
    void* eax_4 = sub_573400()
    uint32_t edi_1 = zx.d(result.w)
    int32_t eax_5 = *(eax_4 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    result = sub_582d10(eax_5, *(edi_1 * 0x64 + eax_5 + 0x1a70), *(eax_4 + 4), result, 0x44d, 0xb, 
        0x44f, 4, *(eax_4 + 0x28), *(eax_4 + 0x2c), *(eax_4 + 0x30), 0, 0, nullptr, 0, nullptr, 
        var_4)

CookieCheckFunction(result)
return result
