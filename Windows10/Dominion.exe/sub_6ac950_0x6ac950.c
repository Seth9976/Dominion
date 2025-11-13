// 函数: sub_6ac950
// 地址: 0x6ac950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_64bfd0(0x2e0)
eax[3] += 1

if (*eax == 0)
    sub_64be70(eax)

int32_t* esi = *eax
*eax = *esi
memset(esi, 0, 0x2e0)
data_147b06c = esi
int32_t* eax_2 = sub_64bfd0(0x54)
eax_2[3] += 1

if (*eax_2 == 0)
    sub_64be70(eax_2)

int32_t* esi_1 = *eax_2
*eax_2 = *esi_1
memset(esi_1, 0, 0x54)
esi_1[0x11] = 0
esi_1[0x12] = 0
data_147abe4 = esi_1
int32_t* eax_4 = sub_64bfd0(1)
eax_4[3] += 1

if (*eax_4 == 0)
    sub_64be70(eax_4)

char* ecx_4 = *eax_4
data_147d2dc = ecx_4
int32_t eax_5 = *ecx_4
*eax_4 = eax_5
*ecx_4 = 0
char const* const var_18_2
int32_t var_14
char const* const var_10
char* ecx_5

if (data_cafe8c == 0)
    eax_5 = _aligned_malloc(0x78800, 0x10)
    
    if (eax_5 != 0)
        data_cafe8c = eax_5
        data_cafe94 = 0x80
        data_cafea4 = "materialcache"
        data_cafea0 = 0xd9dc
        memset(&data_cf65c0, 0, 0x38)
        memset(&data_cf65fc, 0, 0x108)
        memset(0xcf6804, 0, 0x88)
        memset(0xcf68cc, 0, 0xf8)
        memset(&data_cf69d4, 0, 0x7841e0)
        data_cf65f8 = 0xff00ff00
        void* result = data_147b06c
        __builtin_memset(&data_147abb8, 0, 0x14)
        data_147abb4 = 5
        __builtin_memcpy(&data_cf688c, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        data_cf69c4 = data_7fefb0
        __builtin_memcpy(&data_cf6704, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
        "
            0x100)
        *(result + 0x98) = 0xff0000ff
        *(result + 0x9c) = 1
        __builtin_memcpy(result + 0x124, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        *(result + 0x2cc) = 0
        return result
    
    var_10 = "XMalloc"
    var_14 = 0x57
    var_18_2 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_5 = "pBuffer"
else
    var_10 = "DataArray<struct MaterialCacheItem>::DataArrayInitialize"
    var_14 = 0xce
    var_18_2 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_5 = "mpBlock == NULL"

sub_63b870(eax_5, &data_801800, ecx_5, var_18_2, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
