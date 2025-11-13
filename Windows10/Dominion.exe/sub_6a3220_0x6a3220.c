// 函数: sub_6a3220
// 地址: 0x6a3220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i = arg1[1]

while (i != 0)
    int32_t* ecx = *i
    i = i[1]
    sub_6a3140(ecx)

int32_t* i_1 = arg1[1]

while (i_1 != 0)
    int32_t* i_2 = i_1
    i_1 = i_1[1]
    sub_64c080(i_2, 0xc)

arg1[3] = 0
arg1[1] = 0
arg1[2] = 0
return sub_6a3000(arg1)
