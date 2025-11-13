// 函数: sub_536d70
// 地址: 0x536d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x193c)
__security_cookie
void* eax_2 = sub_573400()
int32_t* ebx = *(eax_2 + 4)
uint32_t eax_3 = *(eax_2 + 0xc)
int32_t arg_cac[0x321]
void* eax_4 = sub_590990(eax_3, eax_3, ebx, 0x3ed, &arg_cac)
int32_t edi = 0

if (eax_4 s> 0)
    do
        uint32_t esi_1 = arg_cac[edi]
        void* eax_5 = sub_582de0(0, esi_1, ebx, 0x3ed)
        uint32_t arg_24
        
        if (eax_5.b == 0)
            uint32_t eax_7 = sub_590990(&arg_24, 0xffffffff, ebx, 5, &arg_24)
            
            if (eax_7 != 0)
                if (eax_7 != 1)
                    sub_591930()
                
                eax_7 = arg_24
            
            if (esi_1 == eax_7)
                eax_7 = sub_591930()
            
            eax_5 = sub_5822e0(eax_7, eax_3, ebx, esi_1, 0x11, 0x3ea, 0xb, 0, 0, 0, 0, 0, nullptr, 
                1, nullptr, nullptr)
        
        int32_t arg_ca4 = 0
        
        if (esi_1 != 0)
            arg_24 = esi_1
            arg_ca4 = 1
        
        sub_56f1a0(eax_5, &arg_24, 0x1c, 0)
        edi += 1
    while (edi s< eax_4)

sub_583350(ebx)
uint32_t result = sub_573400()
int32_t i = 0
uint32_t result_2 = result
int32_t i_1 = 0
void* ebx_1 = *(result + 4)
void* arg_1c = ebx_1

if (*(ebx_1 + 0x19b8) s> 0)
    __return_addr = ebx_1 + 0x3b568
    void* edi_1 = ebx_1 + 0x3b580
    void* arg_10 = edi_1
    var_4 = ebx_1 + 0x3b5bc
    void* esi_2 = ebx_1 + 0x3b57c
    result = ebx_1 + 0x3b5b8
    void* arg_c = esi_2
    void* ecx_5 = ebx_1 + 0x3b5b4
    uint32_t result_1 = result
    void* arg_4 = ecx_5
    
    do
        if (*ecx_5 == 3 && *result == 4)
            uint32_t ebx_2 = *esi_2
            ebx_1 = arg_1c
            i = i_1
            
            if (ebx_2 == *(result_2 + 0xc))
                int32_t eax_10 = *(ebx_1 + 0x1504)
                uint32_t esi_3 = *edi_1
                
                if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4 && eax_10 != 6)
                    uint32_t ecx_7 = ebx_2
                    
                    if (esi_3 != 0xffffffff)
                        ecx_7 = esi_3
                    
                    uint32_t var_40_1 = ecx_7
                    ecx_7.b = eax_10 == 2
                    sub_61b1b0(eax_10, 0x1c, ecx_7.b, var_40_1, 4, *var_4, nullptr, nullptr, 
                        nullptr, 0, 0, 0, 0, 0)
                    i = i_1
                
                *(ebx_1 + 0x19b8) -= 1
                i -= 1
                var_4 -= 0xa8
                result = result_1 - 0xa8
                __builtin_memcpy(__return_addr, *(ebx_1 + 0x19b8) * 0xa8 + 0x3b568 + ebx_1, 0xa8)
                ecx_5 = arg_4 - 0xa8
                esi_2 = arg_c - 0xa8
                edi_1 = arg_10 - 0xa8
                __return_addr -= 0xa8
        
        var_4 += 0xa8
        i += 1
        __return_addr += 0xa8
        ecx_5 += 0xa8
        result += 0xa8
        i_1 = i
        esi_2 += 0xa8
        arg_4 = ecx_5
        edi_1 += 0xa8
        result_1 = result
        arg_c = esi_2
        arg_10 = edi_1
    while (i s< *(ebx_1 + 0x19b8))

CookieCheckFunction(result)
return result
