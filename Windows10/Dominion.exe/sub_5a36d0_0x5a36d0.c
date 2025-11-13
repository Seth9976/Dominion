// 函数: sub_5a36d0
// 地址: 0x5a36d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_64bfd0(0x21b138)
eax[3] += 1
int32_t* edi

if (eax[4] != 0xffffffff)
    if (*eax == 0)
        sub_64be70(eax)
    
    edi = *eax
    *eax = *edi
else
    edi = sub_687730(0x21b138)

memset(edi, 0, 0x21b138)
memset(&edi[0x140a], 0, 0x58)
edi[0x86c42] = 0
edi[0x86c43] = 0
edi[0x86c44] = 0
data_b4a618 = edi
InitializeCriticalSectionAndSpinCount(&data_b4a5e8, 0x400)
InitializeCriticalSectionAndSpinCount(&data_b4a600, 0x400)
void* esi_1 = data_b4a618
*(esi_1 + 0x21b0f8) = 0
*(esi_1 + 0x21b0fc) = 0
*(esi_1 + 0x21b100) = 0x400
*(esi_1 + 0x21b104) = 0
int32_t* eax_4 = sub_687730(0x5004)
*eax_4 = *(esi_1 + 0x21b0fc)
int32_t i = 0
void* edx = *(esi_1 + 0x21b0f8)
*(esi_1 + 0x21b0fc) = eax_4

if (*(esi_1 + 0x21b100) s> 0)
    void* eax_5 = &eax_4[1]
    
    do
        *eax_5 = edx
        i += 1
        edx = eax_5
        eax_5 += 0x14
    while (i s< *(esi_1 + 0x21b100))

int128_t xmm0 = data_8935c0
*(esi_1 + 0x21b0f8) = edx
*(esi_1 + 0x21b114) = xmm0
*(esi_1 + 0x21b12c) = 0x32
float xmm0_2 = _mm_cvtepi32_ps(0x32)
*(esi_1 + 0x21b130) = 0x19
float xmm3 = 1f / _mm_cvtepi32_ps(0x19)
*(esi_1 + 0x21b124) = 2f / xmm0_2
*(esi_1 + 0x21b128) = xmm3
*(esi_1 + 0x21b108) = sub_64c020(0x1388)
*(esi_1 + 0x21b10c) = 0
*(esi_1 + 0x21b110) = 0x4e2
int32_t eax_7 = sub_5ac7c0(esi_1 + 0x21b108, 0x4e2)
char const* const var_18_2
int32_t var_14
char const* const var_10
char* ecx_4

if (data_b4a5c0 == 0)
    eax_7 = _aligned_malloc(0xa218, 0x10)
    
    if (eax_7 != 0)
        data_b4a5c0 = eax_7
        data_b4a5c8 = 2
        data_b4a5d8 = "complete maps"
        data_b4a5d4 = 0xd1b8
        return 0xd1b8
    
    var_10 = "XMalloc"
    var_14 = 0x57
    var_18_2 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_4 = "pBuffer"
else
    var_10 = "DataArray<struct CampaignMapTask>::DataArrayInitialize"
    var_14 = 0xce
    var_18_2 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_4 = "mpBlock == NULL"

sub_63b870(eax_7, &data_801800, ecx_4, var_18_2, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
