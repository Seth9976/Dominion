// 函数: sub_726140
// 地址: 0x726140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* esi = arg1
int32_t* var_9d8 = esi

if (esi[2] s< 5)
    sub_725de0(arg1)

int32_t edi = esi[3]
esi[3] = edi u>> 5
int32_t eax_5 = esi[2] - 5
esi[2] = eax_5

if (eax_5 s< 5)
    sub_725de0(esi)

int32_t ecx_1 = esi[3]
esi[3] = ecx_1 u>> 5
int32_t eax_9 = esi[2] - 5
esi[2] = eax_9

if (eax_9 s< 4)
    sub_725de0(esi)

int32_t ecx_5 = esi[3]
uint32_t eax_11 = ecx_5 u>> 4
int32_t edx_1 = esi[2] - 4
esi[3] = eax_11
void* i = nullptr
esi[2] = edx_1
int128_t var_1c
__builtin_memset(&var_1c, 0, 0x13)

if ((ecx_5 & 0xf) != 0xfffffffc)
    do
        if (edx_1 s< 3)
            sub_725de0(esi)
        
        int32_t ecx_8 = esi[3]
        int32_t eax_12 = ecx_8
        esi[2] -= 3
        ecx_8.b &= 7
        edx_1 = esi[2]
        esi[3] = eax_12 u>> 3
        eax_11 = zx.d(*(i + 0x88de7c))
        i += 1
        *(&var_1c + eax_11) = ecx_8.b
    while (i s< (ecx_5 & 0xf) + 4)

int16_t var_9c8[0x3f1]

if (sub_725b60(eax_11, &var_1c, &var_9c8, 0x13) != 0)
    int32_t ebx_1 = 0
    
    while (true)
        if (esi[2] s< 0x10)
            sub_725de0(esi)
        
        int32_t edx_3 = esi[3]
        uint32_t eax_17 = zx.d(var_9c8[edx_3 & 0x1ff])
        uint32_t eax_18
        uint32_t edx_4
        
        if (eax_17 == 0)
            eax_18, edx_4 = sub_725e20(esi, &var_9c8)
        else
            uint32_t ecx_12 = eax_17 u>> 9
            esi[2] -= ecx_12
            eax_18 = eax_17 & 0x1ff
            esi[3] = edx_3 u>> ecx_12.b
        
        if (eax_18 u> 0x12)
            break
        
        char var_1e4[0x1c8]
        uint32_t count
        
        if (eax_18 s>= 0x10)
            edx_4.b = 0
            
            if (eax_18 != 0x10)
                int32_t ecx_15 = esi[2]
                uint32_t eax_22
                
                if (eax_18 != 0x11)
                    if (ecx_15 s< 7)
                        sub_725de0(esi)
                        edx_4.b = 0
                    
                    int32_t edi_7 = esi[3]
                    esi[2] -= 7
                    eax_22 = edi_7 u>> 7
                    count = (edi_7 & 0x7f) + 0xb
                else
                    if (ecx_15 s< 3)
                        sub_725de0(esi)
                        edx_4.b = 0
                    
                    int32_t edi_5 = esi[3]
                    esi[2] -= 3
                    eax_22 = edi_5 u>> 3
                    count = (edi_5 & 7) + 3
                
                esi[3] = eax_22
            else
                if (esi[2] s< 2)
                    sub_725de0(esi)
                
                int32_t edi_3 = esi[3]
                esi[2] -= 2
                count = (edi_3 & 3) + 3
                esi[3] = edi_3 u>> 2
                
                if (ebx_1 == 0)
                    break
                
                void var_1e5
                edx_4.b = *(&var_1e5 + ebx_1)
            
            esi = var_9d8
            
            if ((ecx_1 & 0x1f) + 1 + (edi & 0x1f) + 0x101 - ebx_1 s< count)
                break
            
            memset(&var_1e4[ebx_1], zx.d(edx_4.b), count)
        else
            var_1e4[ebx_1] = eax_18.b
            count = 1
        
        ebx_1 += count
        int32_t eax_30 = (ecx_1 & 0x1f) + 1 + (edi & 0x1f) + 0x101
        
        if (ebx_1 s>= eax_30)
            if (ebx_1 == eax_30)
                int32_t eax_31 = sub_725b60(eax_30, &var_1e4, &esi[8], (edi & 0x1f) + 0x101)
                
                if (eax_31 != 0)
                    int32_t eax_32 = sub_725b60(eax_31, &var_1e4[(edi & 0x1f) + 0x101], 
                        &esi[0x201], (ecx_1 & 0x1f) + 1)
                    int32_t eax_33 = neg.d(eax_32)
                    int32_t result = neg.d(sbb.d(eax_33, eax_33, eax_32 != 0))
                    CookieCheckFunction(result)
                    return result
            
            break

CookieCheckFunction(0)
return 0
