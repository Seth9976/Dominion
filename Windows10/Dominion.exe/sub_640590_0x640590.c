// 函数: sub_640590
// 地址: 0x640590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int128_t xmm0 = *arg2
arg1[1] = arg5
*(arg1 + 8) = xmm0
*arg1 = arg4
int32_t* eax_8 = arg3
int32_t* ebx_2 = divs.dp.d(sx.q(arg1[5] - arg1[3]), arg5) * divs.dp.d(sx.q(arg1[4] - arg1[2]), arg4)

if (eax_8 != 0 && eax_8 s< ebx_2)
    ebx_2 = eax_8

char const* const var_20
int32_t var_1c
char const* const var_18
char* ecx_1

if (ebx_2 == 0)
    var_18 = "XMap<struct TTFKey,unsigned int>::SetNumBuckets"
    var_1c = 0x73
    var_20 = "C:\x\ax2017\Engine\xMap.h"
    ecx_1 = "bucketCount > 0"
else if (arg1[0xe] == 0)
    int32_t ecx_3 = (ebx_2 - 1) | (ebx_2 - 1) u>> 1
    int32_t ecx_4 = ecx_3 | ecx_3 u>> 2
    int32_t ecx_5 = ecx_4 | ecx_4 u>> 4
    int32_t ecx_6 = ecx_5 | ecx_5 u>> 8
    int32_t esi_4 = ecx_6 u>> 0x10 | ecx_6
    eax_8 = sub_64c020((esi_4 << 2) + 4)
    arg1[0xe] = eax_8
    int32_t ebx_3 = ebx_2 * 2
    arg1[0xf] = esi_4
    
    if (arg1[7] == 0)
        if (ebx_3 u<= 0x10000)
            arg1[7] = sub_687730(ebx_3 * 0x48)
            arg1[9] = ebx_3
            arg1[0xd] = "regions"
            arg1[0xc] = 0xd09c
            return sub_6409e0(arg1)
        
        var_18 = "DataArray<struct RegionAllocator::Region>::DataArrayInitialize"
        var_1c = 0xcf
        ecx_1 = "maxSize <= DATA_ARRAY_MAX_SIZE"
    else
        var_18 = "DataArray<struct RegionAllocator::Region>::DataArrayInitialize"
        var_1c = 0xce
        ecx_1 = "mpBlock == NULL"
    
    var_20 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_18 = "XMap<struct TTFKey,unsigned int>::SetNumBuckets"
    var_1c = 0x74
    var_20 = "C:\x\ax2017\Engine\xMap.h"
    ecx_1 = "mNodeBuckets == NULL"

sub_63b870(eax_8, &data_801800, ecx_1, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
