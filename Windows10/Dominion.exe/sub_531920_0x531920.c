// 函数: sub_531920
// 地址: 0x531920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x1998)
__security_cookie
void* eax_2
int32_t edx
eax_2, edx = sub_573400()
int32_t* result = *(eax_2 + 0x5c)
int32_t* var_c = result

if (result s> 0)
    int32_t* i
    
    do
        void arg_70
        int32_t eax_4 = sub_568780(&arg_70, edx, 0x3ec, &arg_70)
        int64_t arg_c
        __builtin_memset(&arg_c, 0, 0x2c)
        int128_t arg_38 = 0x1e.o
        void arg_cf8
        __builtin_memcpy(&arg_cf8, eax_4, 0xc84)
        int128_t arg_48 = arg1.o
        int128_t arg_58 = arg2.o
        result, edx = sub_563c40(&arg_38, 0xe, 0)
        
        if (result != 0)
            var_4 = nullptr
            void* eax_5 = sub_573400()
            uint32_t edi_2 = zx.d(result.w)
            int32_t eax_6 = *(eax_5 + 4)
            
            if (edi_2 u>= 0x320)
                sub_591930()
            
            result, edx = sub_582d10(eax_6, *(edi_2 * 0x64 + eax_6 + 0x1a70), *(eax_5 + 4), result, 
                0x3ec, 0xb, 0x3eb, 2, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 0, 
                nullptr, 0, nullptr, var_4)
        
        i = var_c
        var_c -= 1
    while (i != 1)

CookieCheckFunction(result)
return result
