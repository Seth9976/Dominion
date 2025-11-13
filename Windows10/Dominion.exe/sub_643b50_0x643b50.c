// 函数: sub_643b50
// 地址: 0x643b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t* var_4 = ecx
int32_t result = data_cf6a6c

if (result != 0 && result != 1)
    return result

void* eax = sub_5af880(ecx)
char ecx_1 = *(eax + 0x10)

if (*(eax + 0x11) != 0)
    int32_t eax_2
    eax_2.b = ecx_1 == 0
    return eax_2 + 2

if (ecx_1 == 0)
    return 4

sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Draw3d.cpp", 0x24e, 
    "GetSortTypeFromMaterial")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
