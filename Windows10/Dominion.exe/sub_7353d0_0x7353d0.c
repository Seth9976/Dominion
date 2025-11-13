// 函数: sub_7353d0
// 地址: 0x7353d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg1
char* edi = arg1
char* var_8_1 = arg1
char* esi = arg2
int32_t ebx
ebx.b = *edi
int32_t result
result.b = *esi

if (ebx.b != 0)
    while (true)
        if (ebx.b == 0x2a)
            if (edi[1] != 0)
                result = sub_7353d0()
            
            if (edi[1] == 0 || result.b != 0)
            label_735476:
                result.b = 1
                return result
            
            while (true)
                esi = &esi[1]
                
                if (*esi == 0)
                    break
                
                if (sub_7353d0().b != 0)
                    goto label_735476
        else if (result.b != 0)
            if (ebx.b == 0x3f)
                goto label_73542a
            
            bool cond:1_1
            
            if (ebx.b == 0x5c)
                cond:1_1 = result.b == 0x2f
            label_735408:
                
                if (cond:1_1)
                    goto label_73542a
            else if (ebx.b == 0x2f)
                cond:1_1 = result.b == 0x5c
                goto label_735408
            int32_t eax_1 = tolower(result.b)
            
            if (tolower(ebx.b) == eax_1)
                edi = var_8_1
            label_73542a:
                ebx.b = edi[1]
                edi = &edi[1]
                result.b = esi[1]
                esi = &esi[1]
                var_8_1 = edi
                
                if (ebx.b == 0)
                    break
                
                continue
        
        result.b = 0
        return result

result.b = result.b == 0
return result
