// 函数: sub_4db480
// 地址: 0x4db480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t result

do
    int32_t* j = *(*arg1 + (i << 2))
    
    while (j != 0)
        int32_t* j_1 = j
        j = j[7]
        sub_64c080(j_1, 0x20)
    
    result = *arg1
    *(result + (i << 2)) = 0
    i += 1
while (i u<= arg1[1])

arg1[2] = 0
return result
