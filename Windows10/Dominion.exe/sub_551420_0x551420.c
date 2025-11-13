// 函数: sub_551420
// 地址: 0x551420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x1988)
__security_cookie
void arg_60
uint32_t result = sub_566240(&arg_60, edx, 5, &arg_60, &data_7bfa44)
int32_t arg_ce8[0x320]
__builtin_memcpy(&arg_ce8, result, 0xc84)

if (arg2 != 0)
    void* eax_3 = sub_573400()
    int32_t arg_4 = 0
    var_4.q = 0
    int64_t arg_c
    __builtin_memset(&arg_c, 0, 0x1c)
    int32_t eax_4 = *(eax_3 + 0xc)
    int128_t arg_28 = 0x11.o
    int128_t arg_38 = eax_4.o
    int128_t arg_48 = arg1.o
    void* eax_5 = sub_573400()
    void* ecx_1 = *(eax_5 + 4)
    void* var_1c_1 = ecx_1
    uint32_t eax_10 = sub_563b20(&arg_28, 0x17, &arg_ce8, 
        mods.dp.d(sx.q(*(eax_5 + 0xc) + 1), *(ecx_1 + 0xd38)), &arg_28, 6)
    uint32_t eax_11 = arg2
    int32_t ecx_3 = 0
    
    if (eax_11 s> 0)
        do
            if (arg_ce8[ecx_3] == eax_10)
                arg2 = eax_11 - 1
                eax_11 = arg_ce8[eax_11 - 1]
                arg_ce8[ecx_3] = eax_11
                break
            
            ecx_3 += 1
        while (ecx_3 s< eax_11)
    
    uint32_t var_c = eax_10
    
    if (eax_10 != 0)
        void* eax_13 = sub_573400()
        *(eax_13 + 0xc)
        *(eax_13 + 4)
        eax_11 = sub_582eb0(&var_c, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
    
    result = sub_566140(eax_11, 0x3ee, &arg_ce8, 0x3ea, 3, 0, 0xb, nullptr, nullptr)

CookieCheckFunction(result)
return result
