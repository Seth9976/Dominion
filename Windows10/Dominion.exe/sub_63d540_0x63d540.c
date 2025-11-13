// 函数: sub_63d540
// 地址: 0x63d540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void** var_8 = arg1

if (arg2 s<= 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "length > 0", "C:\x\ax2017\Engine\xString.cpp", 0x27, 
        "sXStringAllocBufferLength")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_1 = sub_64bfd0(arg2 + 0x11)
eax_1[3] += 1
int32_t* ecx_2

if (arg2 + 0x11 s<= 0x400 || eax_1[4] != 0xffffffff)
    if (*eax_1 == 0)
        sub_64be70(eax_1)
    
    ecx_2 = *eax_1
    *eax_1 = *ecx_2
else
    ecx_2 = sub_687730(arg2 + 0x11)

ecx_2[2] = arg2
ecx_2[3] = arg2 + 1
*ecx_2 = 0xfafafafa
ecx_2[1] = 1
*arg1 = &ecx_2[4]
return &ecx_2[4]
