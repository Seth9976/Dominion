// 函数: sub_571160
// 地址: 0x571160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t edi = (*arg2).w
int32_t* eax_1 = *(arg1 + 4)
uint32_t ecx = *eax_1
int32_t eax_2 = eax_1[1]
void* ebx = *(sub_573400() + 4)
uint32_t eax_4 = zx.d(edi)

if (eax_4 u>= 0x320)
    sub_591930()

int32_t eax_5 = eax_4 * 0x64
char eax_6
int32_t edx_1
eax_6, edx_1 = sub_5754f0(eax_5, *(eax_5 + ebx + 0x1a4c), ebx, ecx, eax_2)

if (eax_6 != 0)
    int32_t* eax_7 = *(arg1 + 8)
    
    if (sub_5682c0(eax_7, edx_1, edi, *eax_7) != 0)
        return 1

return 0
