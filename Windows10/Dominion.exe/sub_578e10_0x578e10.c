// 函数: sub_578e10
// 地址: 0x578e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg1
uint32_t esi = zx.d(arg2.w)
void* var_14 = ebx

if (esi u>= 0x320)
    sub_591930()

int32_t var_10 = arg2
int32_t i = 0
uint32_t var_c = *(esi * 0x64 + ebx + 0x1a54)
uint32_t result

if (*(ebx + 0x19b8) s> 0)
    void* esi_1 = ebx + 0x3b584
    
    do
        result = *(esi_1 - 0x1c)
        
        if (result != 1 && result != 4 && result != 5)
            result = *(esi_1 + 0x34)
            
            if (result != 2 && result != 3)
                if (*(esi_1 + 0x28) != 0)
                    result = sub_5941b0(esi_1 + 0x28, &var_10)
                
                if (*(esi_1 + 0x28) != 0 && result.b != 0)
                label_578ea8:
                    uint32_t ebx_1 = zx.d(*esi_1)
                    
                    if (ebx_1 u>= 0x320)
                        sub_591930()
                    
                    int32_t eax_1 = ebx_1 * 0x64
                    ebx = var_14
                    
                    if (sub_5754f0(eax_1, *(eax_1 + ebx + 0x1a4c), ebx, 0x80, 0).b != 0)
                        result.b = 1
                        return result
                else if (*esi_1 != 0 && sub_5941b0(esi_1, &var_10).b != 0)
                    goto label_578ea8
        
        i += 1
        esi_1 += 0xa8
    while (i s< *(ebx + 0x19b8))

result.b = 0
return result
