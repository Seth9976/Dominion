// 函数: sub_545cc0
// 地址: 0x545cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int32_t var_1c = __chkstk(0x1998)
int32_t var_20 = 0
void var_10
uint32_t result
int32_t edx
result, edx = sub_568960(__security_cookie ^ &var_10, 0, 0x3ea, 0)

if (result s>= 4)
    int64_t arg_c
    __builtin_memset(&arg_c, 0, 0x2c)
    int128_t arg_38 = 0x17.o
    int128_t arg_48 = arg1.o
    int128_t arg_58 = arg2.o
    void arg_70
    void arg_cf8
    __builtin_memcpy(&arg_cf8, sub_568780(&arg_70, edx, 0x3ea, &arg_70), 0xc84)
    int32_t* eax_4 = sub_563c40(&arg_38, 0xe, 0)
    var_4 = nullptr
    void* eax_5 = sub_573400()
    int32_t eax_6 = *(eax_5 + 4)
    uint32_t eax_7 = zx.d(eax_4.w)
    
    if (eax_7 u>= 0x320)
        sub_591930()
    
    result = sub_582d10(eax_6, *(eax_7 * 0x64 + eax_6 + 0x1a70), *(eax_5 + 4), eax_4, 0x3ea, 0xb, 
        0x3eb, 4, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 0, nullptr, 0, nullptr, 
        var_4)

CookieCheckFunction(result)
return result
