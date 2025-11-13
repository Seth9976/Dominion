// 函数: sub_7526a0
// 地址: 0x7526a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = nullptr
char* edi = arg4
int32_t edx_3 = arg2 u% 0x64
int32_t* esi_1 = *(arg3 + 0x18 + (edx_3 << 2))
void*** eax_3 = arg3 + 0x18 + (edx_3 << 2)
int32_t var_10 = edx_3

if (esi_1 != 0)
    while (true)
        int32_t* ecx_1 = *esi_1
        
        if (*ecx_1 == arg2)
            char* ecx_2 = ecx_1[1]
            char* eax_4 = edi
            int32_t eax_6
            
            while (true)
                edx_3.b = *ecx_2
                char temp0_1 = *eax_4
                bool c_1 = edx_3.b u< temp0_1
                
                if (edx_3.b == temp0_1)
                    if (edx_3.b == 0)
                        eax_6 = 0
                        break
                    
                    edx_3.b = ecx_2[1]
                    char temp1_1 = eax_4[1]
                    c_1 = edx_3.b u< temp1_1
                    
                    if (edx_3.b == temp1_1)
                        ecx_2 = &ecx_2[2]
                        eax_4 = &eax_4[2]
                        
                        if (edx_3.b != 0)
                            continue
                        
                        eax_6 = 0
                        break
                
                eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
                break
            
            if (eax_6 == 0)
                ecx = esi_1
                break
        
        esi_1 = esi_1[1]
        
        if (esi_1 == 0)
            ecx = nullptr
            break

if (arg5 != 0)
    *(arg5 + 0xc) += 1

if (ecx != 0)
    void* ecx_3 = *(*esi_1 + 8)
    
    if (ecx_3 != 0)
        *(ecx_3 + 0xc) -= 1
        
        if (*(ecx_3 + 0xc) s<= 0)
            (**(ecx_3 + 8))(ecx_3)
    
    void* eax_10 = *esi_1
    *(eax_10 + 8) = arg5
    return eax_10

int32_t eax_11 = data_147ded8
int128_t* eax_12

if (eax_11 == 0)
    eax_12 = malloc(0x10)
else
    eax_12 = eax_11(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x28)

if (eax_12 != 0)
    *eax_12 = zx.o(0)

char* ecx_4 = edi
*eax_12 = arg2
void* edx_4 = &ecx_4[1]
int32_t eax_13

do
    eax_13.b = *ecx_4
    ecx_4 = &ecx_4[1]
while (eax_13.b != 0)
int32_t eax_14 = data_147ded8
int32_t eax_15

if (eax_14 == 0)
    eax_15 = malloc(ecx_4 - edx_4 + 1)
else
    eax_15 =
        eax_14(ecx_4 - edx_4 + 1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x2a)

*(eax_12 + 4) = eax_15
void* ecx_8 = eax_15 - edi

do
    eax_15.b = *edi
    edi = &edi[1]
    *(ecx_8 + edi - 1) = eax_15.b
while (eax_15.b != 0)

*(eax_12 + 8) = arg5
*(eax_12 + 0xc) = *(arg3 + 0x14)
int32_t eax_17 = data_147ded8
*(arg3 + 0x14) = eax_12
void** eax_18

if (eax_17 == 0)
    eax_18 = malloc(8)
else
    eax_18 = eax_17(8, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x36)

if (eax_18 != 0)
    *eax_18 = nullptr

*eax_18 = eax_12
eax_18[1] = *(arg3 + (var_10 << 2) + 0x18)
*eax_3 = eax_18
return eax_3
