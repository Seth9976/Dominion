// 函数: sub_4c9c50
// 地址: 0x4c9c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg2 + (arg4 << 3)
int32_t edi = ecx - 4

if (arg4 s<= 0)
    edi = ecx

if (arg3 == 2)
    edi = arg2
    
    if (arg4 != 0)
        edi = ecx - 1

void* var_10
int32_t eax_1 = sub_571bc0(arg3, &var_10)
int32_t ebx_1 = eax_1
int32_t edx_1 = 0
int32_t ecx_2 = 0

if (ebx_1 s> 0)
    int32_t* esi_2 = var_10 + 4
    
    do
        eax_1 = *esi_2
        
        if (eax_1 != 7 && eax_1 != 3)
            if (edx_1 == edi)
                *(var_10 + ecx_2 * 0x44)
                return arg3
            
            edx_1 += 1
        
        ecx_2 += 1
        esi_2 = &esi_2[0x11]
    while (ecx_2 s< ebx_1)

sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
    0x20f2, "StoreItemIndexToDlc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
