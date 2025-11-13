// 函数: sub_75fb20
// 地址: 0x75fb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = __chkstk(0x100c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi = 0
int32_t var_100c = 0
sub_75ae50(ecx)
int32_t i = 0
int32_t var_1008[0x3fc]

if (*(ecx + 0x1c) s> 0)
    void* ecx_1 = ecx + 0x1e14
    void* edx_1 = ecx + 0x50
    
    do
        void* ebx = *edx_1
        
        if (ebx != 0)
            int32_t ebx_1 = *(ebx + 0x10)
            
            if ((ebx_1.b & 8) != 0)
                var_1008[edi] = i
                edi += 1
                *ecx_1 = ebx_1
        
        i += 1
        edx_1 += 4
        ecx_1 += 0x68
    while (i s< *(ecx + 0x1c))
    
    var_100c = edi

sub_75ec70(ecx)
sub_75fcb0(ecx, ecx, edi, &var_1008, edi)
sub_75ae50(ecx)
int32_t ebx_2 = 0

if (edi s> 0)
    int32_t eax_2 = var_100c
    
    do
        int32_t ecx_5 = var_1008[ebx_2]
        int32_t edx_2 = ecx_5 * 0x68
        void* edi_1 = *(ecx + (ecx_5 << 2) + 0x50)
        
        if (edi_1 != 0)
            sub_761000(ecx, ecx_5)
            sub_7610d0(ecx, var_1008[ebx_2])
            *(edi_1 + 0x18) = *(edx_2 + ecx + 0x1df4)
            *(edi_1 + 0x1c) = *(edx_2 + ecx + 0x1df8)
            *(edi_1 + 0x20) = *(edx_2 + ecx + 0x1dfc)
            *(edi_1 + 0x24) = *(edx_2 + ecx + 0x1e00)
            *(edi_1 + 0x28) = *(edx_2 + ecx + 0x1e04)
            *(edi_1 + 0x2c) = *(edx_2 + ecx + 0x1e08)
            *(edi_1 + 0x30) = *(edx_2 + ecx + 0x1e0c)
            *(edi_1 + 0x34) = *(edx_2 + ecx + 0x1e10)
            int32_t eax_11 = *(edi_1 + 0x10)
            
            if (0.00100000005f f<= *(edi_1 + 0x3c))
                *(edi_1 + 0x10) = eax_11 & 0xffffffdf
            else
                int32_t eax_12 = eax_11 | 0x20
                *(edi_1 + 0x10) = eax_12
                
                if ((eax_12.b & 0x40) != 0)
                    sub_760f30(ecx, var_1008[ebx_2])
            
            eax_2 = var_100c
        
        ebx_2 += 1
    while (ebx_2 s< eax_2)

*(ecx + 0x1cdc0) = 1
CRITICAL_SECTION* result = sub_75ec70(ecx)
CookieCheckFunction(result)
return result
