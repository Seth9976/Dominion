// 函数: sub_614ff0
// 地址: 0x614ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_5cbb20(arg1)
int32_t eax_1 = sub_5cbb20(arg2)

if (eax s< eax_1)
    eax_1.b = 1
    return eax_1

if (eax s> eax_1)
    eax_1.b = 0
    return eax_1

int32_t eax_2 = *(arg1 + 0x1f4)
int32_t temp0 = *(arg2 + 0x1f4)

if (eax_2 != temp0)
    eax_2.b = eax_2 s< temp0
    return eax_2

sub_63b870(eax_2, &data_801800, "g0->ability.id != g1->ability.id", 
    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xc361, "SortAbilities")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
