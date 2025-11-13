// 函数: sub_74afe0
// 地址: 0x74afe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ebx = arg2
char* esi = arg3
void* (* const var_8)(uint32_t _Count, uint32_t _Size) = calloc
int32_t* result = calloc(1, 0x1c)
result[5] = arg7

if (esi == 0 || *esi == 0)
    esi = &data_801800

char* ecx_1 = esi
int32_t eax

do
    eax.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax.b != 0)
int32_t edi = calloc(ecx_1 - &ecx_1[1] + 1, 1)

if (edi != 0)
    char* ecx_3 = esi
    int32_t eax_2
    
    do
        eax_2.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_2.b != 0)
    memcpy(edi, esi, ecx_3 - &ecx_3[1])
else
    edi = calloc(1, 1)

*result = edi

if (ebx == 0 || *ebx == 0)
    ebx = &data_801800

char* ecx_5 = ebx
int32_t* eax_4

do
    eax_4.b = *ecx_5
    ecx_5 = &ecx_5[1]
while (eax_4.b != 0)
int32_t esi_1 = calloc(ecx_5 - &ecx_5[1] + 1, 1)

if (esi_1 != 0)
    char* ecx_7 = ebx
    int32_t eax_6
    
    do
        eax_6.b = *ecx_7
        ecx_7 = &ecx_7[1]
    while (eax_6.b != 0)
    memcpy(esi_1, ebx, ecx_7 - &ecx_7[1])
else
    esi_1 = calloc(1, 1)

result[1] = esi_1
char* esi_2 = arg4

if (esi_2 == 0 || *esi_2 == 0)
    esi_2 = &data_801800

char* ecx_9 = esi_2
int32_t* eax_8

do
    eax_8.b = *ecx_9
    ecx_9 = &ecx_9[1]
while (eax_8.b != 0)
int32_t edi_1 = calloc(ecx_9 - &ecx_9[1] + 1, 1)

if (edi_1 != 0)
    char* ecx_11 = esi_2
    int32_t eax_10
    
    do
        eax_10.b = *ecx_11
        ecx_11 = &ecx_11[1]
    while (eax_10.b != 0)
    memcpy(edi_1, esi_2, ecx_11 - &ecx_11[1])
else
    edi_1 = calloc(1, 1)

result[4] = edi_1
int32_t edi_2
int32_t eax_13

if (arg7 == 1 || arg7 == 2)
    char* ebx_1 = arg5
    
    if (ebx_1 != 0)
        eax_13.b = *ebx_1
    
    if (ebx_1 == 0 || eax_13.b == 0)
        eax_13.b = 0
        ebx_1 = &data_801800
    
    void* count = nullptr
    char* edx_8 = ebx_1
    
    if (eax_13.b != 0)
        do
            char* ecx_17 = edx_8
            
            do
                eax_13.b = *ecx_17
                ecx_17 = &ecx_17[1]
            while (eax_13.b != 0)
            
            edx_8 = &edx_8[1] + ecx_17 - &ecx_17[1]
            count = edx_8 - ebx_1
        while (*edx_8 != eax_13.b)
    
    edi_2 = calloc(count + 1, 1)
    
    if (edi_2 != 0)
        memcpy(edi_2, ebx_1, count)
    else
        edi_2 = calloc(1, 1)
else
    char* esi_3 = arg5
    
    if (esi_3 == 0 || *esi_3 == 0)
        esi_3 = &data_801800
    
    char* ecx_13 = esi_3
    
    do
        eax_13.b = *ecx_13
        ecx_13 = &ecx_13[1]
    while (eax_13.b != 0)
    
    edi_2 = calloc(ecx_13 - &ecx_13[1] + 1, 1)
    
    if (edi_2 != 0)
        char* ecx_15 = esi_3
        int32_t eax_15
        
        do
            eax_15.b = *ecx_15
            ecx_15 = &ecx_15[1]
        while (eax_15.b != 0)
        memcpy(edi_2, esi_3, ecx_15 - &ecx_15[1])
    else
        edi_2 = calloc(1, 1)
char* esi_6 = arg6
result[2] = edi_2

if (esi_6 == 0 || *esi_6 == 0)
    esi_6 = &data_801800

char* ecx_19 = esi_6
int32_t* eax_20

do
    eax_20.b = *ecx_19
    ecx_19 = &ecx_19[1]
while (eax_20.b != 0)
int32_t edi_3 = calloc(ecx_19 - &ecx_19[1] + 1, 1)

if (edi_3 == 0)
    result[3] = calloc(1, 1)
    return result

char* ecx_22 = esi_6
int32_t eax_22

do
    eax_22.b = *ecx_22
    ecx_22 = &ecx_22[1]
while (eax_22.b != 0)
memcpy(edi_3, esi_6, ecx_22 - &ecx_22[1])
result[3] = edi_3
return result
