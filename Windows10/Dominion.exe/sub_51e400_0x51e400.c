// 函数: sub_51e400
// 地址: 0x51e400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *arg1
int32_t* result
bool cond:1_1

if (ecx s> 0x50c)
    if (ecx != 0x919)
        cond:1_1 = ecx == 0x91f
    label_51e433:
        
        if (not(cond:1_1))
            void* eax_2 = sub_571b30(ecx, 0x18)
            
            if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) == 0)
                result.b = 1
                return result
else if (ecx != 0x50c && ecx != 0x208 && ecx != 0x501)
    cond:1_1 = ecx == 0x509
    goto label_51e433
result.b = 0
return result
