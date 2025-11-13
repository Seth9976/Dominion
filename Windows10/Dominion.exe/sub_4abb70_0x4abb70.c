// 函数: sub_4abb70
// 地址: 0x4abb70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = arg1
int32_t* eax = data_147ac2c
int32_t ecx = 0
int32_t* eax_1 = *eax
int32_t i_1

while (true)
    i_1 = *eax_1
    
    if (i_1 != 0)
        break
    
    ecx += 1
    eax_1 = &eax_1[1]
    
    if (ecx u> eax[1])
        return sub_618200()

i = i_1

do
    int32_t* ecx_1 = sub_6a01a0(&i)[1]
    
    if (ecx_1[1] == 0x25 && ecx_1[2] != 0)
        sub_6409e0(*(sub_5af880(ecx_1) + 0x38) + 0x80)
while (i != 0)

return sub_618200()
