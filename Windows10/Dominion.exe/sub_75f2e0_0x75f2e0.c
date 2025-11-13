// 函数: sub_75f2e0
// 地址: 0x75f2e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
CRITICAL_SECTION* ebx = arg2

if ((ebx->RecursionCount.b & 2) != 0)
    sub_75f2d0(ebx)

struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo = ebx->DebugInfo
ebx->__offset(0x50).d = arg1
int32_t* eax = DebugInfo->ProcessLocksList.Flink()
sub_75ae50(arg1)
int32_t eax_1 = sub_75f940(arg1)

if (eax_1 s< 0)
    sub_75ec70(arg1)
    
    if (eax != 0)
        (**eax)(1)
    
    return 7

if (ebx->__offset(0x18).d == 0)
    ebx->__offset(0x18).d = *(arg1 + 0x1078)
    *(arg1 + 0x1078) += 1

*(arg1 + (eax_1 << 2) + 0x50) = eax
eax[0x5f] = ebx->__offset(0x18).d
*(*(arg1 + (eax_1 << 2) + 0x50) + 0x180) = arg6
sub_75f160(*(arg1 + (eax_1 << 2) + 0x50), ebx, *(arg1 + 0x1074))
void* ecx_11 = eax_1 * 0x68 + 0x1db4 + arg1
sub_75f110(ecx_11, ebx)
*(arg1 + 0x1074) += 1

if (*(arg1 + 0x1074) == 0xfffff)
    *(arg1 + 0x1074) = 0

if (arg5 != 0)
    void* eax_7 = *(arg1 + (eax_1 << 2) + 0x50)
    *(eax_7 + 0x10) |= 4

void* var_18_2 = ecx_11
int32_t ecx_13 = sub_7608e0(arg1, arg1.w, eax_1, eax_1, arg4)
void* LockSemaphore = arg3

if (not(0 f<= LockSemaphore))
    LockSemaphore = ebx->LockSemaphore

int32_t var_18_4 = ecx_13
int32_t ecx_15 = sub_760d40(arg1, eax_1, LockSemaphore)
void* eax_8 = *(arg1 + (eax_1 << 2) + 0x50)
int32_t var_18_6 = ecx_15
*(eax_8 + 0x15c) = *(eax_8 + 0x3c) f* *(eax_8 + 0x18)
void* eax_9 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_9 + 0x160) = *(eax_9 + 0x3c) f* *(eax_9 + 0x1c)
void* eax_10 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_10 + 0x164) = *(eax_10 + 0x3c) f* *(eax_10 + 0x20)
void* eax_11 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_11 + 0x168) = *(eax_11 + 0x3c) f* *(eax_11 + 0x24)
void* eax_12 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_12 + 0x16c) = *(eax_12 + 0x3c) f* *(eax_12 + 0x28)
void* eax_13 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_13 + 0x170) = *(eax_13 + 0x3c) f* *(eax_13 + 0x2c)
void* eax_14 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_14 + 0x174) = *(eax_14 + 0x3c) f* *(eax_14 + 0x30)
void* eax_15 = *(arg1 + (eax_1 << 2) + 0x50)
*(eax_15 + 0x178) = *(eax_15 + 0x3c) f* *(eax_15 + 0x34)
sub_760bd0(arg1, eax_1, 0x3f800000)

for (int32_t* i = 0x184; i s< 0x1a4; i = &i[1])
    int32_t* ecx_17 = *(ebx + i - 0x154)
    
    if (ecx_17 != 0)
        *(i + *(arg1 + (eax_1 << 2) + 0x50)) = (*(*ecx_17 + 0x14))()

*(arg1 + 0x1cdc0) = 1
sub_75ec70(arg1)
return sub_75f9b0(arg1, eax_1)
