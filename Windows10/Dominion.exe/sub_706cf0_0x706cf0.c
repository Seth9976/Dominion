// 函数: sub_706cf0
// 地址: 0x706cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* _Buffer_1 = arg1
char* esi = arg2
uint32_t result
result.b = *esi

while (result.b != 0)
    FILE* _Stream = *arg1
    int32_t eax = sx.d(result.b)
    char const* const _Buffer
    
    if (eax == 0x3c)
        int32_t var_1c_2 = 4
        int32_t var_20_2 = 1
        _Buffer = "&lt;"
    label_706d43:
        result = fwrite(_Buffer, 1, 4, _Stream)
        
        if (result != 4)
            sub_63b870(result, &data_801800, "resultCount == len", 
                "C:\x\ax2017\Engine\XmlWriter.cpp", 0x29, "sXmlEmit")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    else
        if (eax == 0x3e)
            int32_t var_1c_1 = 4
            int32_t var_20_1 = 1
            _Buffer = "&gt;"
            goto label_706d43
        
        _Buffer_1.b = *esi
        result = fwrite(&_Buffer_1, 1, 1, _Stream)
        
        if (result != 1)
            sub_63b870(result, &data_801800, "resultCount == 1", 
                "C:\x\ax2017\Engine\XmlWriter.cpp", 0x31, "sXmlEmitChar")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    result.b = esi[1]
    esi = &esi[1]

return result
