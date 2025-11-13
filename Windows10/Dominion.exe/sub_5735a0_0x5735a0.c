// 函数: sub_5735a0
// 地址: 0x5735a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_3c = arg3
int32_t edi = 0
int32_t i = 0
void* ecx_1 = sub_571b30(arg2, *(arg3 + 0xd48)) + 0xbc
int32_t var_2c[0x8]
int32_t* eax_4

do
    eax_4 = *(ecx_1 - 0x14)
    
    if (eax_4 == 0)
        break
    
    if (eax_4 == 0x10)
        eax_4 = *ecx_1
        var_2c[edi] = eax_4
        edi += 1
    
    i += 1
    ecx_1 += 0xb4
while (i s< 8)

int32_t esi_1 = 0

if (edi s> 0)
    do
        eax_4 = sub_5727e0(eax_4, var_2c[esi_1], arg3, 6, 0xffffffff, nullptr)
        esi_1 += 1
    while (esi_1 s< edi)

int32_t ebx_1 = 0
int32_t i_1 = 0
void* ecx_4 = sub_571b30(arg2, *(arg3 + 0xd48)) + 0x154

do
    int32_t eax_6 = *(ecx_4 - 0xac)
    
    if (eax_6 == 0)
        break
    
    if (eax_6 == 0xc && ((arg5 & 1) == 0 || (*ecx_4 & 0x40) == 0))
        var_2c[ebx_1] = *(ecx_4 - 0x98)
        ebx_1 += 1
    
    i_1 += 1
    ecx_4 += 0xb4
while (i_1 s< 8)

int32_t var_50_2
char const* const var_4c_1
void* var_30
void* eax_10
char* ecx_7

if (ebx_1 s> 0)
    int32_t edi_1 = 0
    void* eax_9 = var_3c + 0x1794
    var_30 = eax_9
    
    while (true)
        void* i_2 = var_2c[edi_1]
        int32_t ecx_5 = 0x27
        
        while (*eax_9 != i_2)
            ecx_5 += 1
            eax_9 += 0x10
            
            if (ecx_5 s>= 0x47)
                eax_10 = var_30
                int32_t edx_3 = 0x27
                
                while (true)
                    if (edx_3 s>= 0x47)
                        var_4c_1 = "NextAvailableNonSupplyPile"
                        var_50_2 = 0x625
                        ecx_7 = "Halt"
                        goto label_57386e
                    
                    if (*eax_10 == 0)
                        sub_573fc0(eax_10, edx_3, var_3c, i_2, arg4, arg5.d, nullptr)
                        break
                    
                    edx_3 += 1
                    eax_10 += 0x10
                
                break
        
        edi_1 += 1
        
        if (edi_1 s>= ebx_1)
            break
        
        eax_9 = var_30

void* eax_12 = sub_571b30(arg2, *(var_3c + 0xd48))
int32_t edx_5 = 0
void* esi_2 = eax_12 + 0xa8

while (true)
    int32_t ecx_9 = *esi_2
    char* ebx_2
    
    if (ecx_9 == 0)
        ebx_2 = arg4
    else if (ecx_9 == 1 || ecx_9 == 0xd)
        ebx_2 = arg4
        int32_t eax_32 = edx_5 * 0xb4
        int32_t var_4c_3 = ecx_9
        int32_t esi_4 = *(eax_32 + eax_12 + 0xb8)
        sub_572f80(eax_32, arg2, var_3c, ebx_2, 0xffffffff)
        esi_4()
        TEB* fsbase
        void* ecx_17 = *fsbase->ThreadLocalStoragePointer
        eax_10 = *(ecx_17 + 0xf010)
        
        if (eax_10 s<= 0)
            var_4c_1 = "DomPopContext"
            var_50_2 = 0x792
            ecx_7 = "cs.numContexts > 0"
            break
        
        *(ecx_17 + 0xf010) = eax_10 - 1
    else
        edx_5 += 1
        esi_2 += 0xb4
        
        if (edx_5 s< 8)
            continue
        
        ebx_2 = arg4
    
    void* esi_3 = var_3c
    
    if (sub_572f20(&var_30, arg2, *(esi_3 + 0xd48), &var_30) != 0)
        if (*(ebx_2 + 0x48) s>= 0x10)
            sub_591930()
        
        *(ebx_2 + (*(ebx_2 + 0x48) << 2) + 8) = var_30
        *(ebx_2 + 0x48) += 1
        sub_5735a0(ebx_2, 0)
    
    void* eax_16 = sub_571b30(arg2, *(esi_3 + 0xd48))
    int32_t eax_17 = *(eax_16 + 0x90)
    
    if (eax_17 != 0xffffffff && (eax_17 & 0x10000) != 0)
        *ebx_2 = 1
    
    if ((*(eax_16 + 0x98) & 0x80000000) != 0)
        ebx_2[4] = 1
    
    if ((*(eax_16 + 0x98) & 0x1000) != 0)
        ebx_2[1] = 1
    
    if ((*(eax_16 + 0x98) & 0x80000) != 0)
        ebx_2[2] = 1
    
    if ((*(eax_16 + 0x98) & 0x100000) != 0)
        ebx_2[3] = 1
    
    uint32_t result = *(eax_16 + 0x98) & 0x8000000
    
    if (result != 0)
        *(ebx_2 + 0x4c) += 1
    
    CookieCheckFunction(result)
    return result

label_57386e:
sub_63b870(eax_10, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_50_2, 
    var_4c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
