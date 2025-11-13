// 函数: sub_666380
// 地址: 0x666380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
uint32_t eax = sub_64e7a0(ecx)
void* edx = *(eax + 0x16e8)

if (edx != 0 && *(eax + 0xc) != *(edx + 0xc))
    *(eax + 0x16f4) = 0
    *(eax + 0x15f0) = *(eax + 0x15e8)
    *(eax + 0xc) = *(edx + 0xc)

int32_t ecx_2 = *(eax + 0x16f4)
int32_t eax_3 = 0
int32_t* esi = *(eax + 0x16f0)

if (ecx_2 s> 0)
    while (esi[1] != arg4 || *esi != arg2)
        eax_3 += 1
        esi = &esi[7]
        
        if (eax_3 s>= ecx_2)
            goto label_6663f7

if (ecx_2 s<= 0 || esi == 0)
label_6663f7:
    
    if (*(eax + 0x16f8) == 0)
        *(eax + 0x16f0) = sub_64c020(0x1c00)
        *(eax + 0x16f4) = 0
        *(eax + 0x16f8) = 0x100
    
    int32_t eax_5 = *(eax + 0x16f4)
    
    if (eax_5 s>= *(eax + 0x16f8))
        sub_63b870(eax_5, &data_801800, "mSize < mSizeReserved", "C:\x\ax2017\Engine\xArray.h", 
            0xa1, "XArray<struct UI2State>::Alloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(*(eax + 0x16f0) + eax_5 * 0x1c + 4) = 0
    *(eax + 0x16f4) += 1
    esi = *(eax + 0x16f0) + ((*(eax + 0x16f4) * 7 - 7) << 2)

*esi = arg2
esi[1] = arg4
char* const ebx_1 = &data_801800
esi[2] = 3
char* eax_11 = *arg3

if (eax_11 != 0)
    ebx_1 = eax_11

char* const ecx_5 = ebx_1
void* var_c = &ecx_5[1]
void* eax_12

do
    eax_12.b = *ecx_5
    ecx_5 = &ecx_5[1]
while (eax_12.b != 0)
int32_t* edx_2 = *(eax + 0x15e8)
int32_t eax_14 = *(eax + 0x15ec)
void* ecx_8 = eax_14 - edx_2
void* ecx_9 = *(eax + 0x15f0)
uint32_t count = ecx_9 - edx_2

if (ecx_5 - var_c + 1 s> eax_14 - ecx_9)
    void* edx_3 = ecx_5 - var_c + 1
    
    if (edx_3 << 2 s<= ecx_8 << 2)
        edx_3 = ecx_8
    
    int32_t edx_4 = edx_3 << 2
    int32_t* edx_5 = sub_64bfd0(edx_4)
    edx_5[3] += 1
    int32_t* ecx_14
    
    if (edx_4 s<= 0x400 || edx_5[4] != 0xffffffff)
        if (*edx_5 == 0)
            sub_64be70(edx_5)
        
        ecx_14 = *edx_5
        *edx_5 = *ecx_14
    else
        ecx_14 = sub_687730(edx_4)
    
    if (ecx_8 != 0)
        memcpy(ecx_14, *(eax + 0x15e8), count)
        sub_64c080(*(eax + 0x15e8), ecx_8)
    
    edx_2 = ecx_14
    ecx_9 = count + edx_2
    *(eax + 0x15e8) = edx_2
    *(eax + 0x15ec) = &edx_2[edx_3]
    *(eax + 0x15f0) = ecx_9

void* ecx_18 = ecx_9 - ebx_1
int32_t eax_24

do
    eax_24.b = *ebx_1
    ebx_1 = &ebx_1[1]
    *(ebx_1 + ecx_18 - 1) = eax_24.b
while (eax_24.b != 0)
*(eax + 0x15f0) += ecx_5 - var_c + 1
esi[3] = eax + 0x15e8
esi[4] = ecx_9 - edx_2
esi[5] = 0
return sub_65bf00(eax)
