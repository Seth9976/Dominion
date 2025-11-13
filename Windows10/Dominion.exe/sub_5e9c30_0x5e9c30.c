// 函数: sub_5e9c30
// 地址: 0x5e9c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t i = 7
int32_t* edi = arg1 + 0x1594
int32_t result

do
    int32_t ecx = *edi
    
    if (ecx != 0 && (*(sub_571b30(ecx, data_cce9b0) + 0x98) & 0x40000) != 0)
        result.b = 1
        return result
    
    i += 1
    edi = &edi[4]
while (i s<= 0x47)

result.b = 0
return result
