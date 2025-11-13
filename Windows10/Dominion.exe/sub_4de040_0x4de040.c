// 函数: sub_4de040
// 地址: 0x4de040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg1[1]
int32_t result = *arg1
int32_t esi = 0
char* _String_1
sub_4dc550(&_String_1, &result)
result.q = 0
int32_t var_20
sub_4dc830(&var_20, result, ecx)
char* _String = _String_1

if (_String != var_20)
    int32_t i
    
    while (i != 0)
        if (isdigit(sx.d(*_String)) == 0)
            break
        
        (&result)[esi] = atoi(_String)
        esi += 1
        
        if (esi == 2)
            break
        
        int32_t var_28
        int32_t var_24
        sub_4dc830(&_String_1, var_28, var_24)
        _String = _String_1
        
        if (_String == var_20)
            break
    
    if (esi == 1)
        return result
    
    if (esi == 2)
        return result

arg2[1]
return *arg2
