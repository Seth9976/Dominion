// 函数: sub_4d5e20
// 地址: 0x4d5e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
*(arg2 + 0x10) = *(arg3 + 8)
int32_t ecx = *(arg3 + 0x10)
*(arg2 + 0x14) = *(arg3 + 0xc)
*(arg2 + 0x18) = ecx
*(arg2 + 0x1c) = *(arg3 + 0x14)
*(arg2 + 0x20) = *(arg3 + 0x18)
*(arg2 + 0x24) = *(arg3 + 0x1c)
*(arg2 + 0x28) = *(arg3 + 0x20)
*(arg2 + 0x2c) = *(arg3 + 0x24)
*(arg2 + 0x30) = *(arg3 + 0x28)
*(arg2 + 0x34) = *(arg3 + 0x2c)
sub_63d850(arg2 + 0x38, arg3 + 0x30)
sub_63d850(arg2 + 0x3c, arg3 + 0x34)
sub_63d850(arg2 + 0x40, arg3 + 0x38)
int32_t i_2 = arg4
*(arg2 + 0x11a8) = 0

if (i_2 s> 0)
    void* edx = arg3 + 0x40
    int32_t i
    
    do
        if (*(edx + 0x14) != 0)
            i_2 = arg4
            __builtin_memcpy(*(arg2 + 0x11a8) * 0x22c + 0x48 + arg2, edx, 0x22c)
            *(arg2 + 0x11a8) += 1
        
        edx += 0x22c
        i = i_2
        i_2 -= 1
        arg4 = i_2
    while (i != 1)

int32_t eax_14 = sub_63eb70()
int32_t xmm1[0x4] = data_891410
int32_t esi_2 = eax_14
int32_t ecx_4 = esi_2
int32_t var_2c[0x8]

for (int32_t i_1 = 0; i_1 s< 8; i_1 += 4)
    *(&var_2c + (i_1 << 2)) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), xmm1)

uint32_t result_1
uint32_t result
int32_t edx_1

if (*(arg2 + 0x1c) - 0x64 u> 0x19 && (*(arg2 + 0x20) & 2) == 0)
    edx_1 = *(arg2 + 0x11a8)
    result = 0
    result_1 = 0

char const* const var_54
int32_t var_50
char const* const var_4c_3
char* ecx_9

if (*(arg2 + 0x1c) - 0x64 u<= 0x19 || (*(arg2 + 0x20) & 2) != 0 || edx_1 s<= 0)
label_4d5f98:
    *(arg2 + 0x10) = esi_2
    
    if (arg5 != 0)
        esi_2 = arg5
    
    int32_t ecx_6 = 0
    *(arg2 + 0x34) = esi_2
    result = *(arg2 + 0x11a8)
    
    if (result s> 0)
        void* edx_6 = arg2 + 0x64
        
        do
            edx_6 += 0x22c
            *(edx_6 - 0x22c) = var_2c[ecx_6]
            ecx_6 += 1
            result = *(arg2 + 0x11a8)
        while (ecx_6 s< result)
    
    int32_t edi_8 = 0
    
    if (result s<= 0)
    label_4d6026:
        CookieCheckFunction(result)
        return result
    
    void* esi_4 = arg2 + 0x11b8
    
    while (true)
        if (*esi_4 != 0)
            var_4c_3 = "LocalGameInitNew"
            var_50 = 0x6a
            var_54 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp"
            ecx_9 = "save.logs.logs[i].logBytes == NULL"
            break
        
        *(esi_4 + 8) = 0x1000
        result = _aligned_malloc(0x1000, 0x10)
        
        if (result == 0)
            var_4c_3 = "XMalloc"
            var_50 = 0x57
            var_54 = "C:\x\ax2017\Engine\xMemory.cpp"
            ecx_9 = "pBuffer"
            break
        
        *esi_4 = result
        edi_8 += 1
        *(esi_4 + 0x14) = 0
        *(esi_4 + 0x10) = 0
        *(esi_4 + 0xc) = 0
        esi_4 += 0x18
        
        if (edi_8 s>= *(arg2 + 0x11a8))
            goto label_4d6026
else
    int32_t edx_2 = edx_1 - 1
    int32_t var_34_1 = edx_2
    
    while (true)
        if (result s> edx_2)
            var_4c_3 = "RandomLCIntRange"
            var_50 = 0xd2
            var_54 = "C:\x\ax2017\Engine\Random.cpp"
            ecx_9 = "mmin <= mmax"
            break
        
        if (edx_2 - result + 1 s<= 0)
            var_4c_3 = "RandomLCInt"
            var_50 = 0xcc
            var_54 = "C:\x\ax2017\Engine\Random.cpp"
            ecx_9 = "maxPlusOne > 0"
            break
        
        int32_t esi_3 = var_2c[result]
        ecx_4 = ecx_4 * 0x41c64e6d + 0x3039
        uint32_t edx_5 = modu.dp.d(0:(ecx_4 u>> 6), edx_2 - result + 1) + result_1
        var_2c[result_1] = var_2c[edx_5]
        result = result_1 + 1
        var_2c[edx_5] = esi_3
        edx_2 = var_34_1
        result_1 = result
        
        if (result s>= *(arg2 + 0x11a8))
            goto label_4d5f98

sub_63b870(result, &data_801800, ecx_9, var_54, var_50, var_4c_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
