// 函数: sub_5d9210
// 地址: 0x5d9210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* eax = sub_4b9480()
int32_t i = 0
int32_t edi = *eax

do
    if (*(sub_61dad0() + i + 8) == edi)
        void* result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(result + 0x3538) = arg1
        return result
    
    i += 0xc
while (i s< 0x78)

uint32_t eax_3 = eax[8] u>> 2

if ((eax_3.b & 1) != 0)
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7218) = arg1
    data_cc8dc8
    return sub_4d8ad0(i)

sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3218, 
    "SetDefaultAILevel")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
