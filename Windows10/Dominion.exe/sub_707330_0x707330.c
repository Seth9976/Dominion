// 函数: sub_707330
// 地址: 0x707330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
char* ecx = *(arg1 + 8)
char eax = *ecx

if (eax != arg2)
    return 0

if (eax == 0xa)
    *(arg1 + 0x118) += 1

arg2 = *ecx

if (arg2 u>= 0x80 && (arg2 & 0xe0) != 0xc0 && (arg2 & 0xf0) != 0xe0 && (arg2 & 0xf8) != 0xf0)
    *(arg1 + 8) = &ecx[1]
    void* eax_2
    eax_2.b = 1
    return eax_2

*(arg1 + 8) = sub_5a0db0(ecx)
char* eax_1
eax_1.b = 1
return eax_1
