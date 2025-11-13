// 函数: sub_4bc520
// 地址: 0x4bc520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_3 = data_cc8d5c

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edx = *(eax_3 + 0x5028)
int32_t ecx = 0
int32_t ecx_1

if (edx s<= 0)
label_4bc54d:
    data_8db7f8 = 0
    ecx_1 = 0
else
    void* eax = eax_3 + 0x38
    
    while (*eax != 3)
        ecx += 1
        eax += 0x20
        
        if (ecx s>= edx)
            goto label_4bc54d
    
    data_8db7f8 = 1
    ecx_1 = 1

data_8db7f4 = arg1
data_8db7fc = 0
data_8db660 = 9
return sub_4c2ac0(ecx_1, 0) __tailcall
