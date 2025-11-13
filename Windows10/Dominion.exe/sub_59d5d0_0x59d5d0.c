// 函数: sub_59d5d0
// 地址: 0x59d5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = arg5
int32_t* ecx = arg4
int32_t var_ca0 = ebx
*(arg3 + 0x10) = data_1597e48
*(arg3 + 0x14) = 0

if (ebx != 0)
    *(arg3 + 0xc) = *ecx

int32_t esi = 0
int32_t var_c90[0x321]

if (ebx s> 0)
    void* edx_1 = arg2
    
    do
        uint32_t edi_1 = zx.d(ecx[esi].w)
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx = arg4
            edx_1 = arg2
        
        var_c90[esi] = *(edi_1 * 0x64 + edx_1 + 0x1a4c)
        esi += 1
    while (esi s< ebx)

uint32_t result = arg6

if (result != 0x30 && result != 2)
    void* var_c94
    var_c94.b = 0
    int32_t eax_7 = ebx << 2 s>> 2
    result = sub_4f6c30(eax_7, &var_c90[ebx], &var_c90, eax_7, var_c94)

uint32_t* ecx_3 = nullptr
int32_t edi_2 = 0

if (ebx s> 0)
    int32_t* edx_3 = 4
    
    do
        if (ecx_3 != 0)
            result = *ecx_3
        
        if (ecx_3 == 0 || result != var_c90[edi_2])
            int32_t eax_13 = data_1597e48
            int32_t ecx_4 = data_1597e4c
            int32_t* ebx_1
            
            if (eax_13 s< ecx_4)
                ebx_1 = data_1597e44
            else
                int32_t edx_4 = 0x10
                int32_t var_c94_1 = 0x10
                
                if (ecx_4 != 0)
                    edx_4 = ecx_4 * 2
                    var_c94_1 = edx_4
                
                ebx_1 = sub_64c020(edx_4 << 3)
                int32_t eax_10 = data_1597e44
                
                if (eax_10 != 0)
                    memcpy(ebx_1, eax_10, eax_13 << 3)
                    sub_64c080(data_1597e44, data_1597e4c << 3)
                
                data_1597e4c = var_c94_1
                eax_13 = data_1597e48
                data_1597e44 = ebx_1
            
            data_1597e48 = eax_13 + 1
            ecx_3 = &ebx_1[eax_13 * 2]
            ebx = var_ca0
            edx_3 = &ecx_3[1]
            *ecx_3 = var_c90[edi_2]
            result = arg3
            *edx_3 = 1
            *(result + 0x14) += 1
        else
            *edx_3 += 1
        
        edi_2 += 1
    while (edi_2 s< ebx)

CookieCheckFunction(result)
return result
