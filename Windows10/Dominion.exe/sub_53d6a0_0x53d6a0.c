// 函数: sub_53d6a0
// 地址: 0x53d6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 4, 0)
int32_t ecx = 0
int32_t i = 7
int32_t* eax_3 = *(sub_573400() + 4) + 0x1594

do
    if (*eax_3 != 0 && eax_3[2] == 0)
        ecx += 1
    
    i += 1
    eax_3 = &eax_3[4]
while (i s< 0x21)

return sub_562080(ecx, 0) __tailcall
