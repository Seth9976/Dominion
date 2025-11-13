// 函数: sub_5363d0
// 地址: 0x5363d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x1988)
__security_cookie
void arg_60
uint32_t eax_3 = sub_566320(&arg_60, edx, 1, &arg_60)
int32_t arg_ce8
int32_t ecx = __builtin_memcpy(&arg_ce8, eax_3, 0xc84)

if (arg2 != 0)
    int32_t edi_1 = arg_ce8
    
    if (edi_1 != 0)
        int32_t arg_4 = 0
        var_4.q = 0
        int64_t arg_c
        __builtin_memset(&arg_c, 0, 0x1c)
        int128_t arg_28 = 0x5a.o
        int32_t var_1c_1 = ecx
        int128_t arg_38 = edi_1.o
        int128_t arg_48 = arg1.o
        
        if (sub_569720(&arg_28, 0x3eb, edi_1, 0x3ec, &arg_28) == 0x3eb)
            void* eax_6 = sub_573400()
            void arg_cec
            int32_t eax_7 = memset(&arg_cec, 0, 0xc80)
            int32_t* ecx_2 = *(eax_6 + 4)
            arg2 += 1
            arg_ce8 = edi_1
            void* eax_8 = sub_579750(eax_7, &arg_ce8, ecx_2, 0x3eb)
            CookieCheckFunction(eax_8)
            return eax_8
        
        int32_t var_c = edi_1
        void* eax_9 = sub_573400()
        *(eax_9 + 0xc)
        *(eax_9 + 4)
        eax_3 = sub_582eb0(&var_c, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

CookieCheckFunction(eax_3)
return eax_3
