// 函数: sub_545200
// 地址: 0x545200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int32_t edx = __chkstk(0x1998)
__security_cookie
void arg_70
int32_t eax_3 = sub_568780(&arg_70, edx, 0x3ec, &arg_70)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0x1e.o
int32_t arg_cf8
__builtin_memcpy(&arg_cf8, eax_3, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* result = sub_563960(&arg_70, 0, &arg_cf8, &arg_70, 1, 0x10, &arg_38, 0xe, 0, 0)
__builtin_memcpy(&arg_cf8, result, 0xc84)

if (arg3 != 0)
    int32_t edi_1 = arg_cf8
    
    if (edi_1 != 0)
        var_4 = nullptr
        void* eax_5 = sub_573400()
        int32_t eax_6 = *(eax_5 + 4)
        uint32_t eax_7 = zx.d(edi_1.w)
        
        if (eax_7 u>= 0x320)
            sub_591930()
        
        result = sub_582d10(eax_6, *(eax_7 * 0x64 + eax_6 + 0x1a70), *(eax_5 + 4), edi_1, 0x3ec, 
            0xb, 0x3eb, 2, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 0, nullptr, 0, 
            nullptr, var_4)

CookieCheckFunction(result)
return result
