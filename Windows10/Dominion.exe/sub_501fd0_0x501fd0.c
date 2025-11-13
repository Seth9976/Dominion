// 函数: sub_501fd0
// 地址: 0x501fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1988)
__security_cookie
uint32_t var_c = ecx
void arg_60
uint32_t result = sub_568780(&arg_60, edx, 0x3ea, &arg_60)
int32_t arg_ce8[0x320]
__builtin_memcpy(&arg_ce8, result, 0xc84)

if (arg3 s>= 5)
    int32_t arg_4
    __builtin_memset(&arg_4, 0, 0x24)
    var_4.q = 0
    int128_t arg_28 = 0xe9.o
    int128_t arg_38 = arg1.o
    int128_t arg_48 = arg2.o
    int32_t* eax_3 = sub_563c40(&arg_28, 0xa, 0)
    int32_t edx_2 = arg3
    int32_t ecx_1 = 0
    bool cond:0_1 = edx_2 == 0
    
    if (edx_2 s> 0)
        do
            if (arg_ce8[ecx_1] == eax_3)
                arg3 = edx_2 - 1
                arg_ce8[ecx_1] = arg_ce8[edx_2 - 1]
                edx_2 = arg3
                break
            
            ecx_1 += 1
        while (ecx_1 s< edx_2)
        
        cond:0_1 = edx_2 == 0
    
    if (not(cond:0_1))
        void* eax_5 = sub_573400()
        sub_579560(eax_5, &arg_ce8, *(eax_5 + 4), 0x3ea, *(eax_5 + 0x28), *(eax_5 + 0x2c), 
            *(eax_5 + 0x30), 0x3ee, &data_7bfad0, 0)
    
    void* eax_6
    int32_t ecx_3
    eax_6, ecx_3 = sub_573400()
    arg_4 = 0
    int32_t var_1c_1 = ecx_3
    var_4.q = 0
    int32_t eax_7 = *(eax_6 + 0xc)
    int64_t arg_c
    __builtin_memset(&arg_c, 0, 0x1c)
    uint32_t eax_8 = var_c
    arg_28 = 0x11.o
    arg_38 = eax_7.o
    arg_48 = arg2.o
    uint32_t eax_9 = sub_563b20(eax_8, 0x17, &arg_ce8, *eax_8, &arg_28, 6)
    int32_t ecx_5 = 0
    
    if (arg3 s> 0)
        do
            if (arg_ce8[ecx_5] == eax_9)
                int32_t eax_11 = arg3 - 1
                arg3 = eax_11
                arg_ce8[ecx_5] = arg_ce8[eax_11]
                break
            
            ecx_5 += 1
        while (ecx_5 s< arg3)
    
    void* eax_13
    int32_t ecx_6
    eax_13, ecx_6 = sub_573400()
    int32_t var_1c_2 = ecx_6
    result = sub_579750(eax_13, &arg_ce8, *(eax_13 + 4), 0x3ea)
    var_c = eax_9
    
    if (eax_9 != 0)
        void* eax_14 = sub_573400()
        *(eax_14 + 0xc)
        *(eax_14 + 4)
        result = sub_582eb0(&var_c, 1, 0x3ee, 0x14, 7, 0, 0, 0, nullptr, nullptr)

CookieCheckFunction(result)
return result
