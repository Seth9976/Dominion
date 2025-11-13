// 函数: sub_6378e0
// 地址: 0x6378e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* var_8_1 = arg1
int32_t i = 0
int32_t result

do
    int32_t* j = *(*arg1 + (i << 2))
    
    if (j != 0)
        do
            int32_t* j_1 = j
            j = j[5]
            sub_5dfdb0(&j_1[1])
            sub_64c080(j_1, 0x18)
        while (j != 0)
        
        arg1 = var_8_1
    
    result = *arg1
    *(result + (i << 2)) = 0
    i += 1
while (i u<= arg1[1])

arg1[2] = 0
return result
