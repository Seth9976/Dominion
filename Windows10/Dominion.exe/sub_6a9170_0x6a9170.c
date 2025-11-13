// 函数: sub_6a9170
// 地址: 0x6a9170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* eax = sub_64bfd0(0x18)
eax[3] += 1

if (*eax == 0)
    sub_64be70(eax)

int32_t* lpParameter = *eax
*eax = *lpParameter
__builtin_memset(lpParameter, 0, 0x18)
lpParameter[1] = arg1
lpParameter[2] = arg2
lpParameter[4] = CreateSemaphoreA(nullptr, 1, 1, nullptr)
HANDLE eax_4 = CreateSemaphoreA(nullptr, 1, 1, nullptr)
HANDLE hHandle = lpParameter[4]
lpParameter[3] = eax_4
*lpParameter = 0
uint32_t* eax_5 = WaitForSingleObject(hHandle, 0xffffffff)

if (eax_5 == 0)
    eax_5 = WaitForSingleObject(lpParameter[3], 0xffffffff)
    
    if (eax_5 == 0)
        lpParameter[5] = CreateThread(eax_5, 0x100000, sub_6a9060, lpParameter, eax_5, eax_5)
        return lpParameter

sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Engine\Coroutine.cpp", 0x78, "mutex_lock")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
