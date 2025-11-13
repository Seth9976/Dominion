// 函数: sub_689500
// 地址: 0x689500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_147abf8 == 0)
    return 

int32_t* eax_1 = sub_64bfd0(0x5c)
eax_1[3] += 1

if (*eax_1 == 0)
    sub_64be70(eax_1)

int32_t* esi_1 = *eax_1
*eax_1 = *esi_1
memset(esi_1, 0, 0x5c)
esi_1[5] = 1
esi_1[8] = 0
esi_1[9] = 0
esi_1[0xa] = 0
esi_1[0xb] = 0
esi_1[0xc] = 1
__builtin_memset(&esi_1[0xd], 0, 0x28)
data_147abf4 = esi_1
int32_t eax_3 = _aligned_malloc(0x200, 0x10)

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", 0x57, "XMalloc")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

esi_1[7] = eax_3
esi_1[9] = 0x20
int32_t eax_4 = 0xd5a8
esi_1[0xd] = "NetListens"
esi_1[0xc] = 0xd5a8
int32_t* esi_2 = data_147abf4
char const* const var_18_2
int32_t var_14
char const* const var_10
char* ecx_2

if (*esi_2 != 0)
    var_10 = "DataArray<struct NetLoc>::DataArrayInitialize"
    var_14 = 0xce
    var_18_2 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_2 = "mpBlock == NULL"
label_689695:
    sub_63b870(eax_4, &data_801800, ecx_2, var_18_2, var_14, var_10)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax_4 = _aligned_malloc(0x62d40, 0x10)

if (eax_4 == 0)
    var_10 = "XMalloc"
    var_14 = 0x57
    var_18_2 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_2 = "pBuffer"
    goto label_689695

int32_t* ecx_3 = data_147abf8
*esi_2 = eax_4
esi_2[2] = 0xfd0
esi_2[6] = "NetLocs"
esi_2[5] = 0xd5a0
(**ecx_3)()
