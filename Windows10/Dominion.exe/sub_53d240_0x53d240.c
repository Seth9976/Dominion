// 函数: sub_53d240
// 地址: 0x53d240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 2, 0)
int32_t i_2 = 2
int32_t i

do
    uint32_t eax_1 = sub_563590(0xf46)
    
    if (eax_1 != 0)
        void* eax_2 = sub_573400()
        sub_583720(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), eax_1, 0x476, nullptr, 0x476, 0, 0, 4)
    
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t ecx_2 = 0
int32_t i_1 = 7
int32_t* eax_5 = *(sub_573400() + 4) + 0x1594

do
    if (*eax_5 != 0 && eax_5[2] == 0)
        ecx_2 += 1
    
    i_1 += 1
    eax_5 = &eax_5[4]
while (i_1 s< 0x21)

return sub_562000(ecx_2, 0) __tailcall
