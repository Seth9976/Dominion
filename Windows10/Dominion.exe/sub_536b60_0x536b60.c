// 函数: sub_536b60
// 地址: 0x536b60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x1998)
__security_cookie
void* eax_2 = sub_573400()
uint32_t result
int32_t edx_1
result, edx_1 = sub_576b30(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 4, 0, 0, 0)

if (result s> 0)
    int64_t arg_c
    __builtin_memset(&arg_c, 0, 0x2c)
    int128_t arg_38 = 0x30.o
    int128_t arg_48 = arg1.o
    int128_t arg_58 = arg2.o
    void arg_70
    int32_t arg_cf8
    __builtin_memcpy(&arg_cf8, sub_568780(&arg_70, edx_1, 0x3ea, &arg_70), 0xc84)
    int32_t* eax_5 = sub_563c40(&arg_38, 0x10, 0)
    void* eax_6 = sub_573400()
    void* ecx_1 = *(eax_6 + 4)
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(*(eax_6 + 0xc) + 1)
    int32_t temp1_1 = mods.dp.d(edx_3:eax_9, *(ecx_1 + 0xd38))
    int32_t esi_2 = temp1_1
    
    if (sub_576b30(divs.dp.d(edx_3:eax_9, *(ecx_1 + 0xd38)), temp1_1, ecx_1, 4, 0, 0, 0) s<= 0)
        uint32_t i
        
        do
            void* ecx_2 = *(eax_6 + 4)
            int32_t eax_13
            int32_t edx_5
            edx_5:eax_13 = sx.q(esi_2 + 1)
            int32_t temp1_2 = mods.dp.d(edx_5:eax_13, *(ecx_2 + 0xd38))
            esi_2 = temp1_2
            i = sub_576b30(divs.dp.d(edx_5:eax_13, *(ecx_2 + 0xd38)), temp1_2, ecx_2, 4, 0, 0, 0)
        while (i s<= 0)
    
    void* eax_15 = sub_573400()
    int32_t ecx_3 = *(eax_15 + 0xc)
    int32_t* edi_2 = *(eax_15 + 4)
    var_4 = nullptr
    
    if (sub_582de0(0, eax_5, edi_2, 0x3ea) == 0)
        int32_t eax_18 = sub_590990(&arg_cf8, 0xffffffff, edi_2, 5, &arg_cf8)
        int32_t ecx_6
        
        if (eax_18 != 0)
            if (eax_18 != 1)
                sub_591930()
            
            ecx_6 = arg_cf8
        else
            ecx_6 = 0
        
        int32_t* eax_19 = eax_5
        
        if (eax_19 == ecx_6)
            sub_591930()
            eax_19 = eax_5
        
        sub_5822e0(eax_19, esi_2, edi_2, eax_19, 0x10, 0x3ed, 0xa, 0, 0, 0, 1, 0, nullptr, 0, 
            nullptr, var_4)
    
    uint32_t esi_3 = zx.d(eax_5.w)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    result = esi_3 * 0x64
    *(result + edi_2 + 0x1a74) = ecx_3

CookieCheckFunction(result)
return result
