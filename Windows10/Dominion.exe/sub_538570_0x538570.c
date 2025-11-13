// 函数: sub_538570
// 地址: 0x538570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebp
uint32_t var_4 = ebp
int32_t var_18 = __chkstk(0x197c)
void var_8
void arg_5c
uint32_t eax_3 =
    sub_566240(&arg_5c, sub_561e00(__security_cookie ^ &var_8, 0, 3, 0), 4, &arg_5c, &data_7bf9e4)
var_4 = 0x1c
int32_t arg_ce4[0x320]
__builtin_memcpy(&arg_ce4, eax_3, 0xc84)
void* eax_4 = sub_573400()
void arg_14
memset(&arg_14, 0, 0x48)
*(eax_4 + 0xc)
*(eax_4 + 4)
sub_580700(eax_4, &var_4, 1, &arg_14, 0, &arg_ce4, arg1, nullptr)
int32_t eax_7 = *(*(sub_573400() + 4) + 0x1504)

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    sub_61b1b0(eax_7, 7, eax_7 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

int32_t (* ebx)[0x320] = &arg_ce4
void* eax_9 = &arg_ce4[arg1]
void* arg_10 = eax_9

if (&arg_ce4 != eax_9)
    do
        int32_t esi_2 = *ebx
        uint32_t edi_1 = zx.d(esi_2.w)
        uint32_t ecx_3 = *(sub_573400() + 4)
        var_4 = ecx_3
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_3 = var_4
        
        uint32_t eax_11 = edi_1 * 0x64
        var_4 = eax_11
        char eax_12 = sub_5754f0(eax_11, *(eax_11 + ecx_3 + 0x1a4c), ecx_3, 8, 0)
        
        if (eax_12 == 0)
            void* eax_14 = *(sub_573400() + 4)
            
            if (edi_1 u>= 0x320)
                sub_591930()
            
            eax_9 = sub_5754f0(eax_14, *(var_4 + eax_14 + 0x1a4c), eax_14, 0x10, 0)
        
        if (eax_12 != 0 || eax_9.b != 0)
            void* eax_15 = sub_573400()
            int32_t ecx_5 = *(eax_15 + 4)
            
            if (edi_1 u>= 0x320)
                sub_591930()
            
            sub_582d10(eax_15, *(var_4 + ecx_5 + 0x1a70), *(eax_15 + 4), esi_2, 0x3ee, 0xb, 0x3ea, 
                3, *(eax_15 + 0x28), *(eax_15 + 0x2c), *(eax_15 + 0x30), 0, 0, nullptr, 0, nullptr, 
                nullptr)
            eax_9 = nullptr
            
            if (arg1 s> 0)
                do
                    void** edx_7 = &arg_ce4[eax_9]
                    
                    if (arg_ce4[eax_9] == esi_2)
                        int32_t ecx_9 = arg1 - 1
                        arg1 = ecx_9
                        eax_9 = arg_ce4[ecx_9]
                        *edx_7 = eax_9
                        break
                    
                    eax_9 += 1
                while (eax_9 s< arg1)
        
        ebx = &(*ebx)[1]
    while (ebx != arg_10)

uint32_t result = sub_569330(eax_9, 0x3ee, &arg_ce4, 0x18)
CookieCheckFunction(result)
return result
