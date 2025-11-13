// 函数: sub_4edea0
// 地址: 0x4edea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1

if (arg1 == 0 || *(arg1 + 0xe1) != 0)
    return 

int32_t i = 0
*(arg1 + 0xe1) = 1
int32_t i_1 = 0

if (*(arg1 + 0xd4) s<= 0)
    return 

int32_t* edi_1 = nullptr

do
    int32_t eax = *(arg1 + 0xd0)
    int32_t j = 0
    
    if (*(edi_1 + eax + 8) s> 0)
        do
            *(*(edi_1 + eax) + (j << 2))
            sub_4edea0()
            eax = *(arg1 + 0xd0)
            j += 1
        while (j s< *(edi_1 + eax + 8))
        
        i = i_1
    
    i += 1
    edi_1 = &edi_1[0x15]
    i_1 = i
while (i s< *(arg1 + 0xd4))
