// 函数: sub_7086b0
// 地址: 0x7086b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i_2 = *arg1

if (i_2 != 0)
    void* i
    
    do
        i = *(i_2 + 0x28)
        free(*(i_2 + 4))
        free(i_2)
        i_2 = i
    while (i != 0)

int32_t* i_3 = arg1[1]

if (i_3 != 0)
    int32_t* i_1
    
    do
        i_1 = i_3[0x14]
        free(*i_3)
        free(i_3[0x11])
        free(i_3[0x12])
        free(i_3)
        i_3 = i_1
    while (i_1 != 0)

return free(arg1)
