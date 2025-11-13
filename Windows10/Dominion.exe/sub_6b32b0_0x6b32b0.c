// 函数: sub_6b32b0
// 地址: 0x6b32b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg1 + 0x38) == 0)
    return 

int32_t ebx_1 = 0
int32_t edx_1

do
    int32_t* i = *(*(arg1 + 0x38) + (ebx_1 << 2))
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[2]
        sub_64c080(i_1, 0xc)
    
    *(*(arg1 + 0x38) + (ebx_1 << 2)) = 0
    ebx_1 += 1
    edx_1 = *(arg1 + 0x3c)
while (ebx_1 u<= edx_1)

int32_t* ecx_1 = *(arg1 + 0x38)
*(arg1 + 0x40) = 0
sub_64c080(ecx_1, (edx_1 << 2) + 4)
*(arg1 + 0x38) = 0
