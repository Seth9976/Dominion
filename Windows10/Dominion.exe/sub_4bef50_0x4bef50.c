// 函数: sub_4bef50
// 地址: 0x4bef50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_63d850(&data_8db76c, arg1 + 8)
void* eax_1 = data_8db76c
char* const esi = &data_801800
void* ecx = &data_801800

if (eax_1 != 0)
    ecx = eax_1

char result = sub_4bee50(ecx)

if (result == 0 || *(arg1 + 0x10) == 0)
    return result

sub_4d46e0(7, 0)
void* eax_2 = data_8db76c

if (eax_2 != 0)
    esi = eax_2

return data_8db770(esi)
