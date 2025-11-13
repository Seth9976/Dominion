// 函数: sub_5f7850
// 地址: 0x5f7850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71fc) & 1
void* eax_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t esi_2 = esi_1

if (esi_1 == 0)
    *(eax_1 + 0x71fc) |= 1
else
    int32_t temp1_1 = esi_2
    esi_2 -= 1
    
    if (temp1_1 != 1)
        sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x8421, "GameSpecific_JoinAsync")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(eax_1 + 0x71fc) &= 0xfffffffe

int32_t eax_2
uint32_t edx
eax_2, edx = _Xtime_get_ticks()
uint32_t eax_3
int32_t edx_1
eax_3, edx_1 = __alldiv(eax_2, edx, 0x989680, 0)
*(eax_1 + 0x4288) = eax_3
*(eax_1 + 0x428c) = edx_1
data_cc8dc8
sub_4d8ad0(esi_2)
return sub_4c5ab0()
