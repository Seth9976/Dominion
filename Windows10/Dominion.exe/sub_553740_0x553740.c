// 函数: sub_553740
// 地址: 0x553740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = 0
int32_t i = 7
int32_t* eax_1 = *(sub_573400() + 4) + 0x1594

do
    if (*eax_1 != 0 && eax_1[2] == 0)
        edx += 1
    
    i += 1
    eax_1 = &eax_1[4]
while (i s< 0x21)

int32_t result
result.b = edx == 1
return result
