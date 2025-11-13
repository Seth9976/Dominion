// 函数: sub_640ba0
// 地址: 0x640ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i_1 = nullptr
int32_t edi = arg2[5]
int32_t ebx = arg2[6]
int32_t* eax_2 = *(arg1 + 0x38) + (((edi << 8 | ebx) & *(arg1 + 0x3c)) << 2)

for (int32_t* i = *eax_2; i != 0; i = i[4])
    if (edi == *i && ebx == i[1] && arg2[7] == i[2])
        int32_t eax_4 = i[4]
        
        if (i_1 != 0)
            i_1[4] = eax_4
        else
            *eax_2 = eax_4
        
        sub_64c080(i, 0x14)
        *(arg1 + 0x40) -= 1
        break
    
    i_1 = i

arg2[8] = 0
*(arg2 + 0x14) = 0
arg2[7] = 0
return 0
