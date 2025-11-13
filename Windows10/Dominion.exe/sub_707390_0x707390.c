// 函数: sub_707390
// 地址: 0x707390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* ebx = arg1
*(ebx + 0xc) = *(ebx + 8)
int32_t (* const var_8_1)(char const* _Str1, char const* _Str2, uint32_t _MaxCount) = _strnicmp
int32_t (* const result)(char const* _Str1, char const* _Str2, uint32_t _MaxCount)

while (true)
    char* edx_1 = *(ebx + 8)
    result.b = *edx_1
    
    if (result.b != 0x26)
        if (result.b == 0 || result.b == 0x20 || result.b == 9 || result.b == 0x3c
                || result.b == 0x3d || result.b == 0x22 || result.b == 0x3e)
            bool cond:0 = edx_1 != *(ebx + 0xc)
            *(ebx + 0x10) = edx_1 - *(ebx + 0xc)
            result.b = cond:0
            return result
        
        if (result.b == 0xa)
            *(ebx + 0x118) += 1
        
        arg1.b = *edx_1
        
        if (arg1.b u>= 0x80)
            result.b = arg1.b
            result.b &= 0xe0
            
            if (result.b != 0xc0)
                result.b = arg1.b
                result.b &= 0xf0
                
                if (result.b != 0xe0)
                    arg1.b &= 0xf8
                    
                    if (arg1.b != 0xf0)
                        *(ebx + 8) = &edx_1[1]
                        continue
        
        result, arg1 = sub_5a0db0(edx_1)
        *(ebx + 8) = result
    else
        edx_1.b = result.b
        
        if (sub_707330(ebx, edx_1.b).b == 0)
            break
        
        char* ecx_1 = *(ebx + 8)
        
        if (*ecx_1 == 0xa)
            *(ebx + 0x118) += 1
        
        char edx_2 = *ecx_1
        char* _Str2
        
        if (edx_2 u< 0x80)
            _Str2 = sub_5a0db0(ecx_1)
        else
            result.b = edx_2
            result.b &= 0xe0
            
            if (result.b == 0xc0)
                _Str2 = sub_5a0db0(ecx_1)
            else
                result.b = edx_2
                result.b &= 0xf0
                
                if (result.b == 0xe0 || (edx_2 & 0xf8) == 0xf0)
                    _Str2 = sub_5a0db0(ecx_1)
                else
                    _Str2 = &ecx_1[1]
        
        *(ebx + 8) = _Str2
        result, arg1 = _strnicmp("amp;", _Str2, 4)
        
        if (result != 0)
            result, arg1 = _strnicmp("lt;", *(ebx + 8), 3)
            
            if (result != 0)
                result, arg1 = _strnicmp("gt;", *(ebx + 8), 3)
                
                if (result != 0)
                    result, arg1 = _strnicmp("quot;", *(ebx + 8), 5)
                    
                    if (result != 0)
                        break

result.b = 0
return result
