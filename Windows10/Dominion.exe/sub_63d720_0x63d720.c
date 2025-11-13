// 函数: sub_63d720
// 地址: 0x63d720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg2

if (*esi == 0)
    *arg1 = &data_801800
    return 

char i

do
    i = *arg2
    arg2 = &arg2[1]
while (i != 0)
sub_63d540(arg1, arg2 - &arg2[1])
char* ecx_2 = *arg1
char i_1

do
    i_1 = *esi
    esi = &esi[1]
    *ecx_2 = i_1
    ecx_2 = &ecx_2[1]
while (i_1 != 0)
