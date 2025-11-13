// 函数: sub_567340
// 地址: 0x567340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx = __chkstk(0x1988)
__security_cookie
void* eax_2 = sub_573400()
int32_t* eax_3

if (sub_582de0(eax_2, ecx, *(eax_2 + 4), 0x3ee).b == 0)
    void arg_cec
    memset(&arg_cec, 0, 0xc80)
    arg3 += 1
    int32_t arg_4
    __builtin_memset(&arg_4, 0, 0x24)
    var_4.q = 0
    int128_t arg_28 = 0x10.o
    int128_t arg_38 = arg1.o
    int32_t* arg_ce8 = ecx
    int128_t arg_48 = arg2.o
    void arg_60
    __builtin_memcpy(&arg_ce8, 
        sub_563960(&arg_60, 0, &arg_ce8, &arg_60, 1, 0x17, &arg_28, 5, 0, 0), 0xc84)
    
    if (arg3 != 0)
        eax_3 = arg_ce8
        
        if (eax_3 != 0)
            int32_t* var_c = eax_3
            void* eax_5 = sub_573400()
            *(eax_5 + 0xc)
            *(eax_5 + 4)
            sub_582eb0(&var_c, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
            uint32_t eax_6
            eax_6.b = 1
            CookieCheckFunction(eax_6)
            return eax_6

eax_3.b = 0
CookieCheckFunction(eax_3)
return eax_3
